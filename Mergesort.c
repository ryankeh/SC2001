// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int array[8] = {1,4,3,6,2,8,5,7};
    // printf("size: %d\n", sizeof(array));
    
    
    for(int i=0;i<(sizeof(array)/sizeof(int));i++){
        printf("%d\n", array[i]);
    }
    return 0;
}

int mergesort(int array[]){
    int size = (sizeof(array)/sizeof(int));
    if(size==1) return array;
    
    int array1[size/2]={0};
    int array2[size/2]={0};
    
    for(int i=0, i<(size/2), i++){
        array1[i] = array[i];
    }
    
}

int merge(int array1[] , int array2[]){
    
}
