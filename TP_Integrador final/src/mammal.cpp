
#include "../headers/mammal.hpp"

/*  Constructor     */
Whale::Whale()
  : eating(false), sleeping(false), care(false) {}

std::string Whale::getType()
{
  return "whale";
}
std::string Whale::eat()
{
  eating = true;
  sleeping = false;
  care = false;
  return "Comiendo";
}
void Whale::sleep()
{
  sleeping = true;
  eating = false;
  care = false;
}
std::string Whale::nurse()
{
  care = true;
  eating = false;
  sleeping = false;
  return "nurse";
}
std::string Whale::mater()
{
  return nurse();
}
bool Whale::getEatingStatus()
{
  return eating;
}
bool Whale::getSleepingStatus()
{
  return sleeping;
}
bool Whale::getMotherStatus()
{
  return care;
}

// Constructor
SeaLion::SeaLion()
  : eating(false), sleeping(false), care(false) {}

std::string SeaLion::getType()
{
  return "sealion";
}
std::string SeaLion::eat()
{
  eating = true;
  sleeping = false;
  care = false;
  return "Comiendo";
}
void SeaLion::sleep()
{
  eating = false;
  sleeping = true;
  care = false;
}
std::string SeaLion::nurse()
{
  eating = false;
  sleeping = false;
  care = true;
  return "nurse";
}
std::string SeaLion::mater()
{
  return nurse();
}
bool SeaLion::getEatingStatus()
{
  return eating;
}
bool SeaLion::getSleepingStatus()
{
  return sleeping;
}
bool SeaLion::getMotherStatus()
{
  return care;
}

// Constructor
Bat::Bat()
  : eating(false), sleeping(false), care(false) {}

std::string Bat::getType()
{
  return "bat";
}
std::string Bat::eat()
{
  eating = true;
  sleeping = false;
  care = false;
  return "comiendo";
}
void Bat::sleep()
{
  eating = false;
  sleeping = true;
  care = false;
}
std::string Bat::nurse()
{
  eating = false;
  sleeping = false;
  care = true;
  return "Nurse";
}
std::string Bat::mater()
{
  return nurse();
}
bool Bat::getEatingStatus()
{
  return eating;
}
bool Bat::getSleepingStatus()
{
  return sleeping;
}
bool Bat::getMotherStatus()
{
  return care;
}

