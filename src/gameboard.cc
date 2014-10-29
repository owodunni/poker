//#########################################
//#                                       #
//#       -----BEATING POKER------        #
//#       - ~a Poole production~ -        #
//#       ------------------------        #
//#                                       #
//#########################################
//# filename:	gameboard.cc
//# creator:	Alexander Poole
//# date: 		2014.09.28
//#
//# The gameboard class 
//#########################################
//#
//# TODO: 
//#

#include "../include/gameboard.h"

//Private functions

Gameboard::Gameboard(){
}

bool Gameboard::PlayerOnPos(const int i){
    return !(seats[i]->id() == 0);
}

void Gameboard::Shuffle(){
    deck.mix();
}

//Public functions
void Gameboard::Deal(){
    for(int j = 1; j < 2; j++){
        for(int i = 0; i < MAX_NUMB_PLAYERS ; i++){
            if(PlayerOnPos()){
            seats(i)->NewCard(deck.Deal(),j);
            }
        }
    }
}

void Gameboard::Flop(){

    deck.Discard();

    for(int i=0;i<3;i++){
        flopTurnRiver[i] = deck.Deal();
    }

}

void Gameboard::Turn(){
    deck.Discard();
    flopTurnRiver[3] = deck.Deal();
}

void Gameboard::River(){
    deck.Discard();
    flopTurnRiver[4] = deck.Deal();
}

vector<Card*> Gameboard::FlopTurnRiver(){
    return flopTurnRiver;
}

bool Gameboard::SeatPlayer(const Player* newPlayer, 
                           const int pos){
                           
    if(!PlayerOnPos(pos)){
    seats[pos]=newPlayer
    return true;
    }
    return false;
}

bool Gameboard::RemovePlayer(Player* oldPlayer, 
                             Player* newPlayer){
                             
    for(int i = 0; i < MAX_NUMB_PLAYERS; i++){
        if(seats[i]->id == oldPlayer->id){
            seats[i] = newPlayer;
            return true;
            }
    }
    return false;
}
