#include <stdio.h>

int main(){

    int arr[]={0,1,0,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size-1;i++){
        for(int j=i;j<size;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i =0 ; i<size;i++){
        printf("%d",arr[i]);
    }
}
