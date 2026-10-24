# 1. Konversi Detik ke Jam, Menit, Detik

#include <iostream>

using namespace std;

int main() {
    int detik_masuk;

    cout << "Masukkan total detik yang ingin dikonversi: ";
    cin >> detik_masuk;

    int jam = detik_masuk / 3600;
    int sisa_waktu = detik_masuk % 3600;
    int menit = sisa_waktu / 60;
    int detik = sisa_waktu % 60;

    cout << "\n--- Hasil Konversi Waktu ---\n";
    cout << "Jam   : " << jam << " jam\n";
    cout << "Menit : " << menit << " menit\n";
    cout << "Detik : " << detik << " detik\n";

    return 0;
}

# 2. Program Hasil Bagi & Sisa / Modulo

#include <iostream>

using namespace std;

int main() {
    int x, y;

    cout << "Masukkan angka utama (yang akan dibagi): ";
    cin >> x;
    cout << "Masukkan angka pembagi: ";
    cin >> y;

    // Menggunakan validasi dengan early exit (kondisi terbalik)
    if (y == 0) {
        cout << "Kesalahan: Pembagi tidak boleh bernilai 0!\n";
        return 0; 
    }

    int hasil = x / y;
    int sisa = x % y;

    cout << "Operasi: " << x << " / " << y << "\n";
    cout << "Hasil bagi : " << hasil << "\n";
    cout << "Sisa bagi  : " << sisa << "\n";

    return 0;
}

# 3. SiNilai v0.2 dengan Tambahan Selisih

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Konstanta bobot sesuai modul
    const double BOBOT_HDIR = 0.10;
    const double BOBOT_MGG  = 0.45;
    const double BOBOT_UTS  = 0.25;
    const double BOBOT_UAS  = 0.20;

    string nama_mhs, npm_mhs;
    double nilai_hdir = 0, nilai_mgg = 0, nilai_uts = 0, nilai_uas = 0;

    cout << "=== Program SiNilai v0.2 (Modifikasi) ===\n";
    cout << "Nama Mahasiswa : ";
    getline(cin, nama_mhs);
    cout << "NPM            : ";
    cin >> npm_mhs;
    cout << "Kehadiran      : ";
    cin >> nilai_hdir;
    cout << "Mingguan       : ";
    cin >> nilai_mgg;
    cout << "UTS            : ";
    cin >> nilai_uts;
    cout << "UAS            : ";
    cin >> nilai_uas;

    // Perhitungan
    double nilai_akhir = (nilai_hdir * BOBOT_HDIR) + 
                         (nilai_mgg * BOBOT_MGG) + 
                         (nilai_uts * BOBOT_UTS) + 
                         (nilai_uas * BOBOT_UAS);

    double rerata_polos = (nilai_hdir + nilai_mgg + nilai_uts + nilai_uas) / 4.0;

    // Menghitung selisih (dibuat mutlak/positif)
    double selisih = nilai_akhir - rerata_polos;
    if (selisih < 0) {
        selisih = -selisih;
    }

    cout << "\n===== KARTU HASIL STUDI =====\n";
    cout << "Nama        : " << nama_mhs << "\n";
    cout << "NPM         : " << npm_mhs << "\n";
    cout << "Nilai Akhir : " << nilai_akhir << "\n";
    cout << "Rerata Polos: " << rerata_polos << "\n";
    cout << "Selisih     : " << selisih << "\n";

    return 0;
}

# 4. Perbandingan C++ dan Python

# --- Skrip Perbandingan Ekspresi C++ dan Python ---

print("=== UJI EKSPRESI 1 ===")
res_1_py = 2 + 3 * 4
print(f"Hasil Python (2 + 3 * 4) = {res_1_py}")

print("\n=== UJI EKSPRESI 2 ===")
res_2_py = 2 * 3 / 4
print(f"Hasil Python (2 * 3 / 4) = {res_2_py}") 
# Di C++ bernilai 1 karena integer division, di Python float (1.5)

print("\n=== UJI EKSPRESI 3 ===")
res_3_py = 2 / 4 * 3
print(f"Hasil Python (2 / 4 * 3) = {res_3_py}") 
# Di C++ bernilai 0 karena 2/4 habis jadi 0, di Python bernilai 0.5 * 3 = 1.5
