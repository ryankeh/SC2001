// Online C compiler to run C program online
#include <stdio.h>

int arr[80];

void buildHeap(int n);
void heapify(int n, int i);
void heapSort(int n);
void fixheap(int index, int i);

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
    
    printf("starting heap: ");
    printarray();
    
    heapSort(n);

    printarray();

    return 0;
}

void buildHeap(int n){
    //build from bottom up, last parent node
    for(int i=n/2 -1;i>=0;i--){
        heapify(n,i);
    }
    return;
}

void heapify(int n, int i){
    int max = i;
    int left = 2*i+1;
    int right = 2*i+2;
    
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

void heapSort(int n){
    for(int i=n;i>2;i--){
        //goes from last index to second one
        //first index will be the lowest at the end
        // i>2 cos otherwise will swap the already nicely slotted 2nd value in the array
        swap(0,i-1);
        fixheap(0,i-2);
    }
}

void fixheap(int index, int i){
    int left = 2*index+1;
    int right = 2*index+2;
    int largerChild;
    if(arr[left]>arr[right]){
        largerChild=left;
    }else largerChild=right;

    if(2*index+1>=i){
        //leaf node
        return;
    }
    else{
        if(arr[index]>arr[largerChild]){
            return;
        }
        else{
            swap(index,largerChild);
            fixheap(largerChild,i);
        }
    }
}

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
    printf("\n");
}

