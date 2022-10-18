#include <iostream>
#include "functions.h"

using namespace std;

int main(){
  //initializes the array and size
  int array[200];
  int size = 0; 

  //initializes the variables that will be used
  int integer;
  int original_integer;
  int new_integer;
  char selection;
  int result;

  readFile (array, "input.txt", size); //reads file and loads array

  //menu selection
  while(selection != 'q'){
    //prints out the menu
    cout << endl << "Hello! Please select an option below:" << endl;
    cout << "s - Search for an Integer!" << endl;
    cout << "m - Modify an Integer! We will replace it with a new one." << endl;
    cout << "a - Add an Integer to the end of the array!" << endl;
    cout << "r - Remove an Integer from the array!" << endl;
    cout << "q - End the Program" << endl << endl;
    cout << "What is your choice?: ";
    cin >> selection; //takes in user selection for menu
    
    switch(selection){ //switch recieves input
      case 's': //dialoge and function to search for an array
        cout << "I'll check to see if your integer exists in the array!" << endl;
        cout << "Please place the integer to search for: ";
        cin >> integer;
        result = mySearch(array, integer, size);
        result < 0 ?
          cout << "We do not have that integer!" << endl :
          cout << "Your integer is at index: " << result << endl;
        break;
      case 'm': //dialoge and function to modify an integer
        cout << "Let's modify an integer! Which index should it be?: ";
        integerModifier(array, original_integer, new_integer);
        cout << "The original integer was: " << original_integer <<
          " but it is now: " << new_integer << endl;
        break;
      case 'a': //dialoge and function to add an integer
        cout << "What integer would you like to add?: ";
        cin >> integer;
        addInteger(array, size, integer);
        cout << array[size] << " is now at the end of the array!" << endl;
        break;
      case 'r': //dialoge and function to wipe an integer
        cout << "Remove an integer! Which index should it be?: ";
        cin >> integer;
        wipeInteger(array, integer);
        cout << "That index has been wiped. ";
        cout << "The value is now: " << array[integer] << endl;
        break;
      case 'q': //this removes the program
        cout << "Thank you for trying my program!!! :)" << endl;
        return 0;
      default:
        cout << "Naaah, try again\n";
        break;
    }
  }
}