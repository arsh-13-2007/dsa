#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter value that you want to search:";
    cin >> num;
    int arr[] = {3, 4, 5, 6, 7, 0, 1, 2};
    int length = sizeof(arr) / sizeof(arr[0]);
    // cout << "print array\n";
    // for (int i = 0; i < length; i++)
    // {
    //     cout << arr[i] << "\n";
    // }

    int start = 0;
    int end = length - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2 ;
        if (arr[mid] == num)
        {
            cout << "search complete element discovered" << "and index number is:"<<mid;
            return 0 ;
        }

        if (arr[start] <= arr[mid])
        {
            if (arr[start] <= num && arr[mid] > num)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (arr[mid] < num && arr[end] >= num)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
}
