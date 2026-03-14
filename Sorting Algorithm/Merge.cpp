#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int start, int mid, int end) {
    vector<int> temp;
    int i=start,j=mid+1;
    
    while(i<=mid && j<=end) {
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    
    //Left array remaining elements
    while(i<=mid) {
        temp.push_back(arr[i]);
        i++;
    }
    
    //Right array remaining elements
    while(j<=end) {
        temp.push_back(arr[j]);
        j++;
    }
    
    for(int idx=0;idx<temp.size();idx++){
        arr[idx+start]=temp[idx];
    }
}

void mergeSort(vector<int> &arr, int start, int end) {
    if(start<end){
        int mid=start+(end-start)/2;
        mergeSort(arr,start,mid); //Left Array
        mergeSort(arr,mid+1,end); //Right Array
        merge(arr,start,mid,end);
    }
}

int main() {
    vector<int> arr={12,4,5,2,1,6};
    mergeSort(arr,0,arr.size()-1);
    
    for(int value: arr){
        cout<<value<<" ";
    }
}