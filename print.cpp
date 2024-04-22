#include <iostream>
#include "print.h"
using namespace std;

void prints(int s[9][9]){
    cout << "    0 1 2   3 4 5   6 7 8" << endl;
    cout << "  + + + + + + + + + + + + +" << endl;
    for (int i = 0; i < 9; i++){
        cout << char('A'+i) << " + ";
        for (int j = 0; j < 9; j++){
            cout << s[i][j] << " ";
            if ((j+1)%3 == 0 && j > 0){
                cout << "+ ";
            }
        }
        cout << char('A'+i);
        cout << endl;
        if ((i+1)%3 == 0 && i > 0 && i != 8){
            cout << "  + + + + + + + + + + + + +" << endl;
        }
    }
    cout << "  + + + + + + + + + + + + +" << endl;
    cout << "    0 1 2   3 4 5   6 7 8" << endl;
}