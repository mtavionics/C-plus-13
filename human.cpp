/*
	Author: Mikhail Terentev
	Instructor : Dave Harden
	Class CS 110B Programming Fundamentals : C++
	Name of file : Human.c
	Description : This is the implemntation file for the Human class.
	Assignment 13b (Inheritance 2)
*/

#include "human.h"
namespace cs_creature {
	// member functions for Human class				
Human::Human() {
  // do nothing but let the parent class constructor work
}





Human::Human(int newType, int newStrength, int newHitpoints)
    : Creature(newType, newStrength, newHitpoints) {
  // do nothing but let the parent class constructor work
}





string Human::getSpecies() const { return "Human"; }





int Human::getDamage() const {
  int damage;

  damage = Creature::getDamage(); // call Creature::getDamage()
  // cout << getSpecies() << " attacks for " << damage << " points!" << endl;

  return damage;
}
} // namespace cs_creature
