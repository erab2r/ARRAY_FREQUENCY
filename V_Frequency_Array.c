#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n],i;
    for(i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int freq[m  + 1];
    for (i = 0; i <= m; i++) {
        freq[i] = 0;
    } 
    for(i=0;i<n;i++){
        int val = a[i];
        freq[val]++;
    }
    for(i=1;i<=m;i++){
        printf("%d -> %d\n",i,freq[i]);
    }
}