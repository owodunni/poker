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

bool gameboard::playerOnPos(const int i){
    return !(seats[i]->id() == 0);
}

void shuffle(){
    deck.mix();
}

void gameboard::deal(){
    for(int j = 1; j < 2; j++){
        for(int i = 0; i < MAX_NUMB_PLAYERS ; i++){
            if(playerOnPos()){
            seat(i)->NewCard(deck.deal(),j);
            }
        }
    }
}

void gameboard::flop(){

    deck.discard();

    for(int i=0;i<3;i++){
        flopTurnRiver[i] = deck.deal();
    }

}

void gameboard::turn(){
    deck.discard();
    flopTurnRiver[3] = deck.deal();
}

void gameboard::river(){
    deck.discard();
    flopTurnRiver[4] = deck.deal();
}

bool gameboard::seatPlayer(const Player* newPlayer, const int pos){
    if(!playerOnPos(pos)){
    seats[pos]=newPlayer
    return true;
    }
    return false;
}

bool removePlayer(Player* oldPlayer, Player* newPlayer){
    for(int i = 0; i<MAX_NUMB_PLAYERS; i++){
        if(seats[i]->id == oldPlayer->id){
            seats[i] = newPlayer;
            return true;
            }
    }
    return false;
}
