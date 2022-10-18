#include "functions.h"
#include <iostream>
#include <fstream>

using namespace std;

void readFile(int* array, string filename, int &size){ 
  ifstream inputFile; 
  inputFile.open(filename);
  if (!inputFile.is_open()) { //checks to make sure the file is actually open
      cout << "Error - Input file not good" << endl;
  }
  int value; 
  int i = 0; 
  while (inputFile.good()) { //goes through each input
      inputFile >> value;
      array[i] = value; //stores each input into the array in order
      i++; 
  }
  size = i;
  inputFile.close(); 
} //  READS INPUT FILE AND STORES IT INTO AN ARRAY

int mySearch(int* array, int value, int size){
  for(int i = 0; i < size+1; i++){
    if(array[i] == value){
      return i;
    }
  }
  return -1;
} // SEARCHES FOR MATCHING VALUE THEN RETURNS ITS INDEX IF FOUND

void addInteger(int* array, int &size, int input){
  size += 1;
  array[size] = input;
}

void integerModifier(int* array, int &original_integer, int &new_integer){
  int index;
  cin >> index;
  cout << endl << "What is the new number?: ";
  cin >> new_integer;
  cout << endl;
  original_integer = array[index];  
  array[index] = new_integer;
}

void wipeInteger(int* array, int size, int index){
  array[index] = 0;
}