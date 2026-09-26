# Catatan Kesalahan Program

| Berkas | Jenis kesalahan | Pesan yang muncul | Cara kamu mengetahuinya |
|---|---|---|---|
| `k1_sintaks.cpp` | Sintaks: Kekeliruan dalam aturan penulisan atau struktur kode program. | `tempCodeRunnerFile.cpp:5:5: error: expected ',' or ';' before 'std'` | Terdeteksi dari notifikasi kegagalan saat proses kompilasi (compile). |
| `k2_nama.cpp` |Menggunakan variabel yang belum terdefinisi atau salah ketik nama. | `k2_nama.cpp:8:31: error: 'Nilai' was not declared in this scope; did you mean 'nilai'?` | Terbaca dari laporan compiler yang menyatakan identitas variabel tidak ditemukan.|
| `k3_runtime.cpp` | Kendala atau kegagalan eksekusi saat program sedang beroperasi. | `Jumlah mahasiswa: 0` | Aplikasi mendadak berhenti sesaat setelah diberi masukan nilai 0, sehingga nilai rerata tidak keluar. |
| `k4_logika.cpp` | Kode berjalan lancar tanpa bug, namun keluaran (output) tidak tepat. | `Rata-rata: 81` | Ditemukan saat mencocokkan hasil eksekusi program dengan kalkulasi manual yang seharusnya bernilai 81,67.|

# Pendapat / Refleksi

Dari seluruh jenis kesalahan yang ada, kesalahan logika adalah yang paling berisiko. Hal ini disebabkan program tetap mampu dieksekusi hingga selesai tanpa memicu peringatan error sama sekali, padahal kalkulasi yang dihasilkan keliru. Jika kita tidak memverifikasi ulang hasil keluarannya secara mendalam, kekeliruan tersebut sangat mudah terlewat.