#include <iostream>
using namespace std;
int total(int num){
    if(num == 0) return num;
    return num + total(num - 1);
}
int main() {
    int num;
    cout << "Masukkan angka : "; cin >> num;
    if(num <= 10){
        cout << "Harus masukkan angka lebih besar dari 10 !";
        return 0;
    }
    cout << "Hasilnya : " <<  total(num);
}