//#########################################      
//#                                       #                     
//#       -----BEATING POKER------        # 
//#       - ~a Poole production~ -        #
//#       ------------------------        #
//#                                       #
//#########################################
//# filename:	main.cc              
//# creator:	Alexander Poole         
//# date: 		2014.08.27         
//#                                     
//# The main file                
//#########################################
//#
//# TODO:
//#

#include "../include/deck.h"


using namespace std;



int 
main()
{

Deck myDeck;

myDeck.Mix();

cout<<*myDeck.PeekCard()<<'\n';

	return 0;
}
