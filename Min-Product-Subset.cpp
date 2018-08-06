
// Minimum product subset of an array

// Given an array a, we have to find minimum product possible with the subset of elements present in the array. The minimum product can be single element also.

// Examples:

// Input : a[] = { -1, -1, -2, 4, 3 }
// Output : -24
// Explanation : Minimum product will be ( -2 * -1 * -1 * 4 * 3 ) = -24

// Input : a[] = { -1, 0 }
// Output : -1
// Explanation : -1(single element) is minimum product possible
 
// Input : a[] = { 0, 0, 0 }
// Output : 0

// A simple solution is to generate all subsets, find product of every subset and return maximum product.

// A better solution is to use the below facts.

//     If there are even number of negative numbers and no zeros, the result is the product of all except the largest valued negative number.
//     If there are an odd number of negative numbers and no zeros, the result is simply the product of all.
//     If there are zeros and positive, no negative, the result is 0. The exceptional case is when there is no negative number and all other elements positive then our result should be the first minimum positive number.

// CPP program to find maximum product of
// a subset.
#include <bits/stdc++.h>
using namespace std;
 
int minProductSubset(int a[], int n)
{
    if (n == 1)
        return a[0];
 
    int max_neg = INT_MIN;
    int min_pos = INT_MAX;
    int count_neg = 0, count_zero = 0;
    int prod = 1;
    for (int i = 0; i < n; i++) {
 
        if (a[i] == 0) {
            count_zero++;
            continue;
        }
 
        if (a[i] < 0) {
            count_neg++;
            max_neg = max(max_neg, a[i]);
        }
        if (a[i] > 0) 
            min_pos = min(min_pos, a[i]);        
 
        prod = prod * a[i];
    }
 
    if (count_zero == n || 
       (count_neg == 0 && count_zero > 0))
        return 0;
 
 
    if (count_neg == 0)
        return min_pos;
 
    if (!(count_neg & 1) && count_neg != 0) {
 
        prod = prod / max_neg;
    }
 
    return prod;
}
 
int main()
{
    int a[] = { -1, -1, -2, 4, 3 };
    int n = sizeof(a) / sizeof(a[0]);
    cout << minProductSubset(a, n);
    return 0;
}
// Output:

// -24

