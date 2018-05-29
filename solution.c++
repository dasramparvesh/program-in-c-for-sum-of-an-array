#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
//foo func to print the element in vector
void foo(vector<int> &input)
{
    for (const int &i : input)
        {
            cout << i << " ";
        }
}

int main()
{
    vector<int> vec;
    string buffer;
    int data;
    int sum;
cout << "Enter numbers. " << "After you finish, enter Required sum in newline" << endl;
    getline(cin, buffer);
    istringstream iss(buffer);
    while (iss >> data)
          vec.push_back(data);
    cin>>sum;
    sort(vec.begin(),vec.end());
    foo(vec);   
    cout<<endl;
    int len=vec.size()-1;
    cout<<len<<endl;
    int i=0;
    while(i<len){
        if(vec[i]+vec[len]==sum){
            cout<<vec[i]<<" "<<vec[len]<<endl;
            break;
        }
        else if(vec[i] + vec[len] < sum)
                 i++;
        else // A[i] + A[j] > sum
            len--;
    }
    
    cout<<sum<<endl;
}
