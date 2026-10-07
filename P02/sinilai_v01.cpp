// SiNilai v0.1: data satu mahasiswa.
// Program membaca nama, NPM, dan empat komponen nilai, lalu menampilkannya sebagai kartu.

#include <iostream>
#include <string>

using namespace std;

int main() {
    // TODO 1: deklarasikan variabel untuk nama dan NPM (tipe string)
    string nama = "";
    string npm = "";
    int semester = 0;

    // TODO 2: deklarasikan empat variabel nilai (tipe double untuk mengakomodasi pecahan)
    double nilai_kehadiran = 0.0;
    double nilai_mingguan = 0.0;
    double nilai_uts = 0.0;
    double nilai_uas = 0.0;

    cout << "=== SiNilai v0.1 ===\n";

    // TODO 3: baca nama (menggunakan getline karena bisa mengandung spasi)
    cout << "Nama      : ";
    getline(cin, nama);

    // TODO 4: baca NPM
    cout << "NPM       : ";
    cin >> npm;

    cout << "Semester  : "; // <-- Tambahan Soal 1
    cin >> semester;      // <-- Tambahan Soal 1

    // TODO 5: baca keempat komponen nilai satu per satu
    cout << "Kehadiran : ";
    cin >> nilai_kehadiran;

    cout << "Mingguan  : ";
    cin >> nilai_mingguan;

    cout << "UTS       : ";
    cin >> nilai_uts;

    cout << "UAS       : ";
    cin >> nilai_uas;

    // TODO 6: tampilkan semua data yang dibaca dalam format Kartu Data Mahasiswa
    cout << "\n--- Kartu Data Mahasiswa ---\n";
    cout << "Nama      : " << nama << "\n";
    cout << "NPM       : " << npm << "\n";
    cout << "Semester  : " << semester << "\n";
    cout << "Kehadiran : " << nilai_kehadiran << "\n";
    cout << "Mingguan  : " << nilai_mingguan << "\n";
    cout << "UTS       : " << nilai_uts << "\n";
    cout << "UAS       : " << nilai_uas << "\n";

    return 0;
}