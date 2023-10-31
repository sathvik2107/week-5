#include<stdio.h>
int main()
{
	int i,n,max,min,sum=0;
	float avg;
	printf("enter the no of elements of array:\n ");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements of array:  ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		}
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++){
		if(a[i]<min){
			a[i]=min;
		}
		if(a[i]>max){
			a[i]=max;
		}
		sum=sum+a[i];
		
	}
	avg=float(sum)/n;
	printf("%d is maximum\n",max);
	printf("%d is minimum\n",min);
	printf("%d is average",avg);	
}
