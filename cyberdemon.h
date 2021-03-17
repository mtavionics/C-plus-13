/*
	Author: Mikhail Terentev
	Instructor : Dave Harden
	Class CS 110B Programming Fundamentals : C++
	Name of file : Cyberdemon.h
	Description : This is the header file for the Cyberdemon class.
	Assignment 13b (Inheritance 2)
*/

#ifndef CYBERDEMON_H_
#define CYBERDEMON_H_

#include "demon.h"

namespace cs_creature {
class Cyberdemon : public demon {
public:
  Cyberdemon();
  Cyberdemon(int newType, int newStrength, int newHitpoints);
  // Make getDamage() a virtual function
  virtual int getDamage() const;
  virtual string getSpecies() const;
};
} // namespace cs_creature
#endif /* CYBERDEMON_H_ */
