#include <stdio.h>
#include <stdlib.h>

int mergesort(int array[], int size);
int merge(int array1[] , int array2[]);

int main() {
    // Write C code here
    int array[8] = {1,4,3,6,2,8,5,7};
    int arraysize = sizeof(array)/sizeof(int);

    print(array, arraysize);
    mergesort(array, arraysize);
    return 0;
}

int mergesort(int arr[], int size){
    if(size==1) return 0;
    int* arr1;
    int* arr2;
    int i=0;
    
    int newsize = size/2;
    arr1 = (int*)malloc(newsize * sizeof(int));
    arr2 = (int*)malloc(newsize * sizeof(int));
    
    for(i=0; i<size/2; i++){
        arr1[i] = arr[i];
    }
    
    int j=0;
    for(; i<size; i++){
        arr2[j] = arr[i];
        j++;
    }
    
    print(arr1,size/2);
    print(arr2,size/2);
    mergesort(arr1,size/2);
    mergesort(arr2,size/2);
    merge(arr1,arr2);
    return 0;
}

int merge(int array1[], int array2[]){
    int i=0,j=0;
    while()
    

}

void print(int array[], int size){
    printf("size: %d\n", size);
    for(int i=0;i<size;i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}
