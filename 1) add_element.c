#include <stdio.h>
int main(){
	int a,n,i,b,temp=0;
	int arr[100];
	printf("enter the length of array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("enter the element: ");
	scanf("%d",&a);
	prinf("enter the index: ");
	scanf("%d",&b);
	for(i=b;i<n;i++){
		temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
	}
	arr[b]=a;
	printf("the new array is: ");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	return 0;
}
	
