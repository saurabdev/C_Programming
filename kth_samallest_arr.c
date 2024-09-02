#include <stdio.h>

int main(){
    int arr[]={7, 10, 4, 3, 20, 15,3,56};
    int size=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int i,j,temp;
    for(i=0;i<size-1;i++){
        for(j=i;j<size;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("%d %d",arr[k-1] , arr[size-k]);
}