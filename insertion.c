#include <stdio.h>
void insertionsort(int arr[],int size){
    int n=size;
    int j,key;
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
    }
    while(j>0 && arr[j]>key){
        arr[j+1]=arr[j];
        j--;
    }
     arr[j+1]=key;
}
int binarysearch(int arr[],int key,int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=(start+end)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]<key){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
}
}
int main(){
    int arr[6]={2,5,1,3,10,15};
    int size=6;
    int key=10;
    
    binarySearch(arr,10,6);

    printf("Sorted array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}


