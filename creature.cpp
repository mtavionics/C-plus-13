/*
    Author: Mikhail Terentev
    Instructor : Dave Harden
    Class CS 110B Programming Fundamentals : C++
    Name of file : creature.c
    Description : This is the implemntation file for the creature class.
    Assignment 13b (Inheritance 2)
*/

#include "creature.h"
namespace cs_creature {
/****************************************************************/
/* member functions for Creature class				*/
/****************************************************************/
Creature::Creature() {
  type = 0;
  strength = 10;
  hitpoints = 10;
}





Creature::Creature(int newType, int newStrength, int newHitpoints) {
  type = newType;
  strength = newStrength;
  hitpoints = newHitpoints;
}





// Here is an implementation of the getSpecies() function:
string Creature::getSpecies() const {
  switch (type) {
  case 0:
    return "Human";
  case 1:
    return "Cyberdemon";
  case 2:
    return "Balrog";
  case 3:
    return "Elf";
  }
  return "unknown";
}






int Creature::getDamage() const {
  int damage;

  // All creatures inflict damage which is a random number up to their strength
  damage = (rand() % strength) + 1;
  // In the Creature class's getDamage() function, insert the following
  // statement:
  cout << "The " << getSpecies() << " attacks for " << damage << " points!"
       << endl;

  return damage;
}





int battleArena(Creature &Creature1, Creature &Creature2) {
  int battleResult = 0;
  bool battleFinished = false;
  string specie1 = Creature1.getSpecies();
  string specie2 = Creature2.getSpecies();

  cout << endl << "--------------------------------------------" << endl;
  cout << "The battle between " << specie1 << " and " << specie2 << " starts..."
       << endl
       << endl;

  while (!battleFinished) {
    int c1Result = Creature1.getHitpoints() - Creature2.getDamage();
    int c2Result = Creature2.getHitpoints() - Creature1.getDamage();

    cout << "Creature " << specie1 << " remaining hitpoints = " << c1Result
         << endl;
    cout << "Creature " << specie2 << " remaining hitpoints = " << c2Result
         << endl;

    if (c1Result <= 0 && c2Result <= 0) {
      battleResult = 0; // this is a tie
      battleFinished = true;
    } else if (c1Result > 0 && c2Result <= 0) {
      battleResult = 1; // Creature1 wins
      battleFinished = true;
    } else if (c1Result <= 0 && c2Result > 0) {
      battleResult = -1; // Creature2 wins
      battleFinished = true;
    }

    Creature1.setHitpoints(c1Result);
    Creature2.setHitpoints(c2Result);
  }

  cout << endl;
  if (battleResult == 0)
    cout << "Game tied." << endl;
  else if (battleResult < 0)
    cout << "Game over. Creature " << specie1 << " wins." << endl;
  else
    cout << "Game over. Creature " << specie2 << " wins." << endl;

  return battleResult;
}





int Creature::getStrength() const { return strength; }




void Creature::setStrength(int iStrength) { strength = iStrength; }





int Creature::getHitpoints() const { return hitpoints; }





void Creature::setHitpoints(int iHitpoints) { hitpoints = iHitpoints; }
} // namespace cs_creature
