/*
 * Dog.h
 *
 *  Created on: 12 Jun 2019
 *      Author: Dave
 */

#ifndef DOG_H_
#define DOG_H_

class Dog
{
private:
	bool sleepy;	/*
					 *  Fields/Attributes/Class variables are not normally defined
					 *  in the .h file although can be done in the latest
					 *  C++ 11 and with most modern and updated compilers.
					 */

public:
	Dog();

	void goToBed();

	~Dog();


};

#endif /* DOG_H_ */
