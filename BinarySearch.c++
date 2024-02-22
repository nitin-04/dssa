#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;

    int mid = (start + end)/2; // to make sure the middle element is an odd number. If array starts with even number then we
// mid = start + (end-start)/2
    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        // If the key is greater than the mid element
        if(key > arr[mid]){
            start = mid + 1;
        }
        // If the key  is smaller than the mid element
        else {
            end = mid - 1;
        }

        mid = (start + end)/2;
// mid = start + (end-start)/2
    }
    return - 1; // If the element is not found in array.
}


int main(){
    int even[6] = {1, 3, 4, 5, 6, 12};
    int odd[5] = {3,8,9,11,12};

    int index = binarySearch(even, 6, 12);
    cout << "Element is present at index : "<<index<<endl;
    
    index = binarySearch(odd, 5, 7);
    cout << "Element is present at index : "<<index<<endl;
    
    return 0;
}