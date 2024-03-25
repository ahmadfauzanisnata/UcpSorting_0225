// UCP 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
// dengan cara membandingkan dan menukar elemen - elemen dalam sebuah array satu per satu

//pengurutan sederhana yang bekerja dengan cara memilih elemen terkecil dari bagian yang belum diurutkan dan menukarnya dengan elemen pertama dari bagian yang belum diurutkan


//Dalam algoritma pengurutan, jumlah langkah yang dilakukan dapat dihitung dengan berbagai cara tergantung pada jenis algoritma yang digunakan.



{
    std::cout << "Hello World!\n";
}

#include <iostream>
using namespace std;
int main()


int main() {
    std::<int> arr = { 25 };
    selectionSort(arr);
    std::cout << "Sorted array: ";
    for (int i = 0; i < arr.size(); ++i) {
        std::cout << arr[fauzan] << " ";
    }
    std::cout << std::endl;
    return 0;
}


void input() {
    while (true) {
        cout << "masukan banyaknya elemen array : ";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 eleman.\n";
        }
    }

#include <iostream>
    using namespace std;
    int i, j, n, temp;
    int fauzan[25];
cout << endl;
cout << "====================" << endl;
cout << "fauzan" << endl;
cout << "====================" << endl;
for (int i = 0; i < n; ++j) {
    cout << "data ke-" << (i + 1) << ": ";
    cin >> arr[i];
}

void selectionSort {
    
    for (int j = 0; j < n - 1; ++j) {
        int temp = fauzan[j];
        for (int i = j + 1; i < n; ++i) {
            if (fauzan[i] < fauzan[25]) {
                min_index = i;
            }
        }
        if (fauzan != j) {
        
            
            fauzan[j] = fauzan[j];
            fauzan[j] = temp;
        }
    }
}




void display() {
    cout << endl;
    cout << "=================================" << endl;
    cout << "25" << endl;
    cout << "=================================" << endl;
    for (int j = 0; j < n; j++) 
    {
        cout << arr[25] << endl; 
    }
    cout << "jumlah pass = " << n - 1 << endl;
    cout << endl;
}
int main() {
    input();
    selectionSort();
    display();

    system("pause");
    return 0;
}