#include<stdio.h>

int binary_search(int arr[] , int size , int target){
  
  int low = 0 ; 
  int high = size - 1;
   
  while (low <= high) { // low smaller than equal to high 
  
    int mid = low + (high - low)/2;
    
    if (arr[mid]==target){
       return mid ;
    } else if (arr[mid] < target){
    
    low = mid + 1;
        
    } else {
       high = mid - 1;
    }
  }
  
  return -1;


}


// adding a sorting alorithm cause binary search works only on sorted array 

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
  printf("Enter array elements : ");
  for (int i = 0 ; i< size ;i++) {
      scanf("%d",&arr[i]);
  }
  
  bubble_sort(arr,size);
  
  printf("Sorted array : ");
  for (int i = 0 ; i< size ;i++) {
      printf("%d ",arr[i]);
  }
  
  
  

  int target;
  printf("\nEnter target element : ");
  scanf("%d",&target);
  
  int result = binary_search(arr,size,target);
  
  if (result != -1 ) {
    
    printf ("%d found at index %d \n",target,result);
  
  } else {
   
     printf("element not found int the array!\n");
  }
  
  
  
return 0;
}
