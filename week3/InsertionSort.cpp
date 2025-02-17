// Insertion sort
#include <iostream>
using namespace std;
void inssort(int arr[],int n){
    int compare=0;
    for(int i=1;i<n;i++){
        int key =arr[i];
        int j=i-1;
        while(j>=0&& arr[j]>key){
           compare++;
           arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
     for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl<<"comparison"<<compare;
}
int main() {
    cout << "Enter size of array"<<endl;
    int n;
    cin>>n;
    cout<<"enter array elements"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    inssort(arr,n);
    return 0;
}
