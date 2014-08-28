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

namespace 
Card
{

	class 
	Card
	{
		
	string name;
	//uint8_t value;
	//uint8_t suit;
		
		//void SetName();
		
	public:
		//Card(const uint8_t , const uint8_t ); //constructor
		
		string Name();
		//uint8_t Value();
		//uint8_t Suit();
		
		//Printing functionality
		//void Print(std::ostream&) const;
		//friend std::ostream& operator << (std::ostream&,Card&);
		
	};
}

#endif
