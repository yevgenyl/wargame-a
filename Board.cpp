#include "Board.hpp"
#include <iostream>
typedef unsigned int uint;
using namespace std;

bool WarGame::Board::has_soldiers(uint player_number) const{
    return false; // Need to complete
}

Soldier*& WarGame::Board::operator[](std::pair<int,int> location){
    return this->board[location.first][location.second];
}

Soldier* WarGame::Board::operator[](std::pair<int,int> location) const{
    return this->board[location.first][location.second];
}

void WarGame::Board::move(uint player_number, std::pair<int,int> source, MoveDIR direction){

}
