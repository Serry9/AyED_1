
#ifndef OVIPAROUS_HPP
#define OVIPAROUS_HPP

#include "./animal.hpp"

// Abstract class
class Oviparous : public Animal
{
  public:
	  virtual std::string layEggs() = 0;
};

class Crocodile : public Oviparous
{
  private:
  	bool eating;
	  bool sleeping;
	  bool layingEggs;
  public:
    Crocodile();
    std::string getType();
	  std::string eat();
	  void sleep();
	  std::string layEggs();
    std::string mater();
	  bool getEatingStatus();
	  bool getSleepingStatus();
	  bool getMotherStatus();
};

class Goose : public Oviparous
{
  private:
  	bool eating;
	  bool sleeping;
	  bool layingEggs;
  public:
    Goose();
    std::string getType();
	  std::string eat();
	  void sleep();
	  std::string layEggs();
    std::string mater();
	  bool getEatingStatus();
	  bool getSleepingStatus();
	  bool getMotherStatus();
};

class Pelican : public Oviparous
{
  private:
  	bool eating;
	  bool sleeping;
	  bool layingEggs;
  public:
    Pelican();
    std::string getType();
	  std::string eat();
	  void sleep();
	  std::string layEggs();
    std::string mater();
	  bool getEatingStatus();
	  bool getSleepingStatus();
	  bool getMotherStatus();
};

#endif // Oviparous.hpp
