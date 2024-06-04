#include <iostream>
using namespace std;

int sequentialSearch(int arr[], int leng, int target) {
    int count = 0;
    for (int i=0; i<leng; i++){
        if(arr[i] == target){
            count++;
            }
            
        }
return count;
}
int main() {
    int data[] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int leng = sizeof(data) / sizeof(*data);
    int target = 4;
    
    for(int i=0; i<leng; i++) {
        cout << data[i] << " ";
        }
        cout << endl;
        
        int result = sequentialSearch(data, leng, target);
        cout << "Jumlah kemunculan angka " << target << " adalah sebanyak " << result << " kali" << endl;
}