#pragma once

#include <string>

using namespace std;

class Robots
{
public:
	// Constructor
	// Runs once automatically when you create an object out of the class
	// Runs once per object but many times per class
	Robots();
	string name;
	void SetNumberOfArms(int numberOfArms);
	int getNumberOfArms();
	
	// Deconstructor this frees up memory
	~Robots();
	private:
		int arms;
		int height;
};