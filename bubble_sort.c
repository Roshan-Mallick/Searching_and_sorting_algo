#include<stdio.h>


void bubble_sort (int arr[] , int size){


  for (int i = 0 ; i < size ; i++){
  
     int swapped = 0;
     for (int j = 0 ; j < size - i - 1; j++){
           if (arr[j]>arr[j+1]){
                  int temp = arr[j];
                  arr[j] = arr[j+1];
                  arr[j+1] = temp;  
                  
                  swapped = 1;   
           }
       }
      
      if (swapped == 0){
          break;     
      }
  }

}


int main () {

  int size;
  printf("Enter size of the array : ");
  scanf("%d",&size);
  
  int arr[size];
  printf("Enter elements in the array  : ");
  for (int i = 0;i< size; i++){
     scanf("%d",&arr[i]);
  }
  
  bubble_sort(arr,size);
  
  printf("Sorted array : ");
  for (int i = 0 ; i < size ; i++){
    printf("%d ",arr[i]);
  }


 return 0;
}
