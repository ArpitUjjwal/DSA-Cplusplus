#include <iostream> 
using namespace std; 

/* C++ Function to print leaders in an array */
void printLeaders(int arr[], int size) 
{ 
	int mxrt = arr[size-1]; 

	/* Rightmost element is always leader */
	cout << mxrt << " "; 
	
	for (int i = size-2; i >= 0; i--) 
	{ 
		if (mxrt < arr[i]) 
		{		 
			mxrt = arr[i]; 
			cout << mxrt << " "; 
		} 
	}	 
} 

/* Driver program to test above function*/
int main() 
{ 
	int arr[] = {16, 17, 4, 3, 5, 2}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	printLeaders(arr, n); 
	return 0; 
}	 
