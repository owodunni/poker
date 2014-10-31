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

Gameboard::Gameboard(){
flopTurnRiver.resize(5);
}

//Private functions
void Gameboard::Shuffle(){
    deck.Mix();
}

bool Gameboard::AddPlayer(Player* newPlayer){
    if(players.size() == 0){
        players.push_back(newPlayer);
        return true;
    }
    
    for(unsigned int i = 0; i < players.size(); i++){
        if(newPlayer->Id() < players.at(i)->Id()){
           players.insert(players.begin()+i,newPlayer);
           return true;
        }
    }
    return false;
}

//Public functions
void Gameboard::Deal(){
    for(unsigned int j = 1; j < 2; j++){
        for(unsigned int i = 0; i < players.size() ;i++){
            players.at(i)->NewCard(deck.Deal(),j);
        }
    }
}

void Gameboard::Flop(){

    deck.Discard();

    for(unsigned int i=0;i<3;i++){
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
        cout<<"Seat does not exist\n";
        return false;
    }
    
    for(unsigned int i; i < players.size(); i++){
        if(players.at(i)->Id() == newPlayer->Id()){
            cout<<"Seat taken\n";
            return false;
        }
    }
    
    return AddPlayer(newPlayer);
}

bool Gameboard::RemovePlayer(Player* newPlayer){
    
    for(unsigned int i = 0; i < players.size(); i++)
    {
            if(players.at(i)->Id() == newPlayer->Id())
            {
                players
                players.erase(players.begin()+i);
                return true;
            }
        
    }
    return false;
}
