/*
  Author: Andy Li, Period 2 C++
  Date: 9/11/19
  Palindromes: A program that takes in a string, 
  removes all spaces and punctuation, 
  and checks if it is the same read forwards and backwards.
*/

#include <iostream>
#include <cstring>

using namespace std;

int main (){
  //We declare two strings to hold the user input and the string with same case, no punctuation, and no spaces.
  char input[81];
  char cleanInput[81];

  //The counter serves various purposes for navigating around the other string in a for loopx
  int counter = 0;

  //We get the user input inlcuding spaces, and get rid of the \n 
  cin.get(input, 81);
  cin.get();

  //Then we go through the input and add all letters capitalized into a new string, skipping every other character
  for(int a = 0; a < strlen(input); a++){
    input[a] = toupper(input[a]);
    if(input[a] >= 65 && input[a] <= 90){
      cleanInput[counter] = input[a];
      counter++;
    }
  }
  //We add a terminating character to the end of the new string, as in some cases there are some random values floating around in memory where we declared the arrays. This could also be solved by initializing the arrays earlier with all NULL values
  cleanInput[counter] = '\0';
  counter = 0;

  //Then we start at the front and back end of the string and scan for anything non-symmetric, outputting not a palindrome when it is not and palindrome when it is.
  for(int a = strlen(cleanInput)-1; a >= 0; a--){
    if (cleanInput[counter] != cleanInput[a]){
      cout << "Not a palindrome." << endl;
      exit(0);
    }
    counter++;
  }
  cout << "Palindrome." << endl;
  return 0;
}
