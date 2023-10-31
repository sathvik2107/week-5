#include<stdio.h>
int main()
{
	int i,n,m,sum=0,total,k;
	printf("enter the no of elements of array:\n ");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements of array:  ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		}
	m=n+1;
	total=m*(m+1)/2;	
	for(i=0;i<n;i++){
		sum=sum+a[i];
	}
	k=total-sum;
	printf("missing number is %d",k);
}
