#include<stdio.h>
void main()
{
	int arr[50],n,i,a;
	printf("\nEnter the Number of Elements to input in the Array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n %d Element : ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\nEnter the Element to Search for in the Array : ");
	scanf("%d",&a);
    for(i=0;i<n;i++)
    {
    	if(arr[i]==a)
    	break;
    }
    if(i==n)
    {
    	printf("\nSearch was Unsuccessfull");
    }
    else
    {
    	printf("Seach was Successfull\n%d was found at Index %d",a,i);
    }

}
