#include <bits/stdc++.h>
using namespace std;

void merge(int *Arr, int start, int mid, int end) {
    
	int temp[end - start + 1];

	int i = start, j = mid+1, k = start;

	while(i <= mid && j <= end) {
		if(Arr[i] <= Arr[j]) {
			temp[k] = Arr[i];
			k += 1; i += 1;
		}
		else {
			temp[k] = Arr[j];
			k += 1; j += 1;
		}
	}
 
	while(i <= mid) {
		temp[k] = Arr[i];
		k += 1; i += 1;
	}

	while(j <= end) {
		temp[k] = Arr[j];
		k += 1; j += 1;
	}

	for(k = start; k <= end; k += 1) {
		Arr[k] = temp[k];
	}
}

void mergeSort(int *Arr, int start, int end) {

	if(start < end) {
		int mid = (start + end) / 2;
		mergeSort(Arr, start, mid);
		mergeSort(Arr, mid+1, end);
		merge(Arr, start, mid, end);
	}
}

int main() {
	int n; cin >> n;
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
	    cin >> arr[i];
	}
	mergeSort(arr,0,n-1);
	
// 	printArr(arr, n);

    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
	
	return 0;
}
