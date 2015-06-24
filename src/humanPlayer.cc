//#########################################
//#                                       #
//#       -----BEATING POKER------        #
//#       - ~a Poole production~ -        #
//#       ------------------------        #
//#                                       #
//#########################################
//# filename:	deck.cc
//# creator:	Alexander Poole
//# date: 		2015.06.24
//#
//# Polymorph class child to Player
//#########################################
//#
//# TODO:
//#

#include "../include/humanPlayer.h"

using namespace std;

HumanPlayer::HumanPlayer(const int playerId,const string playerName, const int playerBankroll)
{
	cards.resize(2);
	id = playerId;
	name = playerName;
	bankroll = playerBankroll;
}

int HumanPlayer::MakeAction()
{
  int bet;
  std::cout << "Make action [Check (c), Fold (f), Bet (b)]" << std::endl;
  cin >> bet;


	if(bet>=bankroll)
	{
		int tempBankroll = bankroll;
		bankroll = 0;
		return tempBankroll;
	}
	else
	{
		bankroll -= bet;
		return bet;
	}
}
