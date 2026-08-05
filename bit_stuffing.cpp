#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int bit_num[100];
    int stuffed[200];
    int destuffed[200];
    cout << "Enter bits (0/1): ";
    for (int i = 0; i < n; i++)
    {
        cin >> bit_num[i];
    } // ---------------- BIT STUFFING ----------------
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        stuffed[j++] = bit_num[i];

        if (i >= 5)
        {
            if (bit_num[i - 5] == 0 &&
                bit_num[i - 4] == 1 &&
                bit_num[i - 3] == 1 &&
                bit_num[i - 2] == 1 &&
                bit_num[i - 1] == 1 &&
                bit_num[i] == 1)
            {
                stuffed[j++] = 0;
            }
        }
    }
    cout << "\nAfter Bit Stuffing: ";
    for (int i = 0; i < j; i++)
    {
        cout << stuffed[i];
    }

    // ---------------- DE-STUFFING ----------------
    int k = 0;
    for (int i = 0; i < j; i++)
    {

        if (i >= 6 &&
            stuffed[i - 6] == 0 &&
            stuffed[i - 5] == 1 &&
            stuffed[i - 4] == 1 &&
            stuffed[i - 3] == 1 &&
            stuffed[i - 2] == 1 &&
            stuffed[i - 1] == 1 &&
            stuffed[i] == 0)
        {
            continue;
        }

        destuffed[k++] = stuffed[i];
    }

    cout << "\nAfter De-Stuffing: ";
    for (int i = 0; i < k; i++)
    {
        cout << destuffed[i];
    }

    return 0;
}
