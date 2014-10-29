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
    return !(seats[i] == NULL);
}

void Gameboard::Shuffle(){
    deck.Mix();
}

//Public functions
void Gameboard::Deal(){
    for(int j = 1; j < 2; j++){
        for(int i = 0; i < MAX_NUMB_PLAYERS ; i++){
            if(PlayerOnPos(i)){
            seats[i]->NewCard(deck.Deal(),j);
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

bool Gameboard::SeatPlayer(Player* newPlayer, 
                           const int pos){
    if(pos >= MAX_NUMB_PLAYERS){
    return false;
    }
    else if(!PlayerOnPos(pos)){
        seats[pos]=newPlayer;
        return true;
    }
    return false;
}

bool Gameboard::RemovePlayer(Player* newPlayer){
    
    cout<<newPlayer->Id()<<'\n';
                          
    for(int i = 0; i < MAX_NUMB_PLAYERS; i++)
    {
        if(PlayerOnPos(i))
        {
        seats[i]->Id(); 
            /*if(seats[i]->Id() == newPlayer->Id())
            {
                seats[i] = NULL;
                return true;
            }*/
        }
    }
    return false;
}
