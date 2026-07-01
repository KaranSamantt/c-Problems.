#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool ispossible(vector<int> &arr, int n,int  c, int minalloweddistance){
    int cows =1 , laststallposition = arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]-laststallposition >= minalloweddistance){
            cows++;
            laststallposition = arr[i];
        }

        if(cows==c){
            return true;
        }
    }

    return false;
}

int minimumDistance(vector<int> &arr, int n , int c){
    sort(arr.begin(), arr.end());
    int st = 1;
    int end = arr[n-1] - arr[0], ans = -1;

    while(st<=end){
        int mid = st + (end-st)/2;

        if(ispossible(arr, n, c, mid)){
            ans = mid;
            st = mid+1;
        }
        else{
            end = mid - 1;
        }
    }

    return ans;
}

int main(){
    vector<int> arr = {1,2,8,4,9};
    int n = 5, c = 3;

    cout<<minimumDistance(arr, n, c)<<endl;

    return 0;
}