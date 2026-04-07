#include <iostream>
using namespace std;

int main() {
    // --- BAGIAN DARI GAMBAR 1 ---
    
    // Deklarasi Array dengan inisialisasi
    int dataku[5] = {10, 20, 30, 40, 50};

    // Deklarasi tanpa inisialisasi
    int datamu[5];
    int x;

    // Cara membaca array dataku
    cout << "Data ke - 3 : " << dataku[2] << endl;
  // Operasi Matematika
    x = dataku[2] * 3;

    // Cara menulis atau mengisi array
    dataku[2] = 600;
    cout << "Data ke - 3 yang baru : " << dataku[2] << endl;

    // Mengisi array datamu satu per satu
    cout << "Data Index ke - 0 : "; cin >> datamu[0];
    cout << "Data Index ke - 1 : "; cin >> datamu[1];
    cout << "Data Index ke - 2 : "; cin >> datamu[2];
    cout << "Data Index ke - 3 : "; cin >> datamu[3];
    cout << "Data Index ke - 4 : "; cin >> datamu[4];   
    