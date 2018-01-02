/*
Store expected output of your code in file expected_output_file.
Store actual outut in file actual_output_file.
comapre(string, string) tests the validity of your code by comparing it against actual output.
It lists out all the test cases that failed and the expected and actual value, in case test cases fail.
*/
#include <iostream>
#include <fstream>
using namespace std;

void compare(string expected_output_file, string actual_output_file)
{
	ifstream expected(expected_output_file), actual(actual_output_file);
	bool all_passed;
	int test_case = 1;
	while(!expected.eof())
    {
    	string expected_result, actual_result;
    	getline(expected, expected_result);
    	getline(actual, actual_result);

    	if(expected_result != actual_result)
    	{
    		cout << "Test failed test case id : " << test_case << " Expected Value was : "
    	    << expected_result << " But actual value was " << actual_result << endl;
            all_passed = false;
    	}

    	test_case = test_case + 1;
    }

    if (all_passed)
    {
    	cout << "All test Cases passed successfully!" << endl;
    }
}