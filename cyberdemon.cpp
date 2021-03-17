/*
	Author: Mikhail Terentev
	Instructor : Dave Harden
	Class CS 110B Programming Fundamentals : C++
	Name of file : cyberdemon.c
	Description : This is the implemntation file for the cyberdemon class.
	Assignment 13b (Inheritance 2)
*/

#include "cyberdemon.h"
namespace cs_creature {
// member functions for Cyberdemon class			
Cyberdemon::Cyberdemon() {
  // do nothing but let the parent class constructor work
}





Cyberdemon::Cyberdemon(int newType, int newStrength, int newHitpoints)
    : demon(newType, newStrength, newHitpoints) {
  // do nothing but let the parent class constructor work
}





string Cyberdemon::getSpecies() const { return "Cyberdemon"; }






int Cyberdemon::getDamage() const {
  int damage;
  // cout << "The Cyberdemon";
  damage = demon::getDamage(); // call demon::getDamage()
  return damage;
}
} // namespace cs_creature
