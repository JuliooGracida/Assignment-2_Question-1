#include <iostream>
#include "functions.h"

using namespace std;

int main(){
  int array[200];
  int size = 0; 
  
  int integer;
  int original_integer;
  int new_integer;
  char selection;
  int result;

  readFile (array, "input.txt", size);
  
  while(selection != 'q'){
    cout << endl << "Hello! Please select an option below:" << endl;
    cout << "s - Search for an Integer!" << endl;
    cout << "m - Modify an Integer! We will replace it with a new one." << endl;
    cout << "a - Add an Integer to the end of the array!" << endl;
    cout << "r - Remove an Integer from the array!" << endl << endl;
    cout << "What is your choice?: ";
    cin >> selection;
    switch(selection){
      case 's':
        cout << "I'll check to see if your integer exists in the array!" << endl;
        cout << "Please place the integer to search for: ";
        cin >> integer;
        result = mySearch(array, integer, size);
        result < 0 ?
          cout << "We do not have that integer!" << endl :
          cout << "Your integer is at index: " << result << endl;
        break;
      case 'm':
        cout << "Let's modify an integer! Which index should it be?: ";
        integerModifier(array, original_integer, new_integer);
        cout << "The original integer was: " << original_integer <<
          " but it is now: " << new_integer << endl;
        break;
      case 'a':
        cout << "What integer would you like to add?: ";
        cin >> integer;
        addInteger(array, size, integer);
        cout << array[size] << " is now at the end of the array!" << endl;
        break;
      case 'r':
        cout << "Remove an integer! Which index should it be?: ";
        cin >> integer;
        wipeInteger(array, size, integer);
        cout << "That index has been wiped. ";
        cout << "The value is now: " << array[integer] << endl;
        break;
      default:
        cout << "sorry you can't type\n";
        break;
    }
  }
}