#include<stdio.h>


int linear_search(int arr[],int size,int target){
 
 for (int i = 0 ;  i < size ; i++){
   if (arr[i]==target){
      return i;   
   }
 }
 
 return -1 ;


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
  

  int target;
  printf("Enter target element : ");
  scanf("%d",&target);
  
  int result = linear_search(arr,size,target);
  
  if (result != -1 ) {
    
    printf ("%d found at index %d \n",target,result);
  
  } else {
   
     printf("element not found int the array!\n");
  } 

   



  return 0;
}
