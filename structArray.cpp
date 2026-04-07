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

int main() 
{
    // Deklarasi obyek dari struct orang
    orang mhs[3]; // Array of struct orang



    //isi objek
    for (int i = 0; i < 3; i++) 
    {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "Nama Mahasiswa : ";
        getline(cin, mhs[i].nama);
        cout << "Alamat Desa : ";
        getline(cin, mhs[i].alamat.desa);
        cout << "Alamat Kota : ";
        getline(cin, mhs[i].alamat.kota);
        cout << "Umur : ";
        cin >> mhs[i].umur;
        cin.ignore(); // Membersihkan buffer input      
        cout << endl;
    
    }
    // Menampilkan Isi Obyek
    cout << "Menampilkan Isi Obyek" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "Nama   : " << mhs[i].nama << endl;
        cout << "Desa   : " << mhs[i].alamat.desa << endl;
        cout << "Kota   : " << mhs[i].alamat.kota << endl;
        cout << "Umur   : " << mhs[i].umur << endl;
    }       

    return 0;
    }