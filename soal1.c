// Nama             : Zahra Aulia
// NIM              : 13224007
// Keterangan soal  : Nomor 2

#include <stdio.h>  
#include <math.h> 

void findmax(int *arr, int n, int *max, int *IDX) {
    *max = arr[0]; 
    *IDX = 0;
    for (int i = 1; i < n; i++) {  
        if (arr[i] > *max) {        
            *max = arr[i]; 
            *IDX = i;      
        }
    }
}

void findsum (int *arr, int n, int *sum){  
    *sum = 0;                    
    for (int i = 0; i < n; i++) {
        *sum = *sum + arr[i];    
    }
}

void findrata(int *arr, int n, double *rata) {
    int jumlah = 0;                    
    for (int i = 0; i < n; i++) {
        jumlah = jumlah + arr[i];      
    }
    *rata = (double)jumlah / n;  
}

int main() {
    int n;          
    scanf("%d", &n);  

    int arr[n];                        
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);}

    int sum, idxmax, max;
    double rata = 0; 
    findmax(arr, n, &max,  &idxmax);       
    findrata(arr, n, &rata); 
    findsum (arr, n, &sum);

    printf("SUM %d\n", sum);
    printf("AVG %.2f\n", rata);
    printf("MAX %d\n", max);
    printf("IDX %d\n", idxmax);

    return 0;
}
