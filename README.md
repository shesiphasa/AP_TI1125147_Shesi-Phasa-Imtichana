# AP_TI1125147_Shesi-Phasa-Imtichana

Nama : Shesi Phasa Imtichana

NIM : TI1125147

kelas : TI12D

Program Kasir Sederhana

Deskripsi Program

Program Kasir Sederhana adalah aplikasi berbasis C++ yang digunakan untuk menghitung total pembayaran pelanggan. Program menampilkan daftar barang, menerima input barang dan jumlah pembelian, menghitung subtotal, diskon, pajak, serta mencetak struk pembelian lengkap dengan tanggal transaksi.

Tujuan Program

Program dibuat untuk menerapkan konsep:

- Prosedur tanpa parameter
- Prosedur dengan parameter
- Fungsi dengan parameter
- Fungsi dengan nilai balik (return)
- Percabangan (if dan switch)

Selain itu, program juga dilengkapi dengan fitur tambahan berupa:

- Perhitungan diskon
- Perhitungan pajak
- Transaksi berulang
- Pencetakan tanggal transaksi

Alur Kerja Program

1. Menampilkan Daftar Barang

Program memanggil prosedur "tampilkanMenu()" untuk menampilkan daftar barang beserta harga yang tersedia.

2. Memilih Barang dan Jumlah Pembelian

Pengguna memasukkan:

- Kode barang
- Jumlah barang yang dibeli

3. Menentukan Harga Barang

Program memanggil fungsi "getHarga(kode)".

Fungsi ini menggunakan struktur "switch" untuk menentukan harga berdasarkan kode barang yang dipilih. Jika kode tidak ditemukan, fungsi mengembalikan nilai "0".

4. Menghitung Subtotal

Subtotal dihitung dengan rumus:

Subtotal = Harga Barang × Jumlah Barang

5. Menghitung Diskon

Program memanggil fungsi "hitungDiskon(total)".

Jika total belanja mencapai Rp100.000 atau lebih, pelanggan mendapatkan diskon sebesar 10%.

Rumus:

Diskon = Total Belanja × 10%

Jika total belanja kurang dari Rp100.000, diskon bernilai 0.

6. Menghitung Pajak

Setelah diskon dikurangi, program menghitung pajak sebesar 11%.

Rumus:

Pajak = (Subtotal − Diskon) × 11%

7. Menghitung Total Pembayaran

Total akhir yang harus dibayar dihitung dengan rumus:

Total Bayar = (Subtotal − Diskon) + Pajak

8. Mencetak Struk Pembelian

Program memanggil prosedur "cetakStruk()" untuk menampilkan:

- Subtotal
- Diskon
- Pajak
- Total pembayaran
- Tanggal transaksi

9. Transaksi Berulang

Program menggunakan perulangan "do-while" sehingga pengguna dapat melakukan transaksi kembali tanpa perlu menjalankan ulang program.

Jika pengguna memilih:

- Y atau y → transaksi diulang
- T atau selain itu → program selesai

Implementasi Konsep Pemrograman

Prosedur Tanpa Parameter

void tampilkanMenu()

Digunakan untuk menampilkan daftar barang.

Prosedur Dengan Parameter

void cetakStruk(double subtotal, double diskon, double pajak, double total)

Digunakan untuk mencetak hasil transaksi.

Fungsi Dengan Parameter

double hitungDiskon(double total)

Digunakan untuk menghitung diskon berdasarkan total belanja.

Fungsi Dengan Nilai Balik

int getHarga(int kode)

Mengembalikan harga barang sesuai kode yang dipilih.

Percabangan

Menggunakan:

if

untuk validasi kode barang dan pemberian diskon.

Menggunakan:

switch

untuk menentukan harga berdasarkan kode barang.

Kesimpulan

Program kasir sederhana ini berhasil menerapkan konsep prosedur, fungsi, percabangan, perulangan, serta pengolahan data transaksi. Program mampu menghitung subtotal, diskon, pajak, total pembayaran, dan mencetak struk transaksi secara otomatis.
