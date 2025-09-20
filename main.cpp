#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan suku n: ";
    cin >> n;

    int i = n;
    do {
        int j = n;
        do {
            int hasil;
            if (j % 2 == 0) {
                hasil = j;
            } else {
                hasil = -j;
            }

            cout << hasil;
            if (j > i)
            {
                cout << ",";

            }
            j--;
        } while (j >= i);
        cout << endl;
        i--;
    } while (i >= 1);

    return 0;
}