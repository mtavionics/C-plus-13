/*
	Author: Mikhail Terentev
	Instructor : Dave Harden
	Class CS 110B Programming Fundamentals : C++
	Name of file : creature.h
	Description : This is the header file for the Creature class.
	Assignment 13b (Inheritance 2)
*/

#ifndef CREATURE_H_
#define CREATURE_H_

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

namespace cs_creature {
class Creature {
private:
  int type;      // 0 Human, 1 Cyberdemon, 2 Balrog, 3 elf
  int strength;  // how much damage this Creature inflicts
  int hitpoints; // how much damage this Creature can sustain

public:
  Creature(); // initialize to Human, 10 strength, 10 hitpoints
  Creature(int newType, int newStrength, int newHitpoints);
  // make the getSpecies() function a virtual function:
  virtual string getSpecies() const; // returns the type of the species
  virtual int getDamage() const; // returns the amount of damage this Creature
                                 // inflicts in one round of combat

  // also include appropriate accessors and mutators:
  int getStrength() const;
  void setStrength(int);
  int getHitpoints() const;
  void setHitpoints(int);
};






int battleArena(Creature &, Creature &);
} // namespace cs_creature
#endif /* CREATURE_H_ */






/*
 Output:

****** Example 1:
--------------------------------------------
The battle between Elfand Balrog starts...

The Balrog attacks for 20 points!
Demonic attack inflicts 50 additional damage points!
Balrog speed attack inflicts 45 additional damage points!
The Elf attacks for 44 points!
Magical attack inflicts 44 additional damage points!
Creature Elf remaining hitpoints = -65
Creature Balrog remaining hitpoints = -38

Game tied.

****** Example 2:

--------------------------------------------
The battle between Elf and Balrog starts...

The Balrog attacks for 48 points!
Balrog speed attack inflicts 26 additional damage points!
The Elf attacks for 47 points!
Creature Elf remaining hitpoints = -24
Creature Balrog remaining hitpoints = 3

Game over. Creature Elf wins.

****** Example 3:

--------------------------------------------
The battle between Elf and Balrog starts...

The Balrog attacks for 14 points!
Balrog speed attack inflicts 27 additional damage points!
The Elf attacks for 34 points!
Creature Elf remaining hitpoints = 9
Creature Balrog remaining hitpoints = 16
The Balrog attacks for 50 points!
Balrog speed attack inflicts 19 additional damage points!
The Elf attacks for 1 points!
Creature Elf remaining hitpoints = -60
Creature Balrog remaining hitpoints = 15

Game over. Creature Elf wins.

*/
