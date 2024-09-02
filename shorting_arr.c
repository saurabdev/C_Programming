#include <stdio.h>

int main(){
    int arr[]={5,1,4,5,7,8,9,10,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i,j;
    int temp;
    for(i=0;i<size-1;i++){
        // temp=arr[i];
        for(j=i;j<size;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<size;i++){
        printf("%d",arr[i]);
    }
}