#include <stdio.h>

int jumlah_transaksi,urutan_transaksi,total;

int main() {
    printf ("Masukkan Jumlah Transaksi pada Hari Ini\n");
   scanf ("%d", &jumlah_transaksi);

    if (jumlah_transaksi<=0) {
        printf ("Tidak ada transaksi hari ini");
        return 0;
    }

    printf ("masukkan nominal transaksi: \n");
    int i=0;
    do {
        printf ("transaksi ke-%d: ", i+1);
        scanf ("%d", &urutan_transaksi);
        total += urutan_transaksi;
        i++; 
    }
    while (i < jumlah_transaksi);
    printf ("Total pengeluaran hari ini: %d\n", total);

    return 0;
}