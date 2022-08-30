#include <iostream>

using namespace std;

void selection_sort(int* arr, int len);
void insertion_sort(int* arr, int len);
void merge_sort(int* arr, int len);

int main()
{
	int* arr = new int[10];

	for (int i = 0; i < 10; i++)
	{
		arr[i] = 10 - i;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}

	cout << "\n";

	insertion_sort(arr, 10);

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
}


void  insertion_sort(int* arr, int len)
{
	for (int i = 1; i < len ; i++)
	{
		int key = i;
		int val = arr[i];

		while (key > 0 && val < arr[key - 1])
		{
			arr[key] = arr[key - 1];
			key--;
		}

		arr[key] = val;
	}
}

void selection_sort(int* arr, int len)
{
	int smallest = 0;

	for (int i = 0; i < len; i++)
	{
		smallest = i;

		for (int j = i + 1; j < len; j++)
		{
			if (arr[j] < arr[smallest])
			{
				smallest = j;
			}
		}

		int k = arr[i];
		arr[i] = arr[smallest];
		arr[smallest] = k;

	}

}

void merge_sort(int* arr, int len)
{

}