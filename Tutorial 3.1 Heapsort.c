// Online C compiler to run C program online
#include <stdio.h>

int arr[80];

void buildHeap(int n);
void heapify(int n, int i);
void swap(int a, int b);


int main() {
    // Write C code here
    int n=0;
    printf("Enter a string: \n");
    while (1) {
        if (scanf("%d", &arr[n]) != 1) break;
        n++;
    }
    
    buildHeap(n);

    int i=0;
    while(arr[i]!=NULL){
        printf("%d ", arr[i]);
        i++;
    }

    return 0;
}

void buildHeap(int n){
    for(int i=0;i<n;i++){
        heapify(n,i);
    }
    return;
}

void heapify(int n, int i){
    int max = i;
    int left = 2*i;
    int right = 2*i+1;
    //check if left child greater than current largest
    if(left<n && arr[left]>arr[max]) max = left;
    //check if right child is greater than current largest
    if(right<n && arr[right]>arr[max]) max = right;
    //check if largest element is the root
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

