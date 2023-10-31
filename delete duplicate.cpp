#include<stdio.h>
int main()
{
	int i,j,n,k;
	printf("enter the no of elements of array:\n ");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements of array:  ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
				for(k=j;k<n-1;k++){
					a[k]=a[k+1];
				}
				n--;
			} else{
				j++;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
