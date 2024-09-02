#include <stdio.h>

int single_freq(int arr[],int size);
int multiple_freq(int arr[],int size);

int main(){
    int arr[]={2,3,4,5,2,5,3,5,3};
    int size=sizeof(arr)/sizeof(arr[0]);

    printf("Enter 1 for frequency of any digit in an aarry\n");
    printf("Enter 2 to get frequecy of all digit presen tin an array\n");
    int option;
    scanf("%d",&option);
    if(option==1){
        single_freq(arr,size);
    }else if (option==2){
        multiple_freq(arr,size);
    }else{
        printf("Invalid Input");
    }
}

int single_freq(int arr[],int size){
    int search;
    printf("Enter search element");
    scanf("%d",&search);
    int i,count=0;

    for(i=0;i<size-1;i++){
       if(arr[i]==search){
        count++;
       }
    }
    printf("Frequency of %d is %d",search,count);
   
}

int multiple_freq(int arr[],int size){
  int freq[size];
  int isCounted=-1;

  for(int i=0;i<size;i++){
    freq[i]=1;
  }

    for (int i = 0; i < size; i++) {
        if (freq[i] != isCounted) {
            for (int j = i + 1; j < size; j++) {
                if (arr[i] == arr[j]) {
                    freq[i]++;
                    freq[j] = isCounted; 
                }
            }
        }
    }

 for (int i = 0; i < size; i++) {
        if (freq[i] != isCounted) {
            printf("Frquency of %d is %d\n", arr[i], freq[i]);
        }
    }

}