// Online C compiler to run C program online
#include <stdio.h>

void swap(int a, int b);

int main() {
    // Write C code here
    int r,u,b;
    int n=0;
    char temp;
    
    char arr[80];
    printf("Enter a string: \n");
    fgets(arr, 80, stdin);
    
    while(arr[n]!=NULL){ n++;}
    printf("n: %d\n", n);
    
    r=-1;
    u=0;
    b=n-1;
    
    while(u<b){
        if(arr[u]=='r'){
            // swap(r+1,u);
            temp = arr[r+1];
            arr[r+1] = arr[u];
            arr[u] = temp;
            r++;
            u++;
        }
        else if(arr[u]=='w'){
            u++;
        }
        else{
            //arr[u]=="b"
            // swap(b-1,u);
            temp = arr[b-1];
            arr[b-1] = arr[u];
            arr[u] = temp;
            b--;
        }
    }
    
    n=0;
    while(arr[n]!=NULL){
        printf("%c", arr[n]);
        n++;
    }

    return 0;
}

// void swap(int a, int b){
//     char temp = arr[a];
//     arr[a] = arr[b];
//     arr[b] = temp;
//     return;
// }
