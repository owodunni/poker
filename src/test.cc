//#########################################
//#                                       #
//#       -----BEATING POKER------        #
//#       - ~a Poole production~ -        #
//#       ------------------------        #
//#                                       #
//#########################################
//# filename:	test.cc
//# creator:	Alexander Poole
//# date: 		2014.11.03
//#
//# The gameboard class 
//#########################################
//#
//# TODO: 
//#

#include "../include/test.h"


suit_t newSuit HEARTS;


void TEST_CLASSES(){

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