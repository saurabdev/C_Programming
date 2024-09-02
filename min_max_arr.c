#include <stdio.h>

int main(){
    int arr[]={2,4,1,34,100000,67};
    int size = sizeof(arr)/sizeof(arr[0]);
    int min,max;
    int i,j;

    for(i=0;i<size;i++){
        min=arr[i];
        max=arr[i];
        for(j=1;j<size;j++){
            if(min>arr[j]){
                min=arr[j];
            }
            if(max<arr[j]){
                max=arr[j];
            }
        }
    }
    printf("\n%d %d\n",min,max);

}