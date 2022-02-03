#include <iostream>
using namespace std;
int total(int num){
    int amount = 0;
    for(int i = num; i > 0; i--){
        amount += i;
    }
    return amount;
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