/* takes an element and places it in its correct order */
#include <algorithm>
#include <bits/stdc++.h>

void insertionSort(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        int j = i;
        while(j > 0 and arr[j-1] > arr[j]) 
        {
            std::swap(arr[j-1], arr[j]); // Use std::swap
            j--;
        }
    }
}
