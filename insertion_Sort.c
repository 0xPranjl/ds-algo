// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int x[6]={45,21,5,89,55,3};
    int t;
    insertion(x);
    for(int i=0;i<6;i++){
        printf("%d ",x[i]);
    }
    return 0;
}
void insertion(int a[]){
    int i,j,key;
    for(int i=1;i<6;i++){
        key=a[i];
        j=i-1;
        while(j>=0&&a[j]>key){
            a[j+1]=a[j];
            j=j-1;
        }
    a[j+1]=key;
        
    }
    
}
