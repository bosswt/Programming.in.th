#include <iostream>
#include <map>

using namespace std;

int main()
{
        int n;
        string str1;
        map<string,int> dict;

        cin >> n;
        for(int i = 0; i < n; i++) {
                cin>>str1;
                dict[str1] = 1;
        }
        for (map<string,int>::iterator it=dict.begin(); it!=dict.end(); ++it)
                cout << it->first << endl;
}
