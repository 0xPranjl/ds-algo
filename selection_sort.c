// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int x[6]={45,21,5,89,55,3};
    int t;
    selection(x);
    for(int i=0;i<6;i++){
        printf("%d ",x[i]);
    }
    return 0;
}
void selection(int a[]){
    for(int i=0;i<=6;i++){
        int temp;
        for(int j=i+1;j<6;j++){
            if(a[j]<a[i]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
            
        }
    }
}
