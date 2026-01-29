#include <iostream>
using namespace std;

int main() {
    int n, key;
    cout<<"Enter the number of elements: ";
    cin>> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    cout<< "Enter key element that you wanted to search: ";
    cin>> key;  
    bool found= false;
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            cout<<" match found at " <<i << endl;
            
            break;
            
        }
        if(i== arr[n]){
            cout<< "element not found";
        }else{
            cout<<"element found";
        }
        
    }

    return 0;
}