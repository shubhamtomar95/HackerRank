#include <iostream>
#include <string>
#include <stack>
#include <cstdlib>
#include <fstream>
using namespace std;


int main(int argc, char const *argv[])
{
	
	int i = 0,j, len, test, test_cases;
	string str;
	
	char ch;	
	cin >>  test_cases;

	
	
	for (test = 0 ; test < test_cases ; test++)
	{
		cin >> str;
		stack<char> s1;
		bool match = true;
		len = str.length();
		for ( i = 0 ; i < len ; i++ )
		{
			
			ch = str[i];
			switch (ch)
			{
				case '(':
				case '{':
				case '[':
					s1.push(ch);
					break;
				case ')':
				    
					if ( (s1.empty()) || (s1.top() != '(') )
					{
						match = false;
						break;
					}
					s1.pop();
					break;
				case '}':
				    
					if ((s1.empty())||(s1.top() != '{'))
					{
						match = false;
						break;
					}
					s1.pop();
					break;
				case ']':
				    
					if ((s1.empty())||(s1.top() != '['))
					{
						match = false;
						break;
					}
					s1.pop();
					break;
			}
			
			
		}
		if(!s1.empty())
		{
            match = false;
		}
        
		if (match)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
		
	}
	return 0;
}