#pragma once
#include "Board.hpp"

class SniperCommander: public Soldier {
  public:
    SniperCommander();
    SniperCommander(uint player);
    ~SniperCommander(){};
    virtual void attack(Soldier *enemy){};
};