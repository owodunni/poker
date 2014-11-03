//#########################################      
//#                                       #                     
//#       -----BEATING POKER------        # 
//#       - ~a Poole production~ -        #
//#       ------------------------        #
//#                                       #
//#########################################
//# filename:	gameboard.h                
//# creator:	Alexander Poole     
//# date: 		2014.11.03           
//#                                       
//# The .h file for tester this file contains tests             
//#########################################
//#
//# TODO: 
//#

#ifndef __TEST_H_INCLUDE__
#define __TEST_H_INCLUDE__

#include "gameboard.h"

using namespace std;

/**
	* Creating one of each class and destroying them
	*/

void TEST_CLASSES(){

suit_t newSuit HEARTS;

Card card;
cout<<"Deleting card\n";
delete card;

Card cardA(2, newSuit);
cout<<"Deleting cardA\n";
delete cardA;

Deck deck;
cout<<"Deleting card\n";
delete deck;

Gameboard gameboard;
cout<<"Deleting card\n";
delete gameboard;

Gameboard gameboardA();
Player player1();
Player player2();
gameboardA.SeatPlayer(&player1, 2);
gameboardA.SeatPlayer(&player2, 3);
cout<<"Deleting card\n";
delete gameboardA;

Player player;
cout<<"Deleting card\n";
delete player;

Player playerA();
Card card1():
Card card2();
playerA.card1(card1,1);
playerA.card2(card2,2);
cout<<"Deleting card\n";
delete playerA;
}


#endif