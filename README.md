# Smart Mobility Dashboard · Kelompok 9

Dashboard pemantauan dan optimisasi lama lampu hijau di simpang Mirota (ruas Utara, Timur, Barat). Data yang dipakai adalah data sintetis.

## Isi repo

| File | Keterangan |
|---|---|
| `index.html` | Dashboard |
| `data_sdi.xlsx` | Data kendaraan masuk dan keluar per rotasi (Fisika) |
| `emisi_gas_dan_tumbuhan_sdi.xlsx` | Laju emisi dan data tumbuhan mitigasi (Kimia) |
| `miniproject_sdi.cpp` | Program perhitungan lama lampu hijau (Ilmu Komputer) |

## Bagian dashboard

- **Fisika:** menghitung laju masuk, laju keluar, dan kerapatan kendaraan tiap ruas dari data lima rotasi lampu, sebagai data dasar seluruh perhitungan.
- **Matematika:** memodelkan pembagian lampu hijau sebanding kebutuhan tiap ruas, mengujinya lewat simulasi antrean, dan menjadi dasar perhitungan biaya Aktuaria serta emisi Kimia.
- **Aktuaria:** menghitung risiko waktu tunggu berlebih dan biaya ekonomi waktu tunggu, lengkap dengan uji sensitivitas nilai waktu dan proyeksi tahunan.
- **Kimia:** menghitung emisi CO₂ dan gas lain saat kendaraan antre, lalu merekomendasikan vegetasi untuk menyerap emisi di sekitar simpang.
- **Ilmu Komputer:** memprogram perhitungan kebutuhan, hijau usulan, dan status kestabilan simpang dalam C++ berdasarkan model Matematika, sehingga hasilnya bisa dijalankan ulang.

