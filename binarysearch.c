#include<stdio.h>
void binary_search(int num[],int size,int key){
    int start=0;
    int end=size;
    while(start<=end){
    int mid=start+end/2;
    if(num[mid]==key){
        return mid;
    }
    else if(num[mid-1]==key){
        return mid-1;
    }
    else if(num[mid+1]==key){
        return mid+2;
    }
    else if(num[mid]<key){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
return -1;
}
}
int main(){
int num[100]={1,4,6,8,5,10,13,15,14};
int n=100;
int key=5;
binary_search(num[100],n,key);

for(int start=0;start<=n;start++){
    printf("%d ", num[start]);
}
}

