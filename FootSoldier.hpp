#pragma once
#include "Board.hpp"

class FootSoldier: public Soldier {
  public:
    FootSoldier();
    FootSoldier(uint player);
    ~FootSoldier(){};
    virtual void attack(Soldier *enemy);
};
