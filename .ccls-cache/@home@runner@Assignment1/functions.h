#pragma once
#include <string>

using namespace std;

//BACKGROUND FUNCTIONS
void readFile(int* array, string filename, int &size);
//Pre 

//ASSIGNMENT FUNCTIONS
int mySearch(int* array, int value, int size);
//Pre: 

void integerModifier(int* array, int &original_integer, int &new_integer);

void addInteger(int* array, int &size, int input);

void wipeInteger(int* array, int size, int index);
