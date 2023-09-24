// Online C compiler to run C program online
#include <stdio.h>

int arr[80];

void buildHeap(int n);
void heapify(int n, int i);
void swap(int a, int b);
void printarray();


int main() {
    // Write C code here
    int n=0;
    printf("Enter a string: \n");
    while (1) {
        if (scanf("%d", &arr[n]) != 1) break;
        n++;
    }
    
    buildHeap(n);

    printarray();

    return 0;
}

void buildHeap(int n){
    for(int i=0;i<n;i++){
        heapify(n,i);
    }
    return;
}

void heapify(int n, int i){
    printf("heapifying %d\n", i);
    int max = i;
    int left = 2*i+1;
    int right = 2*i+2;
    
    //check if left child greater than current largest
    if(left<n && arr[left]>arr[max]) max = left;
    //check if right child is greater than current largest
    if(right<n && arr[right]>arr[max]) max = right;
    //check if largest element is the root
    printf("max: %d\n", arr[max]);
    if(max!=i){
        swap(i,max);
        heapify(n,max);
    }
    return;
}

// void heapSort(int n){
    
    
//     for(i=n;i>0;i--){
//         //goes from last index to second one
//         //first index will be the lowest at the end
        
//     }
// }

void swap(int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void printarray(){
    int i=0;
    while(arr[i]!=NULL){
        printf("%d ", arr[i]);
        i++;
    }
}

