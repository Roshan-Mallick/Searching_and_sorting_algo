#include<stdio.h>


int partition ( int arr[] , int low , int high ) {

int pivot = arr[low] ;
int i = low + 1;
int j = high ;

while ( i < j ) {
 
   while ( i <= high && arr[i] <= pivot) i++;
   while (arr[j] > pivot) j--;
   
   if (i >= j) break;
   
   int temp = arr[i];
   arr[i] = arr[j];
   arr[j] = temp ;


}

int temp = arr[low];
arr[low] = arr[j];
arr[j] = temp ;


return j;


} 


void quick_sort(int arr[] , int low , int high ) {
  
  if  ( low >= high ) return ; // // Quick Sort: use (low >= high) because partitioning can produce invalid ranges (low > high).
  
  int pos = partition ( arr , low , high);
  
  quick_sort(arr,low,pos-1);
  quick_sort(arr,pos+1,high);
  
}

int main () {

int size ;
printf("Enter size of the array : ");
scanf("%d",&size);

int arr[size];
printf("Enter array elements : ");

int low = 0 ;
int high = size - 1;

for (int i = low ; i < size ; i++){
  scanf("%d",&arr[i]);
}


quick_sort(arr,low,high);

printf("sorted array : ");
for (int i = low  ; i < size ; i++ ){
 printf("%d ",arr[i] );
}


 return 0;
}
