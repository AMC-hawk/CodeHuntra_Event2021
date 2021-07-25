
#include <bits/stdc++.h>
using namespace std;

int first(int arr[], int low, int high, int x, int n)
{

	
	if (high >= low) {

		
		int mid = low + (high - low) / 2;
		if ((mid == 0 || x > arr[mid - 1]) && arr[mid] == x)
			return mid;

		
		if (x > arr[mid])
			return first(arr, (mid + 1), high, x, n);

		
		return first(arr, low, (mid - 1), x, n);
	}

	
	return -1;
}


void sortAccording(int A1[], int A2[], int m, int n)
{
	
	int temp[m], visited[m];
	for (int i = 0; i < m; i++) {
		temp[i] = A1[i];
		visited[i] = 0;
	}

	
	sort(temp, temp + m);

	int ind = 0;
	for (int i = 0; i < n; i++) {
		
		int f = first(temp, 0, m - 1, A2[i], m);

	
		if (f == -1)
			continue;

		
		for (int j = f; (j < m && temp[j] == A2[i]); j++) {
			A1[ind++] = temp[j];
			visited[j] = 1;
		}
	}

	for (int i = 0; i < m; i++)
		if (visited[i] == 0)
			A1[ind++] = temp[i];
}


void printArray(int arr[], int n)
{


	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}


int main()
{
	int A1[] = { 16, 18, 18, 15, 11, 11, 11, 23, 11, 19, 23, 27, 3, 3, 5, 5, 5, 5, 5, 8, 23, 8, 8, 8, 8, 17, 1, 20, 20, 23, 20, 20, 20, 23, 20, 20, 20, 20, 20 };
	int A2[] = { 19, 16, 1, 18, 15, 23, 27 };
	int m = sizeof(A1) / sizeof(A1[0]);
	int n = sizeof(A2) / sizeof(A2[0]);


	cout << "Sorted array is \n";
	sortAccording(A1, A2, m, n);
	printArray(A1, m);
	return 0;
}

