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

#include "../include/gameboard.h"


using namespace std;

int newPlayerId = 1;

int IdGen(){
    int tempId = newPlayerId;
    newPlayerId++;
    return tempId;
}

int 
main()
{
    Player player1(IdGen(),"Player 1",1000);
    Player player2(IdGen(),"Player 2",500);

    Gameboard myBoard();

	return 0;
}
