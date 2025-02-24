//Merge sorting and counting the comparing 
#include <iostream>
#include <vector>
using namespace std;
static int comp=0;
void display(const vector<int>& vec) {
    for (int i : vec) {
        cout << i << " ";
    }
    cout<<endl;
}

void merge(vector<int>& vec, int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;
    vector<int> vec1(n1), vec2(n2);

    // Copy data to temporary vectors
    for (int i = 0; i < n1; i++) {
        vec1[i] = vec[low + i];
    }
    for (int i = 0; i < n2; i++) {
        vec2[i] = vec[mid + 1 + i];
    }

    int i = 0, j = 0, k = low;
    // Merge the temp arrays back into the original array
    while (i < n1 && j < n2) {
        if (vec1[i] >= vec2[j]) {
            vec[k] = vec2[j];
            j++;
        } else {
            vec[k] = vec1[i];
            i++;
        }
        k++;
        comp++;
    }

    // Copy the remaining elements of vec1, if any
    while (i < n1) {
        vec[k] = vec1[i];
        i++;
        k++;
    }

    // Copy the remaining elements of vec2, if any
    while (j < n2) {
        vec[k] = vec2[j];
        j++;
        k++;
    }
}

void msort(vector<int>& vec, int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;

        // Recursively sort the left and right halves
        msort(vec, low, mid);
        msort(vec, mid + 1, high);

        // Merge the sorted halves
        merge(vec, low, mid, high);
    }
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
    msort(vec, 0, n - 1);

    // Display sorted array
    display(vec);
    cout<<comp;
    return 0;
}
