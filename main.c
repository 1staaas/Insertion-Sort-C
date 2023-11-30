//Insertion Sort
#include <stdio.h>

void citireArray(int arr[], int n) {
    printf("Introduceti elementele in array:\n");
    for(int i=0; i < n; i++) {
        printf("arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
}

void afisareArray(int arr[], int n) {
    for(int i=0; i < n; i++) {
        printf("arr[%d]= %d\n", i, arr[i]);
    }
}

void insertionSort(int arr[], int n) {
    for(int i=1; i < n; i++) {
        int key= arr[i];
        int j= i-1;
        while(j >= 0 && arr[j] > key) {
            arr[j+1]= arr[j];
            j-= 1;
        }
        arr[j+1]= key;
    }
}


int main() {
    int arr[100], n;
    
    printf("Introduceti cate elemente doriti sa contina array-ul:\n");
    scanf("%d", &n);
    
    citireArray(arr, n);
    printf("Array-ul inainte sa fie sortat:\n");
    afisareArray(arr, n);
    printf("Array-ul dupa ce a fost sortat folosind algoritmul Insertion Sort:\n");
    insertionSort(arr, n);
    afisareArray(arr, n);
}

