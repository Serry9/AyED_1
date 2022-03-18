
#ifndef MAMMAL_HPP
#define MAMMAL_HPP

#include "./animal.hpp"

// Abstract class
class Mammal : public Animal
{
  public:
	  virtual std::string nurse() = 0;
};

class Whale : public Mammal
{
  private:
    bool eating;
    bool sleeping;
    bool care;
  public:
    Whale();
    std::string getType();
    std::string eat();
    void sleep();
    std::string nurse();
    std::string mater();
    bool getEatingStatus();
    bool getSleepingStatus();
    bool getMotherStatus();
};

 class SeaLion : public Mammal
{
  private:
    bool eating;
    bool sleeping;
    bool care;
  public:
    SeaLion();
    std::string getType();
    std::string eat();
    void sleep();
    std::string nurse();
    std::string mater();
    bool getEatingStatus();
    bool getSleepingStatus();
    bool getMotherStatus();
};

class Bat : public Mammal
{
  private:
    bool eating;
    bool sleeping;
    bool care;
  public:
    Bat();
    std::string getType();
    std::string eat();
    void sleep();
    std::string nurse();
    std::string mater();
    bool getEatingStatus();
    bool getSleepingStatus();
    bool getMotherStatus();
};

#endif // Mammal.hpp
