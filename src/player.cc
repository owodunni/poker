//#########################################
//#                                       #
//#       -----BEATING POKER------        #
//#       - ~a Poole production~ -        #
//#       ------------------------        #
//#                                       #
//#########################################
//# filename:	player.cc
//# creator:	Alexander Poole
//# date: 		2014.09.28
//#
//# The player class
//#########################################
//#
//# TODO:
//#

#include "../include/player.h"

void Player::NewCard(Card* newCard, int cardNumber)
{
	if (bankroll>0)
	{
		playing = true;
		cards[cardNumber]=newCard;
	}
}

vector<Card*> Player::Cards()
{
	return cards;
}

void Player::Win(int pot)
{
	bankroll += pot;
}

bool Player::Playing()
{
	return playing;
}

void Player::ShowCards()
{
 cout<<cards[0]<<'\n';
 cout<<cards[1]<<'\n';
}
