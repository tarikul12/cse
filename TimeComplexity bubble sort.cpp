#include<bits/stdc++.h>
#include <chrono>
using namespace std::chrono;
using namespace std;

int * bubbleSort(int arr[], int n){

 int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);

}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}



int main(){

     int arr[] = { 5, 1, 4, 2, 8,3,11};
     int N = sizeof(arr) / sizeof(arr[0]);
     bubbleSort(arr, N);
     cout << "Sorted array: \n";
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
