#include<stdio.h>
void SelectionSort(int a[],int array_size)
{
	int i,j,smallest, temp;
	for(i=0;i<array_size-1;i++)
	{
		smallest = i;
		for(j=i+1;j<array_size;j++)
		{
			if(a[smallest]>a[j])
			smallest = j;
		}
		if(i!= smallest)
		{
			temp = a[i];
			a[i] = a[smallest];
			a[smallest] = temp;
		}
	}
}

int main()
{
	int i;
	int arr[7] = {35,67,32,23,5,9,7};
	
	SelectionSort(arr,7);
	for(i=0;i<7;i++)
	{
		printf("\n%d",arr[i]);
	}
}
	
