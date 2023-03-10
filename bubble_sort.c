#include <stdio.h>
int main() {
    int x[5]={5,3,6,9,2};
    int n=sizeof(x)/sizeof(x[0]);
    bubblesort(x,n);
    for(int i=0;i<n;i++){
        printf("%d",x[i]);
    }
    return 0;
}
void bubblesort(int x[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            int temp;
            temp=x[j];
            if(x[j]>x[j+1]){
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }
    }
}
