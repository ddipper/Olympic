#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> a)
{
    for (int i=0;  i <a.size();  i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(vector<int>& a)
{
    bool swapp = true;
    while(swapp)
    {
        swapp = false;
        for (int i = 0; i < a.size()-1; i++)
        {
            if (a[i]>a[i+1])
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
    cin >> n;

    vector<int> vec(n);

    for(int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    bubbleSort(vec);
    printVector(vec);

}