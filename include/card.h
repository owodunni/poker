//#########################################      
//#                                       #                     
//#       -----BEATING POKER------        # 
//#       - ~a Poole production~ -        #
//#       ------------------------        #
//#                                       #
//#########################################
//# filename:	card.h                
//# creator:	Alexander Poole     
//# date: 		2014.08.27            
//#                                       
//# The .h file for the card class                 
//#########################################
//#
//# TODO:
//#

#ifndef __CARD_H_INCLUDE__
#define __CARD_H_INCLUDE__

#include <iomanip>
#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;


	enum suit_t {NO_CARD,HEARTS,DIAMONDS,SPADES,CLUBS};

	class 
	Card
	{
		
	int value ;
	suit_t suit ;
	int id;
		
	public:
		Card(const int , const suit_t, const int); //constructor
		
		
		
		int Value();
		suit_t Suit();
		int Id();
		
		//Printing functionality
		//void Print(std::ostream&) const;
		//friend std::ostream& operator << (std::ostream&,Card&);
		
	};


#endif
