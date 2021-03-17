/*
	Author: Mikhail Terentev
	Instructor : Dave Harden
	Class CS 110B Programming Fundamentals : C++
	Name of file : balrog.h
	Description : This is the header file for the Balrog class.
	Assignment 13b (Inheritance 2)
*/

#ifndef BALROG_H_
#define BALROG_H_

#include "demon.h"

namespace cs_creature {
class Balrog : public demon {
public:
  Balrog();
  Balrog(int newType, int newStrength, int newHitpoints);
  // Make getDamage() a virtual function
  virtual int getDamage() const;
  virtual string getSpecies() const;
};
} // namespace cs_creature
#endif /* BALROG_H_ */
