#include <iostream>
#include <vector>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    // Write your code here.
    // Simple approach we will just mark the intersected element
    // and then continue with the loop and break the inner one.
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        int element = arr1[i];
        for (int j = 0; j < m; j++)
        {
            if (element == arr2[j])
            {
                ans.push_back(element);
                arr2[j] = -122323;
                break;
            }
        }
    }

    return ans;
}

int main()
{
    return 0;
}