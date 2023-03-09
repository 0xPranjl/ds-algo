// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int y[10]={1,2,3,4,5,6,7,55,88,99};
    int x,m;
    printf("Search for element\n");
    scanf("%d",&x);
    m=binary(y,x);
    if(m!=-1){
        printf("Element found at index %d",m);
    }
    else{
        printf("element not found!");
    }
    
    return 0;
}
int binary(int x[],int target){
   int s=0;
   int e=9;
   while(s<=e){
       int mid=(s+e)/2;
       if(x[mid]==target){
         return mid;
       }
       else if(x[mid]>target){
           e=mid-1;
       }
         else if(x[mid]<target){
           s=mid+1;
       }
       
   }
   return -1;
    //return 1;
}
