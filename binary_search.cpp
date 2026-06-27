#include <iostream>
#include <vector>

using namespace std;

//O(log n) TIME COMPLEXITY

// int binarySearch(vector<int> arr1, int tar){//Iterative method
//     int st = 0;
//     int end = arr1.size()-1;

//     while(st<=end){
//         // int mid = (st+end)/2; //THIS isnt relevant for larget integer value because of overflow so we use an optimisation;
//         int mid = st + ((end - st)/2); //this formula is same as above mathematically;

//         if(tar>arr1[mid]){
//             st = mid +1; //2nd half
//         }
//         else if(tar<arr1[mid]){
//             end = mid -1; //first half
//         }
//         else{
//             return mid;
//         }
//     }

//     return -1;

// }

int bs(vector<int> arr1, int tar, int st, int end)
{//RECURSIVE METHOD

    if (st <= end)
    {
        int mid = st + ((end - st) / 2);

        if (tar > arr1[mid])
        {
            return bs(arr1, tar, mid + 1, end); //2ND HALF
        }
        else if (tar < arr1[mid])
        {
            return bs(arr1, tar, st, mid - 1); //1ST HALF
        }
        else
        {
            return mid;
        }
    }

    return -1;
}

int main()
{
    vector<int> arr = {-1, 0, 3, 4, 5, 9, 12};
    int target = 12;

    cout << bs(arr, target, 0, arr.size()-1);
    return 0;
}