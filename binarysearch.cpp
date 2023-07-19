#include<iostream>
using namespace std;
/*********************** Finding an element in the binary array using recursion *****************************/
bool binarysearch(int *arr,int s,int e,int k){
    //base case
    if(s>e) return false;
    int mid=s+(e-s)/2;
    if(arr[mid]<k) return binarysearch(arr,mid+1,e,k);
    else return binarysearch(arr,s,mid-1,k);
}
int main(){
    int arr[6]={2,4,5,8,9,14};
    int size=7;
    int key=18;

    return 0;
}