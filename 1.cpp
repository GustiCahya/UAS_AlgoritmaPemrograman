#include <iostream>
using namespace std;
int main() {
    int rows = 3;
    int columns = 5;
    int A[rows][columns] = {
        {2, 3, 8, 3, 1},
        {8, 4, 2, 9, 2},
        {3, 7, 9, 4, 0}
    };
    // find highest number & isExist 50
    int highestNum = 0;
    bool isExist50 = false;
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < columns; j++) {
        int currentValue = A[i][j];
        // searching highest number
        if(highestNum < currentValue){
            highestNum = currentValue;
        }
        // check isExist 50
        if(currentValue == 50){
            isExist50 = true;
        }
      }
    }
    // count highest number
    int countHighest = 0;
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < columns; j++) {
        int currentValue = A[i][j];
        if(currentValue == highestNum){
            countHighest++;
        }
      }
    }
    cout << "Angka Tertinggi : " << highestNum << "\n";
    cout << "Sebanyak : " << countHighest << "\n";
    if (isExist50) {
        cout << "lima puluh : " << "ADA";
    } else {
        cout << "lima puluh : " << "TIDAK ADA";
    }
    return 0;
}