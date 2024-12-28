#include <stdio.h>
int BinarySearch(int arr[], int low, int high, int key){
    if (high >= low){
        int mid = (low+high)/2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] > key)
            return BinarySearch(arr, low, mid-1, key);
            return BinarySearch(arr, mid+1, high, key);
   }
   return -1;
}
int main(){
    int arr[20],i,key,n;
	printf("How many elements?");
	scanf("%d",&n);
	printf("Enter array elements: ");
	for(i=0;i<n;++i)
		scanf("%d",&arr[i]);
	printf("\nEnter element to search:");
	scanf("%d",&key);
    int found_index = BinarySearch(arr, 0, n-1,key);
    if(found_index == -1 ) {
        printf("Element not found in the array ");
    }
    else{
        printf("Element found at index : %d",found_index);
    }
   return 0;
}