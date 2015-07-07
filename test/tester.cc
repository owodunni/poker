//#########################################
//#                                       #
//#       -----BEATING POKER------        #
//#       - ~a Poole production~ -        #
//#       ------------------------        #
//#                                       #
//#########################################
//# filename:	tester.cc
//# creator:	Alexander Poole
//# date: 		2014.08.27
//#
//# Test file this file is compiled with "make tester" and is used
//#  to test code.
//#########################################
//#
//# TODO:
//#

#include "../include/card.h"
#include "../include/humanPlayer.h"
#include "../include/aiPlayer.h"

int
main()
{
  HumanPlayer humPlay;
  Player * player1 = &humPlay;

  int temp = player1->MakeAction();

  std::cout << temp << std::endl;
}
