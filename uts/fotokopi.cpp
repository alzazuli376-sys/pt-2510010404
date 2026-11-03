// UTS Praktikum Paket B: Fotokopi Kampus.
// Lengkapi TODO 1 sampai TODO 6 sesuai lembar soal. Bagian yang sudah ada jangan diubah kecuali diminta.
// Bangun dengan baseline kelas; program harus bebas warning. Uji dengan: ./fotokopi < contoh_masukan.txt
#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
    const int HARGA_KECIL = 300;     // 1 sampai 50 halaman
    const int HARGA_SEDANG = 250;    // 51 sampai 200 halaman
    const int HARGA_BESAR = 200;     // lebih dari 200 halaman
    const int BATAS_KECIL = 50;
    const int BATAS_SEDANG = 200;
    const int MAKS_HALAMAN = 1000;

    int jumlah = 0;
    cout << "=== Fotokopi Kampus ===\n";
    cout << "Jumlah pesanan: ";
    cin >> jumlah;
    while (cin.fail() || jumlah < 1) {           // contoh pembacaan aman; pakai pola ini untuk halaman
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Harus bilangan bulat paling sedikit 1. Jumlah pesanan: ";
        cin >> jumlah;
    }
    cin.ignore(1000, '\n');

    cout << fixed << setprecision(2);

    int total_halaman = 0;
    int total_pendapatan = 0;
    int banyak_kecil = 0;
    int banyak_sedang = 0;
    int banyak_besar = 0;

    // TODO 5a: deklarasikan penampung biaya terbesar (mulai -1) dan nama pemesannya.
    int maks_biaya = -1;
    string nama_maks = "-";

    for (int i = 1; i <= jumlah; i++) {
        string nama;
        int halaman = 0;
        char warna = ' ';

        cout << "\n--- Pesanan ke-" << i << " dari " << jumlah << " ---\n";

        // TODO 1: baca nama dengan getline sampai sah (tidak kosong atau hanya spasi, dan tanpa angka),
        //         lalu rapikan menjadi Huruf Besar Di Awal Kata.
        //         Pesan penolakan: "Nama tidak boleh kosong." dan "Nama tidak boleh mengandung angka."
        while (true) {
            cout << "Nama pemesan : ";
            getline(cin, nama);
            if (nama.empty()) {
                cout << "Nama tidak boleh kosong.\n";
                continue;
            }
            bool ada_angka = false;
            for (char c : nama) {
                if (isdigit(c)) ada_angka = true;
            }
            if (ada_angka) {
                cout << "Nama tidak boleh mengandung angka.\n";
                continue;
            }
            if (islower(nama[0])) nama[0] = toupper(nama[0]);
            break;
        }

        // TODO 2: baca halaman dengan aman (bilangan bulat 1 sampai MAKS_HALAMAN), pola seperti jumlah di atas.
        //         Pesan penolakan: "Harus bilangan bulat 1 sampai 1000. Halaman: "
        cout << "Halaman (1-" << MAKS_HALAMAN << "): ";
        cin >> halaman;
        while (cin.fail() || halaman < 1 || halaman > MAKS_HALAMAN) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Harus bilangan bulat 1 sampai 1000. Halaman: ";
            cin >> halaman;
        }

        // TODO 3: baca warna (char), jadikan huruf besar, ulangi selama bukan 'Y' atau 'T'.
        //         Pesan penolakan: "Hanya Y atau T. Berwarna (Y/T): "
        cout << "Berwarna (Y/T): ";
        cin >> warna;
        warna = toupper(warna);
        while (warna != 'Y' && warna != 'T') {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Hanya Y atau T. Berwarna (Y/T): ";
            cin >> warna;
            warna = toupper(warna);
        }
        cin.ignore(1000, '\n');

        // TODO 4: tentukan harga per halaman dari jumlah halaman (kecil, sedang, besar) dan tambah
        //         penghitung kategorinya; biaya = halaman * harga, dikali 2 bila berwarna.
        int harga = (halaman <= BATAS_KECIL) ? HARGA_KECIL : (halaman <= BATAS_SEDANG) ? HARGA_SEDANG : HARGA_BESAR;
        int biaya = halaman * harga;
        if (warna == 'Y') {
            biaya *= 2;
        }

        if (halaman <= BATAS_KECIL) {
            banyak_kecil++;
        } else if (halaman <= BATAS_SEDANG) {
            banyak_sedang++;
        } else {
            banyak_besar++;
        }

        cout << "  " << left << setw(16) << nama << right << setw(6) << halaman;
        if (warna == 'Y') {
            cout << setw(7) << "Warna";
        } else {
            cout << setw(7) << "Hitam";
        }
        cout << setw(9) << biaya << "\n";

        total_halaman += halaman;
        total_pendapatan += biaya;

        // TODO 5b: perbarui biaya terbesar dan nama pemesannya bila biaya ini lebih besar.
        if (biaya > maks_biaya) {
            maks_biaya = biaya;
            nama_maks = nama;
        }
    }

    cout << "\n=== Rekap Hari Ini ===\n";
    cout << "Jumlah pesanan    : " << jumlah << "\n";
    cout << "Total halaman     : " << total_halaman << "\n";
    cout << "Total pendapatan  : " << total_pendapatan << "\n";
    cout << "Rata-rata halaman : " << static_cast<double>(total_halaman) / jumlah << "\n";

    // TODO 5c: cetak "Terbesar          : " diikuti nama dan biaya terbesar dalam kurung.
    cout << "Terbesar          : " << nama_maks << " (" << maks_biaya << ")\n";

    cout << "\nSebaran ukuran pesanan:\n";
    // TODO 6: tiga baris batang (Kecil, Sedang, Besar) memakai perulangan bersarang:
    //         perulangan luar memilih label dan jumlahnya, perulangan dalam mencetak tanda # sebanyak itu.
    //         Format tiap baris: label rata kiri selebar 7, lalu "| ", batang, spasi, jumlah. Contoh: "Kecil  | ## 2"
    string kat[3] = {"Kecil", "Sedang", "Besar"};
    int jml_kat[3] = {banyak_kecil, banyak_sedang, banyak_besar};

    for (int k = 0; k < 3; k++) {
        cout << left << setw(7) << kat[k] << "| ";
        for (int b = 0; b < jml_kat[k]; b++) {
            cout << "#";
        }
        cout << " " << jml_kat[k] << "\n";
    }

    return 0;
}