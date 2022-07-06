#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric> //For accumulate operation

using namespace std;

int main() {
  
  	// Initializing vector with array values
  	int arr[] = {10, 20, 5, 23 ,42 , 15};
  	int n = sizeof(arr)/sizeof(arr[0]);
  	vector<int> vect(arr, arr+n);

  	cout << "Vector is: ";
  	for (int i=0; i<n; i++)
    	cout << vect[i] << " ";

	// Starting the summation from 0
  	cout << "\nThe summation of vector elements is: ";
  	cout << accumulate(vect.begin(), vect.end(), 0);

  	return 0;

}
