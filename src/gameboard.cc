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


GameBoard::GameBoard(vector<Player*> tempPlayers){
  players = tempPlayers;

}

void GameBoard::Deal(){
  std::cout << "Pre Flop" << std::endl;

}

void GameBoard::Flop(){
  std::cout << "Flop" << std::endl;
}

void GameBoard::River(){
  std::cout << "River" << std::endl;
}

void GameBoard::Turn(){
  std::cout << "Turn" << std::endl;
}

void GameBoard::ResolveRound(){
  std::cout << "endRound" << std::endl;
}

bool GameBoard::MakeActions(){
  return false;
}
