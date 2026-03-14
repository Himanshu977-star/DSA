#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr, int start, int end) {
    int idx=start-1, pivot=arr[end];
    for(int j=start; j<end; j++) {
        if(arr[j]<=pivot){
            idx++;
            swap(arr[j], arr[idx]);
        }
    }
    idx++;
    swap(arr[end],arr[idx]);
    return idx;
}

void QuickSort(vector<int> &arr, int start, int end) {
    if(start<end){
        int pivIdx=partition(arr,start,end);
        QuickSort(arr,start,pivIdx-1);
        QuickSort(arr,pivIdx+1,end);
    }
}

int main() {
    vector<int> arr={5,2,6,1,4,3};
    QuickSort(arr,0,arr.size()-1);
    for(int value: arr){
        cout<<value<<" ";
    }
}