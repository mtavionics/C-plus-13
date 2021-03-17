/*
	Author: Mikhail Terentev
	Instructor : Dave Harden
	Class CS 110B Programming Fundamentals : C++
	Name of file : demon.c
	Description : This is the implemntation file for the demon class.
	Assignment 13b (Inheritance 2)
*/

#include "demon.h"
namespace cs_creature {
// member functions for demon class			
demon::demon() {
  // do nothing but let the parent class constructor work
}





demon::demon(int newType, int newStrength, int newHitpoints)
    : Creature(newType, newStrength, newHitpoints) {
  // do nothing but let the parent class constructor work
}





string demon::getSpecies() const { return "Demon"; }





int demon::getDamage() const {
  int damage;

  damage = Creature::getDamage(); // call Creature::getDamage()
  // cout << " attacks for " << damage << " points!" << endl;
  // Demons can inflict damage of 50 with a 25% chance
  if (rand() % 4 == 0) {
    damage = damage + 50;
    cout << "Demonic attack inflicts 50 additional damage points!" << endl;
  }

  return damage;
}
} // namespace cs_creature
