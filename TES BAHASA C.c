#include <stdio.h>
#include <stdlib.h>


char daftar(menu)
{
    printf("1. Sushi 10.000\n");
    printf("2. Sashimi 20.000\n");
    printf("3. Shirako 4.000\n");
    printf("4. Dorayaki 5.000\n");
    printf("5. Roti melon 10.000\n");
    printf("6. Burger 70.000\n");
    printf("7. Ramen 60.000\n");
    printf("8. Es krim 60.000\n");
    printf("9. Es campur 10.000\n");
    printf("10. Batagor 90.000\n");
}






void main(){
    char keputusan_pemilik = "pelanggan masuk atau tutup?:";
    if (keputusan_pemilik == "pelanggan masuk"){
        printf("masukkan nama: \n");
        char keputusan_pelanggan= "lihat menu, pesan makanan minuman, atau keluar?: \n";
        if (keputusan_pelanggan == "lihat menu")
            printf(daftar(menu));
            printf(keputusan_pelanggan);
        else if (keputusan_pelanggan== "pesan makanan minuman")
            char nama_menu = "masukkan nama menu: \n";
            int jumlah_menu= "masukkan jumlah menu: \n";
            int harga_menu= "masukkan harga menu (tanpa titik atau desimal): \n"
            printf(nama_menu,daftar(menu));
            printf(keputusan_pelanggan);
        else if (keputusan_pelanggan=="keluar")
            printf(keputusan_pemilik);
    }
    else if (keputusan_pemilik = "tutup"){
        int total_penjualan = int valueOf(jumlah_menu)*int valueOf(harga_menu);
        if (total_penjualan != 0)
            printf(total_penjualan);
        else
            printf("Tidak ada penjualan");
    }



 return 0;
}


    return 0;
}
