#include<stdio.h>
int main()
{
	int i,j,n,k,t;
	printf("enter the no of elements of array:\n ");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements of array:\n ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i=i+2){
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;	
		}
	
	printf("new array is:  ");
	for(i=0;i<n;i++){
	printf("%d ",a[i]);
	}
}
