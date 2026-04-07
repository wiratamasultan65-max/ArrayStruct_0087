#include <iostream>
using namespace std;

// Struct pertama untuk detail alamat
struct DetailAlamat {
    string desa;
    string kota;
};

// Struct kedua yang mengandung struct DetailAlamat
struct orang {
    string nama;
    DetailAlamat alamat; // Nested struct
    int umur;
};

int main() {
    // Deklarasi obyek dari struct orang
    orang mhs;


    //isi objek
    cout << "Nama Mahasiswa : ";
    getline(cin, mhs.nama);
    cout << "Alamat Desa : ";
    getline(cin, mhs.alamat.desa);
    cout << "Alamat Kota : ";
    getline(cin, mhs.alamat.kota);
    cout << "Umur : ";
    cin >> mhs.umur;
    cin.ignore(); // Membersihkan buffer input      
    cout << endl;
    

    // Menampilkan Isi Obyek
    cout << "Menampilkan Isi Obyek" << endl;
    cout << "Nama   : " << mhs.nama << endl;
    cout << "Desa   : " << mhs.alamat.desa << endl;
    cout << "Kota   : " << mhs.alamat.kota << endl;
    cout << "Umur   : " << mhs.umur << endl;

    return 0;
}