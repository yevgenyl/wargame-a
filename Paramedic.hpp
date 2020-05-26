#pragma once
#include "Board.hpp"

class Paramedic: public Soldier {
  public:
    Paramedic();
    Paramedic(uint player);
    ~Paramedic(){};
    virtual void heal(){};
};
