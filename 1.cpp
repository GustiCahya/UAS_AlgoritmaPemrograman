#include <iostream>
using namespace std;
int main() {
    int rows = 3;
    int columns = 5;
    int A[rows][columns] = {
        {2, 3, 8, 3, 1},
        {8, 4, 2, 9, 2},
        {3, 7, 1, 4, 0}
    };
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < columns; j++) {
        cout << A[i][j] << "\n";
      }
    }
    return 0;
}