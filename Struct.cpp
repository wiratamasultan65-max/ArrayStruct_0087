#include <iostream>
using namespace std;

// Mendefinisikan struktur data bernama 'orang'
struct orang {
    string nama;
    string alamat;
    int umur;
};
int main() {
    // Deklarasi obyek dari struct orang
    orang mhs;
      // Isi objek lewat input user
    cout << "Nama Mahasiswa : ";
    cin >> mhs.nama;

    cout << "Alamat Asal : ";
    cin >> mhs.alamat;

    cout << "Umur : ";
    cin >> mhs.umur;

    cout << endl;