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

Robots::~Robots()
{
}