#include<iostream>

using namespace std;

void bubbleSort(int arr[], int size) {
	for(int i=1; i<size; i++)
	    for(int j=0; j<size-i; j++){
	    	if(arr[j]> arr[j+1]){
	    		swap(arr[j],arr[j+1]);
			}
		}
}

int main() {
    int size;

    cout << "Enter the size of array to be sorted: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
    
