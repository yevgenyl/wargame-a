#pragma once
#include "Board.hpp"

class FootCommander: public FootSoldier {
  public:
    FootCommander(){};
    FootCommander(uint player){};
    ~FootCommander(){};
    virtual void attack(Soldier *enemy){};
};
