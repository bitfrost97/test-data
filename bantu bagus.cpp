#include <iostream>
using namespace std;

/*
int main(){
    int  n, val, input, answer;
    cout << "Insert jumlah array: "; cin >> n;
    int arr[n];
    cout << "==============================" << endl;
    cout << "Insert all Array sebanyak "<< n << " kali"  <<endl;
    for (int i = 0; i<n; i++) {
        cin >> input;
        arr[i] = input;
    }
    cout << "== Program Mencari Objek di dalam array ==" << endl;
    cout << "Mau mencari index di array berapa? "; cin >> val;
    for (int idx = 0; idx<n; idx++) {
        if ( val == arr[idx]) {
            cout << "The index is " << idx;
            break;
        }
    }
    return 0;
}
*/

/*
int ackerCount(int m, int n) {
    int b = n + 1;
    cout << b << endl;
}
*/

int a(int m, int n) {
    if (m == 0) {
        int b = n + 1;
        cout << b << endl;
    } else if (m != 0 && n == 0) {
        a(m-1, 1);
    } else if (m != 0 && n != 0) {
        a(m-1, a(m, n-1));
    }
}

int main() {
    int m, n;
    for (int i = 1; i<=3; i++) {
        switch (i) {
        case 1 :
            a(0, 5);
            break;
        case 2 :
            a(1,0);
            break;
        case 3 :
            a(5,3);
            break;
        }
    }
    return 0;
}
