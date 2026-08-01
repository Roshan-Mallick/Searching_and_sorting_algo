#include<stdio.h>


void insertion_sort(int arr[], int size) {

  for (int i = 0 ; i < size ; i++){
      
      int j = i; 
      
        while (j > 0 && arr[j-1]>arr[j]){
          
          int temp = arr[j-1];
          arr[j-1] = arr[j];
          arr[j] = temp;
          
          j--;
        
        }
  
  }

}

 
 
 int main ( ){
 
 int size;
 printf("Enter size of the array : ");
 scanf("%d",&size);
 
 
 int arr[size] ;
 printf("Enter array elements : ");
 for (int i = 0 ; i < size ; i++){
    scanf("%d",&arr[i]);
 }
 
 
 insertion_sort(arr,size);
 
 printf("Enter array elements : ");
 for (int i = 0 ; i < size ; i++){
    printf("%d " , arr[i]);
 }
 
 
  return 0;
 } 
