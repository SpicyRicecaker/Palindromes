#include <iostream>
#include <cstring>

using namespace std;

int main (){

  char input[81];
  char cleanInput[81];

  int counter = 0;

  cin.get(input, 81);
  cin.get();

  for(int a = 0; a < strlen(input); a++){
    input[a] = toupper(input[a]);
    if(input[a] >= 65 && input[a] <= 90){
      cleanInput[counter] = input[a];
      counter++;
    }
  }
  cleanInput[counter] = '\0';
  counter = 0;
  
  for(int a = strlen(input)-1; a >= 0; a--){
    if (cleanInput[a] != cleanInput[counter]){
      cout << input << " is not a palindrome." << endl;
      exit(0);
    }
    counter++;
  }
  cout << input << " is a palindrome." << endl;
  return 0;
}
