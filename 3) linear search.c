#include <stdio.h>
int main(){
	int a,n,i,c=1,temp;
	int arr[100];
	printf("enter the length of array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter the element need to be searched: ");
	scanf("%d",&temp);
	for(i=0;i<n;i++){
		if(arr[i]==temp){
		printf("search found at index %d:\n",i);
		break;
	}
		else c++;
		
	}
	printf("comparisions: %d", c);
}
