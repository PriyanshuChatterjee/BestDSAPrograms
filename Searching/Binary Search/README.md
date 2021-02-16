# Binary Search algorithm

It is an algorithm which is used to search a key or value from a given set of values. 

## Input and Output

**Input** :- 1) An array of values.
         2) The item to be searched.

**Output**:- If the element is present in the array, the output should be **The element is found in the respective position**. Otherwise, the output shoulld be **The element is absent**

## Approach of the Algorithm

It is an algorithm, in which the given element is searched by repeatedly dividing the array into half. If the given element is less than the item in the middle of the interval, the whole right side of the array is discarded, and vice versa in case the key is greater than the middle element. By repeating this process, the key element is searched (if present).

## Key points to remember:-

1. The given array must be in sorted order. If it is not sorted, make the array sorted.
2. The space complexity of this algorithm is O(1).
3. The average time complexity of this algorithm is O(log2(n)), where n is the size of the array.
4. The best case time complexity of this algorithm is O(1).
5. The given code approach is iterative approach of the Binary Search Algorithm.