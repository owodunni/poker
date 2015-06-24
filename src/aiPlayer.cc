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

#include "../include/aiPlayer.h"

using namespace std;

AiPlayer::Player(const int playerId,const string playerName, const int playerBankroll)
{
	cards.resize(2);
	id = playerId;
	name = playerName;
	bankroll = playerBankroll;
}

int AiPlayer::MakeAction()
{

  std::cout << "AiPlayer making action" << std::endl;

  /*
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
  */
  return 50;
}
