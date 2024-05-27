#include <iostream>
using namespace std;

const int MAX_SIZE = 5; // Kapasitas maksimum queue
int queue[MAX_SIZE];
int front = 0;
int rear = 0;

// Fungsi untuk memeriksa apakah queue penuh
bool isFull() {
    return (rear == MAX_SIZE);
}

// Fungsi untuk memeriksa apakah queue kosong
bool isEmpty() {
    return (front == rear);
}

// Fungsi untuk menambahkan elemen ke queue
void enqueue(int value) {
    if (isFull()) {
        cout << "Queue sudah penuh. Tidak bisa enqueue " << value << endl;
        return;
    }
    queue[rear] = value;
    rear++;
}

// Fungsi untuk menghapus elemen dari queue
void dequeue() {
    if (isEmpty()) {
        cout << "Queue sudah kosong. Tidak bisa dequeue" << endl;
        return;
    }
    for (int i = 0; i < rear - 1; i++) {
        queue[i] = queue[i + 1];
    }
    rear--;
}

// Fungsi untuk menampilkan elemen-elemen dalam queue
void display() {
    if (isEmpty()) {
        cout << "Queue kosong." << endl;
        return;
    }
    for (int i = front; i < rear; i++) {
        cout << queue[i] << " ";
    }
    cout << endl;
}

int main() {
    enqueue(3);
    enqueue(7);
    dequeue();
    enqueue(2);
    enqueue(4);
    enqueue(1);
    dequeue();
    enqueue(6);
    dequeue();
    enqueue(5);
    cout << "Queue: ";
    display();

    return 0;
}