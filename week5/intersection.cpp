//intersection of array
#include <iostream>
using namespace std;
#include <vector>
int main() {int n1,n2;
    cout<<"enter the size of first arr"<<endl;
    cin>>n1;
    int arr1[n1];
    cout<<"enter the size of second arr"<<endl;
    cin>>n2;
    int arr2[n2];
    cout<<"enter the element of first arr"<<endl;
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cout<<"enter the element of second arr"<<endl;
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    vector<int>vec;
    
    int i=0,j=0;
    while(i<n1&&j<n2){
        if(arr1[i]==arr2[j]){
            vec.push_back(arr1[j]);
            i++,j++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else i++;
    }
    for(int ind:vec){
        cout<<ind<<"  ";
    }
    return 0;
}
