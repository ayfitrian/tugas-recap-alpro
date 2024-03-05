#include <stdio.h>

int sisi,keliling,luas,volume;

void hitungkelilingpersegi(int sisi) {
    keliling = 4*sisi;
    printf ("Keliling persegi : %d \n", keliling);
}
void hitungluaspersegi(int sisi) {
    luas = sisi*sisi;
    printf ("Luas persegi : %d \n", luas);
}
void hitungvolumekubus(int sisi) {
    volume = sisi*sisi*sisi;
    printf ("Volume kubus : %d\n", volume );
}

int main () {
    printf ("Masukkan nilai sisi : ");
    scanf ("%d", &sisi);

    hitungkelilingpersegi(sisi);
    hitungluaspersegi(sisi);
    hitungvolumekubus(sisi);

    return 0;
}