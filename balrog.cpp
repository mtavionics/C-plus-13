/*
	Author: Mikhail Terentev
	Instructor : Dave Harden
	Class CS 110B Programming Fundamentals : C++
	Name of file : balrog.c
	Description : This is the implemntation file for the Balrog class.
	Assignment 13b (Inheritance 2)
*/

#include "balrog.h"
namespace cs_creature {
// member functions for Balrog class				
Balrog::Balrog() {
  // do nothing but let the parent class constructor work
}






Balrog::Balrog(int newType, int newStrength, int newHitpoints)
    : demon(newType, newStrength, newHitpoints) {
  // do nothing but let the parent class constructor work
}






string Balrog::getSpecies() const { return "Balrog"; }






int Balrog::getDamage() const {
  int damage;

  // cout << "The Balrog";
  damage = demon::getDamage(); // call demon::getDamage()

  // Balrogs are so fast they get to attack twice
  int damage2 = (rand() % getStrength()) + 1;
  cout << "Balrog speed attack inflicts " << damage2
       << " additional damage points!" << endl;
  damage += damage2;

  return damage;
}
} // namespace cs_creature
