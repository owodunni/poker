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

#include "../include/main.h"

using namespace std;

string Insert(const std::string okEntry [], const std::string message) {

	bool legEntry = false;
	string entry = "";
	size_t entryLenght = 0;

	while (okEntry [entryLenght] != "ä" ) {
		entryLenght++;
	}

	while (!legEntry){
		std::cout << message << std::endl;
		cin >> entry;

		for (size_t i = 0; i < entryLenght; i++){
			if(entry==okEntry [i]){
				legEntry = true;
				break;
			}
		}
	}
	return entry;
}

vector<Player*> SetUp(){
	string setup;
	int numPlay;
	std::string aiType;
	std::string playEntries   [] = {"1","2","3","4","5","6","7","8","9","10","ä"};
	std::string setupEntries  [] = {"y","Y","N","n","ä"};
	std::string aiTypeEntries [] = {"H","h","A","a","M","m","E","e","ä"};

	cout << "Welcome to BEATING POKER a simple poker game." << endl;

	numPlay = atoi(Insert(playEntries,"How many AI-players do you want? [Max 10]").c_str());
	setup = Insert(setupEntries,"Do you want to do an advance setup? [y/n]");
	vector<Player*> players;
	players.resize(numPlay);

	if(setup == "y" or setup == "Y"){
		cout << "ADVANCED SETUP" << endl;
		for(int i = 0;  i< numPlay; i++) {
			string tempPlayerType;
			Player* tempPlayer;
			tempPlayerType = Insert(aiTypeEntries, "Insert player type \n Human [h] \n Advanced [a] \n Medium [m] \n Easy [e]");

			if(tempPlayerType == "h" or tempPlayerType == "H"){
				tempPlayer = new HumanPlayer;
			}
			else if(tempPlayerType == "a" or tempPlayerType == "A"){
				tempPlayer = new AiPlayer;
			}
			else if(tempPlayerType == "m" or tempPlayerType == "M"){
				tempPlayer = new AiPlayer;
			}
			else if(tempPlayerType == "e" or tempPlayerType == "E"){
				tempPlayer = new AiPlayer;
			}
			players[i] = tempPlayer;
		}
	}
	else if(setup == "n" or setup == "N"){
		cout << "QUICK SETUP" << endl;
		aiType = Insert(aiTypeEntries,"What AI do you want to battle? \n Advanced [a] \n Medium [m] \n Easy [e]");
	}

	return players;
}

int
main()
{

GameBoard pokerGameBoard(SetUp());

bool 			playing	=	true;
state_t 	gameState = PREFLOP;

while(playing)
{
	switch (gameState) {
		case PREFLOP:
			pokerGameBoard.Deal();
			gameState = FLOP;
			break;
		case FLOP:
			pokerGameBoard.Flop();
			gameState = RIVER;
			break;
		case RIVER:
			pokerGameBoard.River();
			gameState = TURN;
			break;
		case TURN:
			pokerGameBoard.Turn();
			gameState = ENDROUND;
			break;
		case ENDROUND:
			pokerGameBoard.ResolveRound();
			gameState = PREFLOP;
			break;
	}
	if(pokerGameBoard.MakeActions()){
		gameState = ENDROUND;
	}

}

	return 0;
}
