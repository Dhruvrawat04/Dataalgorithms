//quick sort and counting the comparision and swaps 
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
static int comp=0,swapp=0;

void display(const vector<int>& vec) {
    for (int i : vec) {
        cout << i << " ";
    }
    cout<<endl;
}

int partition(vector<int>& vec, int low,int high) {
    int pvt=low,i=low+1,j=high;
    while(i<=j){comp++;
        while(vec[i]<vec[pvt]){i++;}
        while(vec[j]>=vec[pvt]){j--;}
        if(i<j){comp++;
        swap(vec[j],vec[i]);
        swapp++;}
    }
    swap(vec[j],vec[pvt]);
     swapp++;
    return j; 


}

void qsort(vector<int>& vec, int low, int high) {
    if (low > high) return ;
        int pvt=partition(vec,low,high);

        // Recursively sort the left and right halves
        qsort(vec, low,pvt-1);
        qsort(vec, pvt+1, high);

}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> vec(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    // Call merge sort with correct indices
    qsort(vec, 0, n - 1);

    // Display sorted array
    display(vec);
    cout<<comp<<endl;
    cout<<swapp<<endl;
    return 0;
}
