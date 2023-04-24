#include<stdio.h>
void Bubble(int arr[],int n);
void disp(int []);
int main()
{
int arr[5]= {22,56,99,101,122};
int n; 
Bubble(arr, n);

//printf("Enter n:");
//scanf("%d",&n);
disp(arr);


}
void Bubble(int arr[],int n)
{
int passes, comp, i, j;
int temp;
passes= n-1; 
comp=n-1; 
for(i=0;i<passes; i++)
{
	for(j=0; j<comp-i;j++)
	{
		if(arr[j]>arr[j+1])
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
}
}
void disp(int arr[])
{
int i;
for(i=0;i<5;i++)
{

	printf("The value is %d:", arr[i]);
}
}
