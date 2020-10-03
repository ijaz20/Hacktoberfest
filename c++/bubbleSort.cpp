#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &array)
{
    /* run loops two times
     * one for walking through the array
     * and the other for comparison
     * Time complexity - O(N^2)
     */
    if(array.size() == 0)
        return;

    for(int i=0;i<array.size();i++)
    {
        for(int j=0;j<array.size()-1;j++)
        {
            if(array[j] > array[j+1])
            {
                // swap if order is not correct
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

}

int main()
{
    vector<int> array = {10, 9, 4, 4, 6, 8};
    bubbleSort(array);
    for(int i=0;i<array.size();i++)
        cout<<array[i]<<" ";
    cout<<endl;
    return 0;
}