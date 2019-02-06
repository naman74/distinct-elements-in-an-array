#include<stdio.h>
int main()
{
	int n,i,j,k;
	int a[20];
	puts("Enter the value of n");
	scanf("%d",&n);
	printf("Enter the Element");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		  if(a[i]==a[j])
		  {
			for(k=j+1;k<n;k++)
			{
				a[k-1]=a[k];
			}
				j--;
				n--;
			
		  }
	    } 
	}
		
	
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
