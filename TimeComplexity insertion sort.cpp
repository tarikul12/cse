#include<bits/stdc++.h>
#include <chrono>
using namespace std::chrono;
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}


int main(){
    int arr[] = { 13,2,4,56,67 };
    int N = sizeof(arr) / sizeof(arr[0]);
    cout << "Sorted array: \n";
    insertionSort(arr, N);
    printArray(arr, N);


auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    /*  ..........Change your algorithm...............*/
   // int*m=bubbleSort(arr, N);
    /* .......................................  */


    /*.....................Time taken by 1st Algorithm........................*/
    auto end1 = chrono::high_resolution_clock::now();
    double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count();
        time_taken1 *= 1e-9;
    cout << "Time taken by program is : " << fixed
         << time_taken1 << setprecision(9);
    cout << " sec" << endl;


return 0;
}
