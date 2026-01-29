#include <iostream>
using namespace std;

int main() {
    int n, t;

    cout<<"enter no of array elements: ";
    cin>> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cout<< "enter the array elements :";
        cin >> arr[i];
        
    }
    cout<<"original array before swapping ";
    for(int i=0; i<n; i++){
        cout<< arr[i];
    }
    cout<< endl;
    int mid=(arr[0]+arr[n-1])/2;
    
    for(int i=0,j=n-1; i<j; i++,j--){
        t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
        
    }
    cout<<" ";
    cout<<"array after swapping: ";
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
    
    return 0;
}