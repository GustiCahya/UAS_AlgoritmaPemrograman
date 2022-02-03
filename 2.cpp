#include <iostream>
using namespace std;
int main() {
    int rows = 3;
    int columns = 5;
    int A[rows][columns];
    
    A[0][0] = 1;
    A[0][1] = NULL;
    A[0][2] = 2;
    A[0][3] = NULL;
    A[0][4] = 3;
    
    A[1][0] = 4;
    A[1][1] = NULL;
    A[1][2] = 5;
    A[1][3] = NULL;
    A[1][4] = 6;
    
    A[2][0] = 7;
    A[2][1] = NULL;
    A[2][2] = 8;
    A[2][3] = NULL;
    A[2][4] = 9;
    
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < columns; j++) {
        int currentValue = A[i][j];
        cout << currentValue << " ";
      }
      cout << "\n";
    }
    
}