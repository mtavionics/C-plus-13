/*
	Author: Mikhail Terentev
	Instructor : Dave Harden
	Class CS 110B Programming Fundamentals : C++
	Name of file : Elf.h
	Description : This is the header file for the Elf class.
	Assignment 13b (Inheritance 2)
*/

#ifndef ELF_H_
#define ELF_H_

#include "Creature.h"
namespace cs_creature {
class Elf : public Creature {
public:
  Elf();
  Elf(int newType, int newStrength, int newHitpoints);
  // Make getDamage() a virtual function
  virtual int getDamage() const;
  virtual string getSpecies() const;
};
} // namespace cs_creature
#endif /* ELF_H_ */
