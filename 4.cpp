#include <iostream>
using namespace std;
class Fruit {
  public:
    string color;
    int amount;
    bool edible;
    void eat() {
        if (edible) {
            cout << "nyam nyam..." << "\n";
            amount -= 1;
            return;
        }
        cout << "I can't eat that !!!" << "\n";
    }
};
int main() {
    Fruit apple;
    apple.color = "merah";
    apple.amount = 10;
    apple.edible = true;
    
    cout << "Halo aku punya buah apel" << "\n";
    cout << "Apelku berwarna " << apple.color << "\n";
    cout << "Jumlah apelku sebanyak " << apple.amount << "\n";
    cout << "Aku coba makan ya :)" << "\n";
    apple.eat();
    cout << "Sekarang apelku sisa " << apple.amount << "\n";
}