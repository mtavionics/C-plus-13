/*
    Author: Mikhail Terentev
    Instructor : Dave Harden
    Class CS 110B Programming Fundamentals : C++
    Name of file : balrog.c
    Description : This is the implementation file for client programm.
    Assignment 13b (Inheritance 2)
*/

#include "balrog.h"
#include "cyberdemon.h"
#include "elf.h"
#include "human.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;
using namespace cs_creature;

// Here is the client program that you must use to test your classes.
int main() {
  srand(static_cast<unsigned>(time(nullptr)));

  Elf e(3, 50, 50);
  Balrog b(2, 50, 50);

  battleArena(e, b);
}
