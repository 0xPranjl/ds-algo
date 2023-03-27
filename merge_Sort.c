// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int x[7]={54,12,7,45,02,35,46};
     ms(x,0,6);
     for(int i=0;i<7;i++){
       printf("%d ",x[i]);
   }
}
void merge(int x[],int low,int mid,int high){
    int i,j,k,y[100];
    i=low;
    j=mid+1;
    k=low;
    while(i<mid&&j<high){
        if(x[i]>x[j]){
            y[k]=x[j];
            k++;
            j++;
        }
        if(x[i]<x[j]){
            y[k]=x[i];
            k++;
            i++;
        }
    }
    while(i<=mid){
        y[k]=x[i];
        k++;
        i++;
    }
     while(j<=high){
        y[k]=x[j];
        k++;
        j++;
    }
    
}

void ms(int x[],int low,int high){
    if(low<high){
        mid=(low+high)/2;
        ms(x,low,mid);
        ms(x,mid+1,high);
        merge(x,mid,low,high);
    }
    
}
