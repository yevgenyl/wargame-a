#pragma once
#include "Board.hpp"

class Sniper: public Soldier {
  public:
    Sniper();
    Sniper(uint player);
    ~Sniper(){};
    virtual void attack(Soldier *enemy){};
};