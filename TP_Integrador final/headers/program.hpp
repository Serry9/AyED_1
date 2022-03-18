
#ifndef PROGRAM_HPP
#define PROGRAM_HPP

#include "./zoo.hpp"

void ( Zoo::*arrFuncOfZoo[2])() =
{
  &Zoo::showList,
  &Zoo::showListMother
};
void (Zoo::*SelectMammals[3]) () =
{
  &Zoo::enterWhales,
  &Zoo::enterSeaLions,
  &Zoo::enterBats
};
void (Zoo::*SelectOviparous[3]) () =
{
  &Zoo::enterGoose,
  &Zoo::enterCrocodile,
  &Zoo::enterPelican
};
void showMenu()
{
  std::cout << "*********  Welcome Zoo Park  ********" << std::endl
            << "\t 1- Mamal "                          << std::endl
            << "\t 2- Oviparous "                      << std::endl
            << "\t 3- Animal List"                     << std::endl
            << "\t 4- Nurse or Lay Eggs "              << std::endl
            << "\t 0- Out "                            << std::endl
            << "*************************************" << std::endl;
}
int selectAnimal()
{
  int animal;
  std::cin >> animal;
  return animal;
}
void showMenuMammals()
{
  std::cout << "  Elegir  "   << std::endl
            << " 1- Whales"   << std::endl
            << " 2- SeaLions" << std::endl
            << " 3- Bats"     << std::endl;
}
void showMenuOviparous()
{
  std::cout << "  Elegir  "    << std::endl
            << " 1- Goose"     << std::endl
            << " 2- Crocodile" << std::endl
            << " 3- Pelican"   << std::endl;
}

#endif // Program.hpp

