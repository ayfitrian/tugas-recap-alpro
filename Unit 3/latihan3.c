#include <stdio.h>

int jumlah_elemen, total = 0;

int main() {
    printf("Masukan Jumlah Elemen yang Akan Dimasukkan:");
    scanf("%d", &jumlah_elemen);

    int arr[jumlah_elemen];

    printf("Masukan Nilai Tiap Elemen: \n ");
    for (int i = 0; i < jumlah_elemen; i++) {
        printf("Elemen yang ke-%d=",i+1);
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    
    printf("Hasil Penjumlahan Semua Elemen = %d", total);

    return 0;
}

