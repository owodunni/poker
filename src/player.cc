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

Player::Player(const int playerId, 
               const string playerName, 
               const int playerBankroll)
{
	cards.resize(2);
	id = playerId;
	name = playerName;
	bankroll = playerBankroll;
}

void Player::NewCard(Card* newCard, int cardNumber)
{
	playing = true;
	cards[cardNumber] = newCard;
}

vector<Card*> Player::Cards()
{
	return cards;
}

int Player::Bet(int bet)
{
	if(bet >= bankroll)
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

void Player::Win(int pot)
{
bankroll += pot;
}

void Player::Fold()
{
	playing = false;
}

bool Player::Playing()
{
return playing;
}

int Player::PlayerPos(){
return playerPos;
}

void Player::seatPlayer(int pos){
playerPos = pos;
}

void Player::ShowCards()
{
 cout << cards[0] << '\n';
 cout << cards[1] << '\n';
}

int Player::Id(){
return id;
}
