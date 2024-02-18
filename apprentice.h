#pragma once
// Included string file to utilize strings
#include <string>
//Include character header file to utilize variables
#include "character.h"

//Utilizing this allows us to not have to put std on every line
using namespace std;



//Class defined for apprentices
class apprentices : public character
{ //Starting scope operator, this starts a code block

// Private is data that can only be accessed by the class
private:
	// integer for health aid
	int healthAid;
	// integer for shield boost
	int shieldBoost;
	// string for type of supporter
	string supportType;

	// Our Methods are stored here
public:
	// This constructor has no return types
	apprentices();

	// This constructor has return types for our characters
	apprentices(string Name, int Strength, int Health, int Damage,);

	//declare the function then put what it will do in respected cpp file
	void display();


}; // Ending scope operator, this end a block of code.