
#ifndef ZOO_HPP
#define ZOO_HPP

#include "./mammal.hpp"
#include "./oviparous.hpp"

class Zoo
{
  public:
    Zoo();
    ~Zoo();
    void enterAnimal(Animal& animas);
    void enterSeaLions();
    void enterWhales();
    void enterBats();
    void enterCrocodile();
    void enterGoose();
    void enterPelican();
    void showList();
    void showListMother();
  private:
    enum{capacity = 50};
    Animal*    animal[capacity];
    int        counter;
};

#endif // Zoo.hpp

