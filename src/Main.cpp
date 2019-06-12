/*
 * Main.cpp
 *
 *  Created on: 12 Jun 2019
 *      Author: Dave
 */

#include<iostream>
#include "Dog.h"

using namespace std;

int main()
{
	cout << "Starting Program..." << endl;

	{
		Dog snoopy;			// Extra curly braces can be placed in the code to
		snoopy.goToBed();	// to force the  to run early, freeing up memory.
	}

	cout << "Ending Program..." << endl;

	return 0;


	/*
	 * Without the additional curly braces above the destructor would
	 * normally run at the last curly brace after the object has been created
	 * as soon as the object essentially goes out of scope.
	 */
}

