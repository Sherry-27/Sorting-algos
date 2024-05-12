#include<iostream>

using namespace std;


void heapify(int arr[], int n, int i){
	if(i>0 && i<n){
		int p = (i-1)/2;
		if(arr[p]<arr[i]){
			swap(arr[i],arr[p]);
			heapify(arr,n,p);
		}
	}
}

void swap_elements(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void printarray(int arr[], int size)
{
	for (int i=0; i<size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "" << endl;
}

void del(int arr[], int size)
{
    swap_elements(arr, size-1, 0);
    cout<<arr[0]<<","<<arr[size-1]<<endl;
    heapify(arr, size, 0);
}

void max_heap_sort(int arr[], int n ){
	for(int i = 0; i<n; i++){
		heapify(arr, n, i);
	}
	
}

int main(){
	int arr[]={78,99,23,63,97,55,230,117,70};
	int n = sizeof(arr)/sizeof(arr[0]);
	max_heap_sort(arr, n);
	cout<<"Max heap array: "<<endl;
	for(int i = 0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<< endl;
	return 0;
}
