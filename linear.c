#include<stdio.h>
int main(){
    int n;
    int arr[n];
    int x;
    int flag= 1;
    printf("enter the nomber of elemnts in given array");
    scanf("%d",&n);
    printf("enter the elements of array ");
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[n]);
    }
    printf("enter the number that are you wants to search");
    scanf("%d",&x);
    for(int i=0;i<=n-1;i++){
        if (x==arr[i]){
        printf("%d %d is found in the index",x,i);
        flag=0;}
        else{
        printf("%d %d is not found in this array",x,i);
    }
    }
}