#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void move(vector<int> &arr)
{
    int neg = 0, pos = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < 0)
            neg++;
        else
            pos++;
    }
    int j = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < 0)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, -5, -4, -3, -2, -1};
    move(arr);
    for (int e : arr)
        cout << e << " ";
    return 0;
}