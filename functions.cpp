#include "functions.h"
#include <iostream>
#include <fstream>

using namespace std;

// READS INPUT FILE AND STORES IT INTO AN ARRAY
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
  size = i; //saves the size of the array
  inputFile.close(); 
}

// SEARCHES FOR MATCHING VALUE THEN RETURNS ITS INDEX IF FOUND
int mySearch(int* array, int value, int size){
  for(int i = 0; i < size+1; i++){
    if(array[i] == value){
      return i; // returns the current i/index if there is a match
    }
  }
  return -1; // if no match then -1 will be returned
}

// ADDS INTEGER AT THE END OF THE ARRAY
void addInteger(int* array, int &size, int input){
  size += 1; // increases array size by one
  array[size] = input; // makes end of array equal to input
}

// REPLACES AN INTEGER WITH A NEW ONE
void integerModifier(int* array, int &original_integer, int &new_integer){
  int index;
  cin >> index; //takes index that we will change
  cout << endl << "What is the new number?: ";
  cin >> new_integer; //takes the new integer
  cout << endl;
  
  original_integer = array[index]; //saves what the orginal was
  array[index] = new_integer; //sets the new integer in its place
}

// CLEARS AN INTEGER FROM THE ARRAY
void wipeInteger(int* array, int index){
  array[index] = 0; //sets value to 0
}