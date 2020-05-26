#pragma once
#include "Board.hpp"
typedef unsigned int uint;

class Soldier {
  uint health = 0;
  uint damage_level = 0;
  uint player = 1; //Deafault player 1
  public: 
    Soldier(){};
    ~Soldier(){};
    void setDamage(uint damageL){
      this->damage_level = damageL;
    }
    void setHelath(uint healthL){
      this->health = healthL;
    }
    void setPlayer(uint player_num){
      this->player = player_num;
    }
    uint getHealth(){
      return this->health;
    }
    uint getDamage(){
      return this->damage_level;
    }
    uint getPlayer(){
      return this->player;
    }
    virtual void attack(Soldier *enemy){};
};
