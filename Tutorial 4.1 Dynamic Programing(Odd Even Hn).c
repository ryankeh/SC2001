#include <stdio.h>
int hn_DP(int n){ // Make use of an array S[0..n]
    int S[100]={0};
    S[0]=1;
    for (int i=1; i<=n; i++) {
        int j;
        S[i] = 0;
        if (i%2) j=i-1;
        else j=i-2;
        
        while (j>=0){
            S[i] += S[j]; j-=2;
        };
    }
    
    for (int i=0;i<=n;i++){
        printf("%d ",S[i]);
    }
    
    return S[n];
}


int main(){
    printf("\nResult: %d\n", hn_DP(20));
    return;
}
