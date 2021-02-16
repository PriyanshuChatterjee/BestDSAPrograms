// Linear Search Iterative Approach

// This code is contributed by Anurag Mukherjee

#include<iostream>

using namespace std;

// Function defining the binary search algorithm

int search(int arr[], int l, int r, int x){
    if (l > r)
    {
        return -1;
    }

    // Checking the left value is equal to given key or not
    
    if (arr[l] == x)
    {
        return l;
    }

    // Checking the right value is equal to given key or not

    if (arr[r] == x)
    {
        return r;
    }

    // calling the function Recursively

    else{
        return search(arr, l + 1, r - 1, x);
    }   
}

// Testing code

int main(){

    int arr[20], l, r, x, result;

    l = 0;

    cout << "Enter the number of elements in the array " << endl;
    
    cin >> r;

    // Taking the inputs of the array

    cout << "Enter the elements of the array " << endl;

    for (int i = 0; i < r; i++)
    {
        cin >> arr[i];
    }

    // Taking input of the key

    cout << "Enter the element which you want to find " << endl;
    cin >> x;

    // calling the binary search function and storing the value in a variable

    result = search(arr, l, r, x);

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