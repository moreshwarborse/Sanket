#include <sstream>
#include <vector>
#include <iostream>
using namespace std;
vector<int> parseInts(string str)
{
    // Complete this function
    vector<int> integers;
    int i = 0, k = 0;
    int one = 0,x;
        for (int j = 0; j <str.size(); j++)
        {
            if (str[j] == ',')
            {  
               integers.push_back(one);
                one = 0;
                continue;
            }
            else
            {   x=int(str[j])-48;
                one=one*10+x;     }
         
            i++;
    }
    integers.push_back(one);
     return integers;
}
int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }
    return 0;
}
