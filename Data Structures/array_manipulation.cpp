#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int size, queries;
	cin >> size >> queries;
	std::vector<int> array(size, 0);
	
	for (int i = 0; i < queries ; ++i)
	{
		int start, end, num;
		cin >> start >> end >> num;

		array[start - 1] = array[start - 1] + num;
		array[end] = array[end] - num;
		
	}

	int max_val = 0, sum = 0;
	for (int i = 0; i < array.size() ; ++i)
	{
		sum = sum + array[i];
		max_val = (sum > max_val)?sum:max_val;
	}
	cout << max_val << endl;
	return 0;
}