#include<stdio.h>
int main()
{
	int i,n,j;
	printf("enter the no of elements of array:\n ");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements of array:  ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		}
	printf("duplicates elements are: ");
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
				printf("%d ",a[i]);
			}
		}
	}
}
