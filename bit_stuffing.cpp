#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> nums = {1, 2, 2, 3, 4, 4, 4, 5, 5, 5, 6};
    vector<int> count;

    int freq = 1;

    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            freq++;
        }
        else
        {
            count.push_back(freq);
            freq = 1;
        }
    }

    count.push_back(freq);
    for( int i = 0 ; i < count.size() ; i++){
        cout<<count[i]<<" " ; 
    }


    for( int i = 0 ; i < nums.size() ; i++){
        for( int j = i ; j 
        )
    }
}