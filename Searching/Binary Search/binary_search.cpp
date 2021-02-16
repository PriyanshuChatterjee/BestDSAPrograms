// Binary Search Iterative Approach

// This code is contributed by Anurag Mukherjee

#include<iostream>

using namespace std;

// function defining the binary search algorithm

int binSearch(int arr[], int l, int r, int x){

    while (l <= r)      
    {
        // Finding the mifterns

        int mid;
        mid = (l+r)/2;

        // checking whether the value is same as the given key value

        if (x == arr[mid])
        {
            return mid;
        }
        // if the value is greater than the midterm:-

        else if(x > arr[mid])
        {
            l = mid + 1;
        }

        // if the value is lesser than the midterm:-

        else
        {
            r = mid - 1;
        }
    }

    // if the element is not found return false

    return -1;
}

// Testing code

int main(){

    int arr[20], l, r, x, result;

    l = 0;

    cout << "Enter the number of elements in the array " << endl;
    
    cin >> r;

    cout << "Enter the elements of the array " << endl;

    // Taking the inputs of the array

    for (int i = 0; i < r; i++)
    {
        cin >> arr[i];
    }

    // Taking the key input

    cout << "Enter the element which you want to find " << endl;
    cin >> x;

    // calling the binary search function and storing the value in a variable

    result = binSearch(arr, l, r, x);

    if (result == -1)
    {
        cout << "The element is not found" << endl;
    }

    else
    {
        cout << "The element is found in position " << result + 1 << endl;
    }
    
    return 0;
    
}