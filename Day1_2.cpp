class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    
	   // if (n==0||n==1)
	   // return -1;
	   // sort(arr, arr + n, greater<long long>());
	   // return (arr[1]);
	   
	int largest = INT_MIN; // Initialize largest to the minimum possible value
    int secondLargest = INT_MIN; // Initialize secondLargest to the minimum possible value
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest; // Update secondLargest with the previous largest value
            largest = arr[i]; // Update largest with the current element
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i]; // Update secondLargest with the current element if it's not equal to the largest
        }
    }
    
    return (secondLargest == INT_MIN) ? -1 : secondLargest;
	}
};
