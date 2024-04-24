#include <iostream>
#include "check.h"
using namespace std;

bool checkwin(int s[9][9]){
    // Check win by checking 1-9 is in each sub-boxes, rows and columns
    int temp[9] = {};

    //checking column
    for(int i = 0; i < 9; i++) {
        int temp[9] = {};
        for(int j = 0; j < 9; j++) {
            temp[j] = s[i][j];
        }
        cout << endl;
        for (int j = 0; j < 9; j++) {
            for (int k = j + 1; k < 9; k++) {

                if (temp[j] == temp[k]) {
                    return false;
                    break;
                }
            }
        }
    }

    //checking row
    for(int i = 0; i < 9; i++) {
        int temp[9] = {};
        for(int j = 0; j < 9; j++) {
            temp[j] = s[j][i];
        }
        for (int j = 0; j < 9; j++) {
            for (int k = j + 1; k < 9; k++) {
                if (temp[j] == temp[k]) {
                    return false;
                    break;
                }
            }
        }
    }

    //checking sub-box
    for(int m = 0; m < 9; m+=3) {
        for(int n = 0; n < 9; n+=3) {
            int temp[9] = {};
            int k = 0;
            for(int i = m; i < m + 3; i++) {
                for(int j = n; j < n + 3; j++) {
                    temp[k] = s[i][j];
                    k++;
                }
            }
            for (int j = 0; j < 9; j++) {
                for (int k = j + 1; k < 9; k++) {
                    if (temp[j] == temp[k]) {
                        return false;
                        break;
                    }
                }
            }
        }

    }
    return true;
}
