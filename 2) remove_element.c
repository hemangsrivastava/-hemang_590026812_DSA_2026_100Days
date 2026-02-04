#include<stdio.h>
int main(){
int n,i,b;
int arr[100];
printf("enter the length of array: ");
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("enter the index to delete: ");
scanf("%d",&b);
for(i=b-1;i<n-1;i++){
arr[i]=arr[i+1];
}
n=n-1;
printf("the new array is: ");
for(i=0;i<n;i++){
printf("%d ",arr[i]);
}
return 0;
}

