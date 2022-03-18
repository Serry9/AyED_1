#include <iostream>

using namespace std;
class Animal{
public:
    Animal(){};
    Animal(string n,int c): name(n), code(c){};
    ~Animal(){};
    string getName(){ return name;};
private:
    string name;
    int code;

};

class Oviparous :public Animal{
public:
    Oviparous(string nombre, int codigo):Animal(nombre,codigo){};
    Oviparous(){}
    ~Oviparous(){}
    void LayEggs(){cout<<" Ponen huevos";}
private:

};

class Crocodile: public Oviparous{
public:
    Crocodile(){};
    Crocodile(string nombre, int codigo): Oviparous (nombre, codigo){};
    ~Crocodile(){};
};

int main()
{
    Oviparous* oviparos = new Oviparous(" La Gallina", 05);
    cout<<oviparos->getName()<<"    ";
    oviparos->LayEggs();
    cout<<"\n --------------\n";

    Animal* gallina= oviparos;
    cout<<gallina->getName();
    cout<<"\n --------------\n";

    Oviparous plaga(" La Paloma",33);
    cout<<plaga.getName()<<endl;
    plaga.LayEggs();

    Animal* a1= &plaga;
    cout<<a1->getName();
    cout<<"\n --------------\n";

    Animal* ave = new Oviparous(" El Gorrion",99);
    cout<<ave->getName();
    cout<<"\n --------------\n";
    Crocodile* coco = new Crocodile(" Cartera",987);

    Animal* cocodrilo = new Crocodile(" Zapato",876);
    cout<<coco->getName();
    coco->LayEggs();
    cocodrilo-> getName();

    delete cocodrilo;
    delete coco;
    delete ave;
    delete a1;
    delete gallina;
    delete oviparos;
    return 0;
}
