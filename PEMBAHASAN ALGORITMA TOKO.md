PEMBAHASAN ALGORITMA TOKO
--------------
--------------

Pada tulisan ini, Saya akan memaparkan terkait dengan _overview_ dari program yang Saya buat terkait dengan keberjalanan toko Pak Roger.

Pada awalnya, masalah yang harus kita pertimbangkan adalah terkait dengan keputusan pemilik untuk membuka  atau menutup toko. Perhatikanlah algoritma berikut

```
char keputusan_pemilik = "pelanggan masuk atau tutup?:";
```
Algoritma di atas berfungsi untuk memberikan pilihan terhadap pemilik untuk pelanggan masuk ataupun menutup toko. Kemudian, tiap-tiap kasus yang terjadi berdasarkan keputusan pemilik akan ditinjau lebih lanjut sebagai berikut.


**A. Pelanggan masuk**
-------------------
Pertama-tama, kita akan tinjau kasus apabila sang pemilik memutuskan untuk membiarkan pelanggan masuk.

**1. Pemasukkan nama pelanggan**

Pertama-tama, apabila pelanggan datang, maka para pelanggan harus memasukkan nama terlebih dahulu. Algorima untuk masalah tersebut ditunjukkan sebagai berikut.
```
 printf("masukkan nama: \n");
```

**2. Melihat menu, membeli, atau keluar**

Selanjutnya, apabila pembeli sudah memasukkan nama, maka pembeli akan diberikan pilihan untuk melihat menu, membeli makanan atau minuman, ataupun keluar toko. 
```
char keputusan_pelanggan= "lihat menu, pesan makanan minuman, atau keluar?: \n";
```
Tiap-tiap dari keputusan pembeli akan dibagi menjadi kasus masing-masing sebagai berikut.

* Melihat menu

Apabila pembeli memutuskan untuk melihat menu, maka akan ditampilkan daftar menu yang mengandung ID menu, nama menu, serta harga dari menu yang ditunjukkan. Masalah tersebut diwujudkan dalam algoritma seperti berikut.
```
 if (keputusan_pelanggan == "lihat menu")
            printf(daftar(char menu));
            printf(keputusan_pelanggan);
```
 Algoritma di atas juga menunjukkan bahwa setelah menu ditunjukkan, pembeli dapat menekan pilihan agar tampilan kembali seperti sebelumnya.

* Membeli makanan/minuman

Apabila pembeli memutuskan untuk membeli makanan/minuman, maka pembeli akan diharuskan untuk memasukkan minimal ID atau nama menu serta memasukkan jumlahnya. Masalah tersebut diwujudkan dalam algoritma berikut.
```
else if (keputusan_pelanggan== "pesan makanan minuman")
            char nama_menu = "masukkan nama menu: \n";
            int jumlah_menu= "masukkan jumlah menu: \n";
            int harga_menu= "masukkan harga menu (tanpa titik atau desimal): \n"
            printf(nama_menu,daftar(menu));
            printf(keputusan_pelanggan);
```
Algoritma di atas juga menunjukkan apabila pembeli sudah menyudahi transaksinya, maka pembeli akan menekan tombol yang menandakan selesainya pembelian dan tampilan akan kembali seperti semula.

* Keluar toko

Apabila pembeli memutuskan untuk keluar toko, maka tampilan akan kembali pada tampilan sebelum terdapat pelanggan masuk.
```
  else if (keputusan_pelanggan=="keluar")
            printf(keputusan_pemilik);
```


**B. Menutup Toko**
------------------------
Apabila sang pemilik memutuskan untuk menutup toko, maka program akan memberikan _output_ tergantung dari ada tidaknya transaksi dalam satu hari pada toko tersebut.

Masing-masing dari kedua kasus akan ditinjau lebih lanjut sebagai berikut.

**1. Terjadi transaksi**

Apabila terjadi transaksi, maka program akan menampilkan riwayat pembelian berupa nama pelanggan, menu yang dipesan, serta harga total yang dibeli oleh pelanggan tersebut. Algoritma untuk masalah tersebut adalah sebagai berikut.
```

        if (total_penjualan != 0)
            printf(total_penjualan);
        
```
**2. Tidak terjadi transaksi**

Apabila tidak terjadi transaksi, maka program hanya akan menampilkan bahwa tidak penjualan di hari tersebut. Algoritma untuk masalah tersebut adalah sebagai berikut.
```
        else
            printf("Tidak ada penjualan");
```