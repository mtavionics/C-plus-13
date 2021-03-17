/*
	Author: Mikhail Terentev
	Instructor : Dave Harden
	Class CS 110B Programming Fundamentals : C++
	Name of file : demon.h
	Description : This is the header file for the demon class.
	Assignment 13b (Inheritance 2)
*/

#ifndef DEMON_H_
#define DEMON_H_

#include "Creature.h"
namespace cs_creature {
class demon : public Creature {
public:
  demon();
  demon(int newType, int newStrength, int newHitpoints);
  // Make getDamage() a virtual function
  virtual int getDamage() const;
  virtual string getSpecies() const;
};
} // namespace cs_creature
#endif /* DEMON_H_ */
