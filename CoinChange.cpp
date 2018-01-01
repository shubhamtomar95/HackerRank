#include <bits/stdc++.h>
#include <sstream>
#include <typeinfo>
using namespace std;

std::map<string, long> solution;

long getWays(vector<long> coins, long amount, int index)
{
    if (amount < 0)
    {
        return 0;
    }
    if (amount == 0)
    {
        return 1;
    }
    if (coins.size() <= index)
    {
        return 0;
    }
    stringstream amount_sstr, index_sstr, key_sstr;
    
    amount_sstr << amount;
    index_sstr << index;
    
    string amount_str, index_str;
    amount_str = amount_sstr.str();
    index_str = index_sstr.str();
   // cout << "amount_str " << amount_str << endl;
   // cout << "index_str " << index_str << endl;
    
    
    key_sstr << amount_str << "-" << index_str;
   
    string key = key_sstr.str();
    
  //  cout << "Long " << amount << "-" << index << endl;
    
 //   cout << key << endl;
    if (solution.find(key) != solution.end())
    {
        return solution.find(key)->second;
    }

    //long ways = 0;
    long ways = getWays(coins, amount - coins[index], index) + getWays(coins, amount, index + 1);
    solution[key] = ways;
    return ways;
}


int main() {
    long n;
    long m;
    cin >> n >> m;

    vector<long> c(m);
    for(long i = 0; i < m; i++){
       cin >> c[i];
    }

    cout << getWays(c, n, 0) << endl;
    return 0;

}

    /* 
Input :
250 26
8 47 13 24 25 31 32 35 3 19 40 48 1 4 17 38 22 30 33 15 44 46 36 9 20 49
Output:
3542323427*/