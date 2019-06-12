/*
 * Dog.cpp
 *
 *  Created on: 12 Jun 2019
 *      Author: Dave
 */

#include<iostream>
#include "Dog.h"

using namespace std;

Dog::Dog()		// Constructor
{
	sleepy = true;
	cout << "A dog has been created!" << endl;
}

Dog::~Dog()		// Destructor, remember the tilde ~ symbol
{
	cout << "A dog has been destroyed!" << endl;
}

void Dog::goToBed()
{
	if(sleepy)
	{
		cout << "Going to bed now..." << endl;
	}
	else
	{
		cout << "I'm not sleepy..." << endl;
	}
}
