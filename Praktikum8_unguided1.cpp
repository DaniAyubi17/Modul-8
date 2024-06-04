#include <iostream> 
using namespace std; 
void selectionSort(string &arr, int n) 
{ 
    int i, j, min; 
    for (i = 0; i < n - 1; i++) 
    { 
        min = i; 
        for (j = i + 1; j < n; j++) 
        { 
            if (arr[j] < arr[min]) 
            { 
                min = j; 
            } 
        } 
        char temp = arr[i]; 
        arr[i] = arr[min]; 
        arr[min] = temp; 
    } 
} 
int binarySearch(string arr, int left, int right, char target) 
{ 
    while (left <= right) 
    { 
        int mid = left + (right - left) / 2; 
        if (arr[mid] == target) 
            return mid; 
        if (arr[mid] < target) 
            left = mid + 1; 
        else 
            right = mid - 1; 
    } 
    return -1; 
} 
int main() 
{ 
    string kalimat; 
    char input; 
    cout << "Masukkan kalimat: "; 
    getline(cin, kalimat); 
    cout << "Masukkan huruf yang dicari: "; 
    cin >> input; 
    selectionSort(kalimat, kalimat.size()); 
    int result = binarySearch(kalimat, 0, kalimat.size() - 1, input); 
    if (result == -1) 
    { 
        cout << "Huruf tidak ditemukan" << endl; 
    } 
    else 
    { 
        cout << "Data setelah kalimat diurutkan: " << kalimat << endl; 
        cout << "Huruf ditemukan pada indeks: " << result 
             << endl; 
    } 
    return 0; 
} 