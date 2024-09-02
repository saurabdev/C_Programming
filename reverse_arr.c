#include <stdio.h>


int main(){
    int arr[]={90,12,34,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int rev_arr[size];
    int i,j;

    for (i = size - 1, j = 0; i >= 0; i--, j++) {
        rev_arr[j] = arr[i];
    }

    for(i=0;i<size;i++){
        printf("%d\n",rev_arr[i]);
    }

}