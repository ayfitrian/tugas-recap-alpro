#include <stdio.h>

float phi = 3.141592653589793238462643383279502884197;

int main(){
    printf("%f\n", phi);
    printf("%.1f\n", phi);
    printf("%.2f\n", phi);
    printf("%.3f\n", phi);
    printf("%.4f\n", phi);
    printf("%.5f", phi);
    return 0;
}

/*Fungsi tanda titik pada yang diikuti angka pada kode diatas yaitu untuk menentukan jumlah digit yang akan dicetak setelah titik desimal. 
contohnya pada "%1.f" itu nantinya akan mencetak nilai dengan satu digit setelah titik desimal.*/