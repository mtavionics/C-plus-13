/*
	Author: Mikhail Terentev
	Instructor : Dave Harden
	Class CS 110B Programming Fundamentals : C++
	Name of file : Elf.c
	Description : This is the implemntation file for the Elf class.
	Assignment 13b (Inheritance 2)
*/

#include "elf.h"
namespace cs_creature {
// member functions for Elf class				
Elf::Elf() {
  // do nothing but let the parent class constructor work
}





Elf::Elf(int newType, int newStrength, int newHitpoints)
    : Creature(newType, newStrength, newHitpoints) {
  // do nothing but let the parent class constructor work
}





string Elf::getSpecies() const { return "Elf"; }






int Elf::getDamage() const {
  int damage;

  damage = Creature::getDamage(); // call Creature::getDamage()
  // cout << getSpecies() << " attacks for " << damage << " points!" << endl;

  // Elves inflict double magical damage with a 50% chance
  if ((rand() % 2) == 0) {
    cout << "Magical attack inflicts " << damage << " additional damage points!"
         << endl;
    damage *= 2;
  }

  return damage;
}
} // namespace cs_creature
