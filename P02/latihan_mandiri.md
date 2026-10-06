# Latihan Mandiri - Pertemuan 02

Laporan dan hasil analisis tugas Latihan Mandiri Pertemuan 2 Pemrograman Terstruktur.

---

## Latihan 1 – Penambahan Variabel pada SiNilai v0.1

**Deskripsi Task:**  
Menambahkan informasi `semester` ke dalam program `sinilai_v01.cpp`.

* **Variabel Baru:** Semester
* **Tipe Data:** `int`
* **Alasan Pemilihan Tipe Data:** Semester dinyatakan dalam bilangan bulat positif (1, 2, dst) tanpa ada komponen pecahan.
* **Implementasi Kode:**
  - Menambahkan deklarasi `int semester = 0;`.
  - Menambahkan baris input `cin >> semester;`.
  - Menampilkan `Semester :` pada output Kartu Data Mahasiswa.

---

## Latihan 2 – Format Output Boolean (`true`/`false`)

**Deskripsi Task:**  
Mengkonfigurasi pencetakan variabel `lulus` di `tipe_dasar.cpp` agar muncul dalam format teks.

* **Solusi:**  
  Menyisipkan manipulator `boolalpha` pada aliran output `cout`.
* **Baris Kode:**  
  `cout << "Lulus : " << boolalpha << lulus << "\n";`
* **Dampak:**  
  Output yang semula angka `1` atau `0` berubah menjadi string `"true"` atau `"false"`.

---

## Latihan 3 – Eksperimen Pengisian Tipe Data Integer

**Deskripsi Task:**  
Menganalisis perbedaan perilaku kompilasi antara assignment biasa dan *brace initialization* saat diberi nilai pecahan.

* **Pengujian 1 (`int nilai = 85.7;`):**  
  * **Status:** Berhasil *compile*.
  * **Perilaku:** Terjadi *implicit truncation*, di mana bagian desimal (`.7`) diabaikan dan hanya `85` yang tersimpan.
* **Pengujian 2 (`int nilai{85.7};`):**  
  * **Status:** Error saat *compile*.
  * **Pesan Error:** *Narrowing conversion*.
* **Kesimpulan:**  
  Penggunaan kurung kurawal `{}` memproteksi variabel dari potensi kehilangan presisi data saat pengisian nilai.

---

## Latihan 4 – Perbaikan Nama Variabel (Refactoring)

**Deskripsi Task:**  
Mengidentifikasi nama variabel yang tidak deskriptif dan memberikan usulan nama baru yang lebih informatif.

| Nama Asli (Kurang Jelas) | Usulan Nama Baru | Alasan Refactoring |
|---|---|---|
| `a` | `jumlah_siswa` | Nama satu huruf tidak memberikan konteks data |
| `temp` | `suhu_ruangan` | Menghindari ambiguitas dengan singkatan *temporary* |
| `flag` | `is_lulus` | Menjelaskan status kondisi boolean dengan eksplisit |
| `s` | `nama_lengkap` | Memperjelas jenis string yang disimpan |
| `d` | `durasi_hari` | Menyatakan satuan waktu yang digunakan |