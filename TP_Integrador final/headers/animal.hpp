
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
  private:
    std::string name;
    int code;
  public:
    virtual ~Animal();
    std::string getName();
    int getCode();
    void assign(std::string nam, int cod);
    virtual std::string getType() = 0;
    virtual bool getMotherStatus() = 0;
    virtual std::string eat() = 0;
    virtual void sleep() = 0;
    virtual std::string mater() = 0;
};

std::ostream& operator<<(std::ostream& stream, Animal& anima);
std::istream& operator>>(std::istream& in, Animal& anima);
void showSomeInstructions();

#endif // Animal.hpp

