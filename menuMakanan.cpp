#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Deklarasi array untuk menyimpan nama dan harga makanan
string namaMakanan[5] = {"Soto", "Rawon", "Pecel", "Bakso", "Siomay"};
int hargaMakanan[5] = {15000, 20000, 10000, 12500, 25000};

// Fungsi untuk menghitung total harga pesanan
int hitungTotalHarga(string pesanan[], int jumlahPorsi[], int n) {
  int totalHarga = 0;

  for (int i = 0; i < n; i++) {
    // Mencari indeks makanan berdasarkan nama
    int indexMakanan = -1;
    for (int j = 0; j < 5; j++) {
      if (pesanan[i] == namaMakanan[j]) {
        indexMakanan = j;
        break;
      }
    }

    // Menghitung harga total untuk setiap makanan
    if (indexMakanan != -1) {
      totalHarga += hargaMakanan[indexMakanan] * jumlahPorsi[i];
    } else {
      cout << "Maaf, makanan " << pesanan[i] << " tidak tersedia." << endl;
    }
  }

  return totalHarga;
}

int main() {

    cout << "**************DAFTAR MENU MAKANAN KHAS JAWA***************************" << endl;
    cout << "1. Soto                                    Rp.15000" << endl;
    cout << "2. Rawon                                   Rp.20000" << endl;
    cout << "3. Pecel                                   Rp.10000" << endl;
    cout << "4. Siomay                                  Rp.12500" << endl;
    cout << "5. Bakso                                   Rp.25000" << endl;
    cout << endl;
    
  // Deklarasi variabel untuk menyimpan pesanan dan jumlah porsi
  string pesanan[100];
  int jumlahPorsi[100];
  // Membaca input dari pengguna
  int n;
  cout << "Masukkan jumlah makanan yang ingin dipesan: ";
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << "Masukkan nama makanan ke-" << i + 1 << ": ";
    cin >> pesanan[i];

    cout << "Masukkan jumlah porsi: ";
    cin >> jumlahPorsi[i];
  }
  // Menghitung total harga dan menampilkan hasilnya
  int totalHarga = hitungTotalHarga(pesanan, jumlahPorsi, n);
    cout << endl;
    cout << "---------------------------------------------------------------------------" << endl;
    cout << setw(10) << left << "No" << setw(20) << left << "Nama Menu" << setw(15) << right << "Harga Menu" << setw(10) << right << "Jumlah" << setw(15) << right << "Subtotal" << endl;
    cout << "---------------------------------------------------------------------------" << endl;

  for (int i = 0; i < n; i++) {
    // Menampilkan detail harga setiap makanan
    if (jumlahPorsi[i] > 0) {
         cout << setw(10) << left << i + 1 << setw(20) << left << pesanan[i] << setw(8) << right << fixed << setprecision(2) << "Rp." << hargaMakanan[i] << setw(10) << right << jumlahPorsi[i] << setw(10) << right << fixed << setprecision(2) << "Rp."<< hargaMakanan[i] * jumlahPorsi[i] << endl;
    
    }
  }
    cout << "---------------------------------------------------------------------------" << endl;
    cout << setw(30) << right << "Total" << setw(10) << right << fixed << setprecision(2) << "Rp." << totalHarga << endl;
    cout << "---------------------------------------------------------------------------" << endl;
  return 0;
}