#include "./headers/program.hpp"

void program();

int main()
{
  program();
  return 0;
}

void program()
{
  Zoo* zoo = new Zoo();
  int selectedType{0}, typeOfSelected{0};
  while(true)
  {
    showMenu();
    selectedType = selectAnimal();
    selectedType -= 1;
    if(selectedType == 0) 
    {
      showMenuMammals();
      std::cin >> typeOfSelected;
      typeOfSelected -= 1;
      (zoo->*SelectMammals[typeOfSelected])();
    }
    if(selectedType == 1) 
    { 
      showMenuOviparous();
      std::cin >> typeOfSelected;
      typeOfSelected -= 1;
      (zoo->*SelectOviparous[typeOfSelected])();
    }
    if(selectedType >= 2) 
    {
      selectedType -= 2;
      (zoo->*arrFuncOfZoo[selectedType])();
    }
    if(selectedType == -1) break;
  }
  delete zoo;
}