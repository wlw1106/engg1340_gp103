#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
#include <fstream>
#include <sstream>
#include "print.h"
#include "check.h"
using namespace std;
int main() {
  // Initialize sudoku 2-D container (9x9 boxes)
  int sudoku[9][9] = {0};
  // Initialize user input variables
  string coordinate;
  int value = 0;
  int x,y = 0;
  // Input the preset value by file randomly
  srand(time(0));
  int k = rand()%6+1; // Random 6 files
  // int k = 1;
  string presetv, input;
  ifstream fin;
  char filename[6] = {char(k+48),'.','t','x','t'};
  fin.open(filename);
  if ( fin.fail() ){
    cout << "Error in opening file: " << char(k+48) << ".txt" << endl;
  }
  while (fin >> coordinate >> value){
    x = coordinate[0]-65;
    y = coordinate[1]-49;
    sudoku[x][y] = value;
    // Record our preset coordinate to avoid being edited later
    presetv += coordinate + " ";
  }
  fin.close();
  while (coordinate != "q") {
    // print out the sudoku with coordinate system
    prints(sudoku);
    // Ask player
    cout << "Please enter the coordinate and its value: ";
    // input the coordinate and by its value (e.g. A5 8)
    getline(cin, input);
    // initialize string stream
    stringstream ss(input);
    if (input.length() > 1){
      ss >> coordinate >> value;
    } else {
      ss >> coordinate;
    }
    // Check if the input is our preset coordinate
    if (presetv.find(coordinate) != string::npos){
      cout << "You cannot edit the preset value!" << endl;
      cout << "Please Try Again!" << endl;
    } else {
      x = coordinate[0]-65;
      y = coordinate[1]-49;
      if (x < 9 && y < 9 && x >= 0 && y >= 0 && value >=0 && value <= 9){
        // Update the sudoku array
        sudoku[x][y] = value;
        // Check if user is win
        if (checkwin(sudoku) == false){
          sudoku[x][y] = value;
        } else {
          if (checkwin(sudoku)){
            cout << "You are WIN~" << endl;
            cout << "BYE!!" << endl;
            break;
          }
        }
      } else {
          if (coordinate == "q"){
            cout << "BYE!!" << endl;
            break;
          }
          cout << "Invalid Inputs" << endl;
          x, y, value = 0;
          coordinate = "";
      }
    }
  }
}
