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
        players.insert(0,newPlayer);
        return true;
    }
    
    for(int i = 0; i < players.size(); i++){
        if(newPlayer->Id() < players->Id()){
            players->insert(/*players.begin()+*/i,newPlayer);
            return true;
        }
    }
    return false;
}

//Public functions
void Gameboard::Deal(){
    for(int j = 1; j < 2; j++){
        for(int i = 0; i < player.size() ; i++){
            players[i]->NewCard(deck.Deal(),j);
            
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
        cout<<"Seat does not exist\n";
        return false;
    }
    
    for(int i; i < players.size(); i++){
        if(player[i]->Id() == newPlayer->Id()){
            cout<<"Seat taken\n";
            return false;
        }
    }
    
    return AddPlayer(newPlayer);
}

bool Gameboard::RemovePlayer(Player* newPlayer){
    
    for(int i = 0; i < player.size(); i++)
    {
            if(players[i]->Id() == newPlayer->Id())
            {
                //players->erase(players.begin()+i);
                return true;
            }
        
    }
    return false;
}
