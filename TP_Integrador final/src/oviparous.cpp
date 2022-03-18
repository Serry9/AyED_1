
#include "../headers/oviparous.hpp"

// Constructor
Crocodile::Crocodile()
  : eating(false), sleeping(false), layingEggs(false) {}

std::string Crocodile::getType()
{
  return "crocodile";
}
std::string Crocodile::eat()
{
  eating = true;
  sleeping = false;
  layingEggs = false;
  return "Comiendo";
}
void Crocodile::sleep()
{
  eating = false;
  sleeping = true;
  layingEggs = false;
}
std::string Crocodile::layEggs()
{
  eating = false;
  sleeping = false;
  layingEggs = true;
  return "Lay eggs";
}
std::string Crocodile::mater()
{
  return layEggs();
}
bool Crocodile::getEatingStatus()
{
  return eating;
}
bool Crocodile::getSleepingStatus()
{
  return sleeping;
}
bool Crocodile::getMotherStatus()
{
  return layingEggs;
}

// Constructor
Goose::Goose()
  : eating(false), sleeping(false), layingEggs(false) {}

std::string Goose::getType()
{
  return "goose";
}
std::string Goose::eat()
{
  eating = true;
  sleeping = false;
  layingEggs = false;
  return "Comiendo";
}
void Goose::sleep()
{
  eating = false;
  sleeping = true;
  layingEggs = false;
}
std::string  Goose::layEggs()
{
  eating = false;
  sleeping = false;
  layingEggs = true;
  return "Lay eggs";
}
std::string Goose::mater()
{
  return layEggs();
}
bool Goose::getEatingStatus()
{
  return eating;
}
bool Goose::getSleepingStatus()
{
  return sleeping;
}
bool Goose::getMotherStatus()
{
  return layingEggs;
}

// Constructor
Pelican::Pelican()
  : eating(false), sleeping(false), layingEggs(false) {}

std::string Pelican::getType()
{
  return "Pelican";
}
std::string Pelican::eat()
{
  eating = true;
  sleeping = false;
  layingEggs = false;
  return "Comiendo";
}
void Pelican::sleep()
{
  eating = false;
  sleeping = true;
  layingEggs = false;
}
std::string  Pelican::layEggs()
{
  eating = false;
  sleeping = false;
  layingEggs = true;
  return "Lay eggs";
}
std::string Pelican::mater()
{
  return layEggs();
}
bool Pelican::getEatingStatus()
{
  return eating;
}
bool Pelican::getSleepingStatus()
{
  return sleeping;
}
bool Pelican::getMotherStatus()
{
  return layingEggs;
}

