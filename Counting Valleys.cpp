#include <iostream>
using namespace std;

int main() 
{
    string s;
    int sum = 0;
    int cnt = 0;
    bool inValley = false;
    int n;
    cin >> n;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]=='U')
            sum++;
        else
            sum--;
        
        if (sum < 0 && !inValley) 
        {
            cnt++;
            inValley = true;
        }
        else if (sum >= 0)
            inValley = false;
    }
    
    cout << cnt;
    return 0;
}
