# P06 Perulangan Lanjutan: Bersarang, break, continue, Debugger, iomanip

Folder kode Pertemuan 6 Pemrograman Terstruktur. Setiap program berpasangan dengan flowchart di modul;
pada perulangan bersarang ada dua panah yang kembali, dan pada break/continue ada panah yang
"memotong jalan".

## Isi

| Berkas | Kegunaan |
|---|---|
| `bersarang_tabel.cpp` | for di dalam for: tabel perkalian dengan kolom lurus (setw) |
| `break_tebak.cpp` | break: berhenti lebih awal begitu tebakan benar, paling banyak 5 kesempatan |
| `continue_remediasi.cpp` | continue: lewati mahasiswa yang nilainya cukup, daftar hanya yang perlu remediasi |
| `rapi_iomanip.cpp` | fixed, setprecision, setw, left, right: keluaran berkolom rapi |
| `debug_rerata.cpp` | Program dengan kesalahan logika yang sengaja ditanam; dicari dengan debugger, bukan dibaca |
| `masukan_debug.txt` | Masukan untuk `debug_rerata`: 3 nilai (80, 70, 90), rata-rata yang benar 80 |
| `sinilai_v05_awal.cpp` | Starter SiNilai v0.5: v0.4 lengkap, lengkapi iomanip, penghitung huruf, tertinggi, sebaran batang |
| `contoh_masukan.txt` | Enam mahasiswa untuk menguji v0.5 |
| `.vscode/launch.json` | Konfigurasi debugger VS Code (gdb MSYS2); tekan F5 pada berkas .cpp yang terbuka |
| `.vscode/settings.json`, `tasks.json`, `.gitignore` | Sama dengan pertemuan sebelumnya |

## Kasus uji SiNilai v0.5 (`./sinilai_v05 < contoh_masukan.txt`)

| Mahasiswa | Komponen | Nilai akhir (2 desimal) | Huruf | Status |
|---|---|---|---|---|
| Siti Aminah | 100, 85.5, 78, 80 | 83.97 | A | Lulus |
| Budi Santoso | 80, 70, 65, 60 | 67.75 | C+ | Lulus |
| Rina Wati | 60, 50, 40, 55 | 49.50 | D | Belum lulus |
| Dewi Lestari | 90, 90, 90, 90 | 90.00 | A | Lulus |
| Eko Prasetyo | 75, 72, 70, 68 | 71.00 | B | Lulus |
| Fajar Nugroho | 30, 20, 35, 25 | 25.75 | E | Belum lulus |

Laporan kelas: 6 mahasiswa, 4 lulus, 2 belum lulus, rata-rata 64.66, tertinggi Dewi Lestari (90.00).
Sebaran huruf: A 2, B 1, C 1, D 1, E 1 (B+ dihitung sebagai B, C+ sebagai C).

Catatan: 83.975 tampil sebagai 83.97, bukan 83.98, karena di dalam komputer 83.975 tersimpan
sebagai 83.97499...; pembulatan mengikuti angka yang tersimpan.

## Debugger

`launch.json` memakai `C:/msys64/ucrt64/bin/gdb.exe` dan program `<nama>.exe` hasil tasks.json.
Di Linux hapus akhiran `.exe` dan ganti `miDebuggerPath` menjadi `/usr/bin/gdb`; di macOS ganti
`MIMode` menjadi `lldb` dan hapus `miDebuggerPath`. Panduan lengkap: `03_Modul/Panduan_Debugger_VS_Code.docx`.

## Yang dikumpulkan mahasiswa

Folder `p06` di repository `pt-NPM` berisi `sinilai_v05.cpp`. Lihat Modul Pertemuan 6 bagian E.

## Deklarasi Penggunaan AI

Dalam pengerjaan tugas Praktikum Pertemuan 6 (**P06**) ini, saya menggunakan bantuan kecerdasan buatan (AI) sebagai kolaborator diskusi dan pemrograman dengan rincian sebagai berikut:

* **Alat yang Digunakan**: Google Gemini / Antigravity
* **Tujuan Penggunaan**:
  - Memahami konsep perulangan bersarang (*nested loop*), pelacakan nilai maksimum/tertinggi, serta pemformatan keluaran berkolom rapi menggunakan manipulator `<iomanip>` (`fixed`, `setprecision`, `setw`, `left`, `right`).
  - Membantu menyelesaikan implementasi *TODO 1* sampai *TODO 9* pada `sinilai_v05_awal.cpp` dan `sinilai_v05.cpp` (penghitung sebaran huruf mutu, penentuan mahasiswa peraih nilai tertinggi, serta pembuatan grafik batang `#`).
  - Memahami alur pengujian otomatis menggunakan berkas masukan (`contoh_masukan.txt`) dan *input redirection*.
* **Prompt yang Digunakan**:
  - *"tolong isikan todo 3 sampai 9"*
  - *"perbaiki eror di v05"*
  - *"kerjakan todo 1 sampai 9 sinilai_v05_awal.cpp"*
  - *"cara isi contoh_masukan.txt nya gimana"*
* **Verifikasi & Umpan Balik AI**: Seluruh kode yang dihasilkan telah diteliti, dipahami, dan diuji menggunakan masukan dari `contoh_masukan.txt`. Hasil keluaran (rata-rata kelas 64.66, nilai tertinggi Dewi Lestari 90.00, serta sebaran huruf mutu) telah diverifikasi dan dipastikan sesuai dengan kasus uji pada modul sebelum disimpan.
