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
    Player player2(IdGen(),"Player 2",2000);

    Gameboard myBoard;

    //myBoard.SeatPlayer(&player1,8);
    myBoard.RemovePlayer(&player1);
    
    if(myBoard.SeatPlayer(&player2,2)){
    cout<<"Funkar\n";
    }
    cout<<"Avslutar\n";
	return 0;
}
