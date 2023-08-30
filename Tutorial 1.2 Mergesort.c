#include <stdio.h>
#include <stdlib.h>

int* mergesort(int array[], int size);
int* merge(int array1[] , int array2[]);
void print(int array[], int size);

int main() {
    // Write C code here
    int array[4] = {4,3,2,1};
    int arraysize = sizeof(array)/sizeof(int);

    print(array, arraysize);
    mergesort(array, arraysize);
    return 0;
}

int* mergesort(int arr[], int size){
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
    // mergesort(arr1,size/2);
    // mergesort(arr2,size/2);
    // return merge(arr1,arr2);
    return merge(mergesort(arr1,size/2), mergesort(arr2,size/2));
}

int* merge(int array1[], int array2[]){
    int i=0,j=0;
    int end=0;
    int min, max;
    if(array1[0]<array2[0]) min = array1[0];
    else min = array2[0];
    
    while(array1[end] != NULL) end++;
    end--;
    // printf("comparing %d and %d\n", array1[end], array2[end]);
    if(array1[end]>array2[end]) max = array1[end];
    else max = array2[end];
    
    int sortedarray[2] = {min,max};
    printf("merging\n");
    print(array1,2);
    print(array2,2);
    // printf("min: %d, max: %d\n", min,max);
    print(sortedarray,2);
    return sortedarray;
}

void print(int array[], int size){
    printf("size:%d , ", size);
    for(int i=0;i<size;i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}
