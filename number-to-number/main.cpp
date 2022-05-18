#include <iostream>

using namespace std;
int main(){
    int start_number;
    int end_number;
    cout << "Enter a start number: \n";
    cin >> start_number;
    cout << "Enter a end number: \n";
    cin >> end_number;
    cout << "\n--------------------------------\n";
    while (start_number <= end_number){
        cout << ""<<start_number<<"\n";
        start_number++;
    }
}