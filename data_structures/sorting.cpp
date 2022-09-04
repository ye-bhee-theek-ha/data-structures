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

void merge(int* arr, int* arr_left, int size_left, int* arr_right, int size_right)
{
	int arr_counter = 0;
	int left_counter = 0;
	int right_counter = 0;

	while (left_counter < size_left && right_counter < size_right)
	{
		if (arr_left[left_counter] <= arr_right[right_counter])
		{
			arr[arr_counter] = arr_left[left_counter];
			left_counter++;
		}
		else
		{
			arr[arr_counter] = arr_right[right_counter];
			right_counter++;
		}
		arr_counter++;
	}

	while (left_counter < size_left)
	{
		arr[arr_counter] = arr_left[left_counter];
		left_counter++;
		arr_counter++;
	}

	while (right_counter < size_right)
	{
		arr[arr_counter] = arr_right[right_counter];
		right_counter++;
		arr_counter++;
	}
}


void  merge_sort(int* arr, int len)
{
	if (len == 1)
	{
		return;
	}

	int mid = len / 2;
	int len_left = mid;
	int len_right = len - mid;

	int* left = new int[len_left];
	int* right = new int[len_right];

	for (int i = 0; i < mid; i++)
	{
		left[i] = arr[i];
	}
	for (int i = mid, j = 0; i < len; i++,j++)
	{
		right[j] = arr[i];
	}

	merge_sort(left, len_left);
	merge_sort(right, len_right);


	merge(arr, left, len_left, right, len_right);


}
