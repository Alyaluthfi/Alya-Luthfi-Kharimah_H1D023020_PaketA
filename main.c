#include <stdio.h>

int main() {
    // Definisikan Array dan pointer yang digunakan
    int arr[] = {1, 6, 13, 16, 25, 26};
    int *petter = arr;

    // Cetak isi array sebelum perubahan
    printf("Daftar Halaman Sebelum Perubahan:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Ubah value pada Array
    petter[2] = 0; 
    petter[3] = 0; 
    petter[4] = 0; 

    // Cetak isi array setelah perubahan
    printf("Daftar Halaman Setelah Perubahan:\n");
    for (int i = 0; i < 6; i++) {
        if (i >= 2 && i <= 4) {
            printf("[ CENCORED ] ");
        } else {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

return 0;
}