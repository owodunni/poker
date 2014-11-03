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

TEST_CARD();

TEST_DECK();

TEST_PLAYER();

TEST_GAMEBOARD();
}

void TEST_CARD(){

Card card;
cout<<"Deleting card\n";

suit_t newSuit{HEARTS};

Card cardA(2, newSuit);
cout<<"Deleting cardA\n";
}

void TEST_DECK(){
Deck deck;
cout<<"Deleting card\n";
}

void TEST_GAMEBOARD(){
Gameboard gameboard;
cout<<"Deleting card\n";

Gameboard gameboardA();
Player player1();
Player player2();
gameboardA.SeatPlayer(&player1, 2);
gameboardA.SeatPlayer(&player2, 3);
cout<<"Deleting card\n";
}

void TEST_PLAYER(){
Player player;
cout<<"Deleting card\n";

Player playerA();
Card card1():
Card card2();
playerA.NewCard(card1,1);
playerA.NewCard(card2,2);
cout<<"Deleting card\n";
}


