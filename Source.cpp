#include<iostream>
using namespace std;
void SelectionSort(int arr[],int n)
{
	int minIdx;                  // 0  1  2  3  4  5
	for (int i = 0; i < n-1; i++)//60 40 50 30 10 20
	{
		minIdx = i;
		for (int j=i+1 ; j < n; j++)
		
			if (arr[j] < arr[minIdx])
				minIdx = j;
			swap(arr[minIdx], arr[i]);

		
	}
}
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}
int main()
{
	
	
	int arr[6]= { 60 ,40, 50, 30, 10, 20 };
	int n = sizeof(arr) / sizeof(arr[0]);
	 SelectionSort(arr, n);
	 cout << "array: " << endl;
	 printArray(arr, n);
}