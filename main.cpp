#include <iostream>
#include <string>
#include "print.h"
using namespace std;

int main() {
  // Initialize sudoku 2-D container (9x9 boxes)
  int sudoku[9][9] = {0};
  // Input the preset value by file randomly

  string coordinate;
  int value = 0;
  int x,y = 0;
  while (coordinate != "q") {
    // print out the sudoku with coordinate system
    prints(sudoku);
    // input the coordinate and by its value (e.g. A5 8)
    cin >> coordinate >> value;
    x = coordinate[0]-65;
    y = coordinate[1]-48;
    if (x < 9 && y < 9 && value <= 9){
      sudoku[x][y] = value;
    } else {
      if (coordinate == "q"){
        cout << "BYE!!" << endl;
        break;
      }
      cout << "Invalid Inputs" << endl;
    }
  }
}
