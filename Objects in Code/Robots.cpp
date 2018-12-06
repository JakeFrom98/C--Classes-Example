#include "Robots.h"

Robots::Robots()
{
}

void Robots::SetNumberOfArms(int numberOfArms)
{
	// x = 2;

	arms = numberOfArms;
}

int Robots::getNumberOfArms()
{
	return arms;
}

void Robots::Setheight(int heightofplayer)
{
	height = heightofplayer;
}

int Robots::getheight()
{
	return height;
}

Robots::~Robots()
{
}