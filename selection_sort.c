
#include<stdio.h>

void selection_sort (int arr[], int size) {

  for (int i = 0 ; i < size - 1 ; i++){
     
      int minIndex = i ;
      
      for (int j = i ; j < size ; j++){
          if (arr[j]<arr[minIndex]){
                 minIndex = j;
          }
       }
       
       int temp = arr[i];
       arr[i] = arr[minIndex];
       arr[minIndex] = temp;
    }

}


int main () {

  int size;
  printf("Enter size of the array : ");
  scanf("%d",&size);
  
  int arr[size];
  printf("Enter array elements : ");
  for (int i = 0 ; i < size ; i++){
     scanf("%d",&arr[i]);
  }
  
  selection_sort(arr,size);

    for (int i = 0 ; i < size ; i++){
     printf("%d ",arr[i]);
  }


  return 0;
}
