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
#include "../include/deck.h"


using namespace std;

string Insert(const std::string okEntry [], const std::string message) {

	bool legEntry = false;
	string entry = "";
	size_t entryLenght = 0;

	while (okEntry [entryLenght] != "ä" ) {
		entryLenght++;
	}

	while (!legEntry)
	{
		std::cout << message << std::endl;
		cin >> entry;

		for (size_t i = 0; i < entryLenght; i++)
		{
			if(entry==okEntry [i])
			{
				legEntry = true;
				break;
			}
		}
	}
	return entry;
}

void Intro()
{
	string setup;
	int numPlay;
	std::string playEntries   [] = {"1","2","3","4","5","6","7","8","9","10","ä"};
	std::string setupEntries  [] = {"y","Y","N","n","ä"};
	std::string AiTypeEntries [] = {"H","h","M","m","E","e","ä"}

	cout << "Welcome to BEATING POKER a simple poker game." << endl;

	numPlay = atoi(Insert(playEntries,"How many AI-players do you want? [Max 10]").c_str());
	setup = Insert(setupEntries,"Do you want to do an advance setup? [y/n]");

	if(setup == "y" or setup == "Y")
	{
		cout << "ADVANCED SETUP" << endl;

	}
		else if(setup == "n" or setup == "N")
	{
		cout << "QUICK SETUP" << endl;
	}
}


int
main()
{

Intro();

//bool 	playing	=	true;



/*
while(playing)
{
	int 	gameState = preFlop;
	switch (gameState) {
		case 1:
	}

}
*/
	return 0;
}
