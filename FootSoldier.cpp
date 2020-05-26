#include "FootSoldier.hpp"

FootSoldier::FootSoldier(){
    this->setHelath(100);
    this->setDamage(10);
}

FootSoldier::FootSoldier(uint player){
    this->setHelath(100);
    this->setDamage(10);
    this->setPlayer(player); 
}

void FootSoldier::attack(Soldier *enemy){
    enemy->setHelath(enemy->getHealth() - this->getDamage());
}
