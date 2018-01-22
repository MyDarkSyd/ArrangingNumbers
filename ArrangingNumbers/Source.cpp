#include "Driver.h"
#include "stdafx.h"

//functions
vector<int> GetInput()
{
	vector<int>values;
	//using push back for loop to store variables in vector
	for (int michael; cin >> michael;)
		values.push_back(michael);
	return values;
}

vector<int> sorts(vector<int>value)
{
	//using algorithm function to sort vector value
	sort(value.begin(), value.end());
	return value;
}

void printout(vector<int> value)
{
	for (int i = 0; i < value.size(); i++)
	{
		if (i == value.size() - 1)
			cout << value[i];
		else
			cout << value[i] << ",";
	}
}

