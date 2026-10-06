# Latihan Mandiri - Praktikum 1

## Nomor 1: Perubahan pada `rerata.cpp`
- **Bagian yang perlu diubah:**
  1. **Deklarasi Variabel:** Menambahkan 2 variabel nilai baru sehingga totalnya ada 5 nilai (misalnya `tugas1`, `tugas2`, `tugas3`, `uts`, dan `uas`).
  2. **Kalkulasi `jumlah` (TODO 1):** Mengubah `int jumlah = 0;` menjadi penjumlahan kelima variabel nilai (`int jumlah = tugas1 + tugas2 + tugas3 + uts + uas;`).
  3. **Kalkulasi `rerata` (TODO 2):** Mengubah `double rerata = 0;` menjadi pembagian dengan angka desimal `5.0` (`double rerata = jumlah / 5.0;`) agar nilainya tidak terpotong menjadi bilangan bulat (*integer division*).

- **Jumlah tempat yang terpengaruh:** Ada **3 tempat utama** (deklarasi variabel nilai, rumus `jumlah` di TODO 1, dan rumus `rerata` di TODO 2).

---

## Nomor 2: Menghapus Tanda Kutip Penutup pada `hello.cpp`
- **Pesan Error:**
  `hello.cpp:5:18: error: missing terminating " character`
  `hello.cpp:5:18: error: expected ';' before 'return'`
- **Nomor Baris:** Baris **5** (pada perintah `std::cout`).
- **Penjelasan Singkat:** Kompiler gagal memproses kode karena tidak menemukan tanda kutip penutup yang menandai batas akhir dari *string literal*.

---

## Nomor 3: Menghapus `#include <iostream>` pada `hello.cpp`
- **Tahap yang Gagal:** Tahap **Kompilasi** (*compilation error*).
- **Alasan & Perbedaan Pesan:**
  - **Pesan Error:** `'cout' was not declared in this scope` dan `'endl' was not declared in this scope`.
  - **Penyebab:** Kompiler tidak mengenali fungsi `std::cout` atau `std::endl` karena pustaka pendefinisinya (`<iostream>`) dihapus.
  - **Perbedaannya:** Pada nomor 2 kesalahan disebabkan oleh *syntax error* (kesalahan tata bahasa C++), sedangkan pada nomor 3 disebabkan oleh *undeclared identifier error* (simbol/fungsi tidak dikenal karena pustaka belum diimpor).

---

## Nomor 4: Membangun `rerata_awal.cpp` Tanpa Opsi `-Wall -Wextra`
- **Pesan yang Hilang:**
  Pesan peringatan (*warning*) seperti *unused variable* (variabel terdeklarasi namun tidak digunakan) atau *uninitialized variable* (variabel dipakai sebelum diisi nilai awal).
- **Alasan Mengapa Hal Tersebut Merugikan:**
  Tanpa opsi `-Wall -Wextra`, kompiler akan menyembunyikan peringatan mengenai potensi bug atau kesalahan logika. Kode memang tetap berhasil dikompilasi hingga menghasilkan file eksekusi, tetapi program berisiko mengalami *runtime error*, *crash*, atau menghasilkan kalkulasi yang salah saat dijalankan.