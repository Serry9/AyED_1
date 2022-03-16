#include <iostream>
using namespace std;
#include <string>
#include <fstream>

//------------------------------------------------------------
typedef struct {
    string nombre;
    string apellido;
    int edad;
    int long DNI;
    int nota;
} tEstructura;

typedef tEstructura tVector[49];

typedef struct{
    tVector alumno;
    int contador;
} tLista;
//-----------------------------------------------------

void cargaDeArchivo (const string path, tLista& LISTA);
int menuPrincipal ();
void showList(tLista LISTA);
void addNew (tLista& LISTA);
void changeOne (tLista& LISTA);
void saveList (const string path, tLista& LISTA);
void deleteOne (tLista& LISTA);
void changeNotes(tLista& LISTA);
void clasificateNotes (tLista LISTA);
int calculatePromedio (tLista LISTA);

int main () {
    tLista lista;
    int op;

    cargaDeArchivo("AyED1.txt", lista); // cargar lista

    do {
        op = menuPrincipal ();

        switch (op){
            case 1:{
            //-----------LISTA Completa-------------------------------------------------------------------------------
                showList(lista);
            } break;

            case 2:{
            //------Nuevo Elemento------------------------------------------------------------------------------------
                addNew (lista);
                saveList ("AyED1.txt", lista);
            } break;

            case 3:{
            //------------Modificar elemento--------------------------------------------------------------------------
                changeOne (lista);
                saveList ("AyED1.txt", lista);
            }break;

            case 4:{
            //-------------Borrar elemento----------------------------------------------------------------------------
                deleteOne (lista);
            } break;

            case 5:{
            //-------------Carga de Notas-----------------------------------------------------------------------------
                changeNotes(lista);
            } break;

            case 6:{
            //-------------Lista de Notas------------------------------------------------------------------------------

            }
        }

    } while (op < 7);

    cout << "Adios, gracias!!";

    return 0;
}

void cargaDeArchivo (const string path, tLista& LISTA) {

    ifstream archivoLista;

    char aux;
    int pos;

    LISTA.contador = pos = 0;

    archivoLista.open(path);

    if (archivoLista.is_open()) {

        do {

            archivoLista >> LISTA.alumno[pos].edad >> LISTA.alumno[pos].DNI >> LISTA.alumno[pos].nota >> LISTA.alumno[pos].apellido;

            archivoLista.get(aux);

            getline(archivoLista, LISTA.alumno[pos].nombre);

            pos++;

        } while ( !archivoLista.eof() );

        LISTA.contador = pos ;

    }

    archivoLista.close();

    return;
}

int menuPrincipal () {

    int op;

    do {
        cout << "Que desea hacer?" << endl;
        cout << "1.- Ver Lista Completa" << endl;
        cout << "2.- Agregar Alumno Nuevo" << endl;
        cout << "3.- Modificar Alumno" << endl;
        cout << "4.- Eliminar Alumno" << endl;
        cout << "5.- Cargar Notas" << endl;
        cout << "6.- Lista de Notas" << endl;
        cout << "7.- Salir" << endl;
        cin >> op;
    } while ( op < 1 || op > 7);

    return op;
}

void showList(tLista LISTA) {

    cout << "Lista de alumnos (" << LISTA.contador << "):" << endl;

    for (int i=0; i < LISTA.contador; i++) {

        cout << LISTA.alumno[i].apellido << ", " << LISTA.alumno[i].nombre << " - D.N.I.: " << LISTA.alumno[i].DNI << " - Edad: " << LISTA.alumno[i].edad << " - Nota: " << LISTA.alumno[i].nota << endl;

    }

    return;
}

void addNew (tLista& LISTA) {

    cout << "Nuevo alumno.-" << endl;
    cout << "Nombre/s: "; cin >> LISTA.alumno[LISTA.contador].nombre;
    cout << "Apellido: "; cin >> LISTA.alumno[LISTA.contador].apellido;
    cout << "D.N.I.: "; cin >> LISTA.alumno[LISTA.contador].DNI;
    cout << "Edad: "; cin >> LISTA.alumno[LISTA.contador].edad;
    cout << "Nota: "; cin >> LISTA.alumno[LISTA.contador].nota;
    LISTA.contador++;

    return;
}

void changeOne (tLista& LISTA) { //debo crear otra funcion para utilizar adentro

    int dni, pos;

    do {
        cout << "DNI del alumno que desea modificar:" << endl;
        cin >> dni;

        pos = 0;

        while ( (LISTA.alumno[pos].DNI != dni) && pos < LISTA.contador ){
            pos++;
        }

        if ( LISTA.alumno[pos].DNI == dni) {
             cout << "Modificar a " << LISTA.alumno[pos].apellido << ", " << LISTA.alumno[pos].nombre << endl;

            cout << "Nombre/s: ";
            cin >> LISTA.alumno[pos].nombre;

            cout << "Apellido: ";
            cin >> LISTA.alumno[pos].apellido;

            cout << "D.N.I.: ";
            cin >> LISTA.alumno[pos].DNI;

            cout << "Edad: ";
            cin >> LISTA.alumno[pos].edad;

            cout << "Nota: ";
            cin >> LISTA.alumno[pos].nota;
        }
        else {
            cout << "No hubo coincidencia";
        }

    } while (LISTA.alumno[pos].DNI != dni);

    return;
}

void saveList (const string path, tLista& LISTA) {
    ofstream archivoLista;
    int pos;

    pos = 0;

    archivoLista.open(path);

    if (archivoLista.is_open()) {

        do {
            archivoLista << LISTA.alumno[pos].edad << " " <<  LISTA.alumno[pos].DNI << " " << LISTA.alumno[pos].nota << " " << LISTA.alumno[pos].apellido << " " << LISTA.alumno[pos].nombre << endl;

            pos++;

        } while ( pos < LISTA.contador );

    }

    archivoLista.close();

    return;
}

void deleteOne (tLista& LISTA) { //debo crear otra funcion para utilizar adentro
    int dni, pos;

    pos = 0;

    cout << "DNI del alumno que desea borrar: ";
    cin >> dni;

    while ( (LISTA.alumno[pos].DNI != dni) && pos < LISTA.contador ){
        pos++;
    }

    if (LISTA.alumno[pos].DNI == dni){

        for (int i = pos; i< LISTA.contador - 1; i++){

            LISTA.alumno[i].nombre = LISTA.alumno[i+1].nombre;

            LISTA.alumno[i].apellido = LISTA.alumno[i+1].apellido;

            LISTA.alumno[i].DNI = LISTA.alumno[i+1].DNI;

            LISTA.alumno[i].edad = LISTA.alumno[i+1].edad;

            LISTA.alumno[i].nota = LISTA.alumno[i+1].nota;
        }
    }
    else {
        cout << "No hubo coincidencia";
    }

    return;
}

void changeNotes(tLista& LISTA) {

    for (int i=0; i < LISTA.contador; i++){
        cout << LISTA.alumno[i].apellido << ", " << LISTA.alumno[i].nombre << "; " << LISTA.alumno[i].DNI << " - Nota: " << endl;
        cin >> LISTA.alumno[i].nota;
    }

    return;
}

void clasificateNotes (tLista LISTA) {// debo crear otras funciones para que haga una sola cosa
    int nota, pos;
    int vectorNotas[50];

    nota = pos = 0;

    cout << "Mejores notas" << endl;

    // Valor nota mas alta
    for (int i=0; i < LISTA.contador; i++) {
        if (LISTA.alumno[i].nota > nota)
            nota = LISTA.alumno[i].nota;
    }

    // vector de posiciones donde tienen la nota mas alta
    for (int i=0; i < LISTA.contador; i++) {

        if (LISTA.alumno[i].nota == nota) {
            vectorNotas[pos] = i;
            pos++;
        }
    }

    // lista de alumnos que tienen la nota mas alta
    for (int i=0; i < pos; i++) {
        cout << LISTA.alumno[vectorNotas[i]].apellido << ", " << LISTA.alumno[vectorNotas[i]].nombre << " - Nota: " << LISTA.alumno[vectorNotas[i]].nota << endl;
    }

    return;
}

int calculatePromedio (tLista LISTA) {
    double suma;
    double promedio;

    for (int i=0; i < LISTA.contador; i++){
        suma = suma + LISTA.alumno[i].nota;
    }

    promedio = suma / LISTA.contador;

    return promedio;
}

