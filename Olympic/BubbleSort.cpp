#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> a) //print vector
{
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(vector<int>& a) //sort vector or array(change `vector<int>&` to `int array[N]`)
{
    bool swapp = true;
    while(swapp)
    {
        swapp = false;
        for (int i = 0; i < a.size()-1; i++)
        {
            if (a[i]>a[i+1]) //if(>) => low to high | if(<) => high to low
            {
                a[i] += a[i+1];
                a[i+1] = a[i] - a[i+1];
                a[i] -=a[i+1];
                swapp = true;
            }
        }
    }
}

int main()
{
    int n = 0;
    cin >> n; //count array elements

    vector<int> vec(n); //create vector

    for(int i = 0; i < n; i++)
    {
        cin >> vec[i]; //initialize vector
    }

    bubbleSort(vec); //use sort
    printVector(vec); //use print

}

