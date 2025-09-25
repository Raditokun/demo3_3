#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "masukkan Nilai N: ";
    cin >> n;
    int i=n;
    do
    {
        int j=i;
        int hasil;
        do
        {
            if (i%2==0)
            {
                hasil=j*-1;

            }else
            {
                hasil=j*1;
            }
            j--;
            cout << hasil << ",";
        }while(j>=1);
        i--;
        cout << endl;
    }while(i>=1);

    return 0;
}