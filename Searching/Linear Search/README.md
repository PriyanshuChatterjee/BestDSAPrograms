# Binary Search algorithm

It is an algorithm which is used to search a key or value from a given set of values. 

## Input and Output

**Input** :- 1) An array of values.
         2) The item to be searched.

**Output**:- If the element is present in the array, the output should be **The element is found in the respective position**. Otherwise, the output shoulld be **The element is absent**

## Approach of the Algorithm

The first value and the last value of the given set of items id stored in two variables. If the two values is not matched with the given key, then the variables storing the first and the last values will store the second and n-1 value of the array respectively. By this way all the elements are checked.

## Key points to remember:-

1. The given array need not to be in sorted order.
2. The space complexity of this algorithm is O(1).
3. The average time complexity of this algorithm is O(n/2), where n is the size of the array.
4. The best case time complexity of this algorithm is O(1).
5. If the given key is the very first element and the very last element of the given array, the time complexity will be O(1). 
6. The given code approach is recursive approach of the Binary Search Algorithm.