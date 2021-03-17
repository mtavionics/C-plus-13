/*
	Author: Mikhail Terentev
	Instructor : Dave Harden
	Class CS 110B Programming Fundamentals : C++
	Name of file : Human.h
	Description : This is the header file for the Human class.
	Assignment 13b (Inheritance 2)
*/

#ifndef HUMAN_H_
#define HUMAN_H_

#include "Creature.h"
namespace cs_creature {
class Human : public Creature {
public:
  Human();
  Human(int newType, int newStrength, int newHitpoints);
  // Make getDamage() a virtual function
  virtual int getDamage() const;
  // Comment out the getSpecies() function in the Human class and try compiling
  // the program to see what happens. then uncomment it (i.e., return it to it's
  // previous state).
  virtual string getSpecies() const;
};
} // namespace cs_creature
#endif /* HUMAN_H_ */
