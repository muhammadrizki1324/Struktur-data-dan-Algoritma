#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Fungsi untuk memeriksa apakah dua stack memiliki nilai yang sama
template<typename T>
bool areStacksEqual(stack<T> stack1, stack<T> stack2) {
    // Periksa ukuran stack terlebih dahulu
    if (stack1.size() != stack2.size()) {
        return false;
    }
    // Bandingkan elemen satu per satu
    while (!stack1.empty()) {
        if (stack1.top() != stack2.top()) {
            return false;
        }
        stack1.pop();
        stack2.pop();
    }
    return true;
}

int main() {
    // Inisialisasi dua stack dengan tipe data yang sama
    stack<string> stack1;
    stack<string> stack2;

    // Menambahkan elemen ke stack1
    stack1.push("agus");

    // Menambahkan elemen ke stack2
    stack2.push("rizki");

    // Memeriksa apakah kedua stack memiliki nilai yang sama
    if (areStacksEqual(stack1, stack2)) {
        cout << "Kedua stack memiliki nilai yang sama." << endl;
    } else {
        cout << "Kedua stack tidak memiliki nilai yang sama." << endl;
    }

    return 0;
}
