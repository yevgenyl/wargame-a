#pragma once
#include "Board.hpp"

class ParamedicCommander: public Soldier {
  public:
    ParamedicCommander();
    ParamedicCommander(uint player);
    ~ParamedicCommander(){};
    virtual void heal(){};
};
