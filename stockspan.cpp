#include<bits/stdc++.h>

using namespace std;

vector<int> stockSpan(vector<int> prices){
    vector<int> ans;
    stack<pair<int,int>> test;
    for (auto i : prices)
    {
        int days = 1;
        while (!test.empty() && test.top().first<=i)
        {
            days+=test.top().second;
            test.pop();            
        }
        test.push({i,days});
        ans.push_back(days);
    }

    return ans;


}

int main()
{
    vector<int> x = {100,80,70,60,75,85};
    vector<int> ans = stockSpan(x);

    for (auto i: ans)
    {
        cout<<i<<" ";
    }
    
    return 0;
}