#!/usr/bin/python
# -*- coding: utf-8 -*-
# Python3 Program for recursive binary search.

# Returns index of x in arr if present, else -1


def binarySearch(arr,l,r,x):
    print("function call: arr: ", arr, " , l: ",l," , r: ",r," ,x: ",x)

    # Check base case

    if r >= l:

        mid = l + (r - l) // 2
        print("First check: l: ",l," -- r: ",r," -- mid: ", mid)

        # If element is present at the middle itself

        if arr[mid] == x:
            return mid
        elif arr[mid] > x:
            print("In Left: arr", arr, " arr[mid]: ", arr[mid], "-- l: ",l, " -- mid: ", mid, " -- x: ",x)

        # If element is smaller than mid, then it
        # can only be present in left subarray

            return binarySearch(arr, l, mid - 1, x)
        else:
            print("In Right: arr", arr," arr[mid]: ", arr[mid], "-- l: ",l, " -- mid: ", mid, " -- x: ",x)

        # Else the element can only be present
        # in right subarray

            return binarySearch(arr, mid + 1, r, x)
    else:

        # Element is not present in the array

        return -1


# Driver Code

arr = [9,10,12,13,14, 40]
x = 10

# Function call
print(len)
result = binarySearch(arr, 0, len(arr) - 1, x)

if result != -1:
    print 'Element is present at index % d' % result
else:
    print 'Element is not present in array'