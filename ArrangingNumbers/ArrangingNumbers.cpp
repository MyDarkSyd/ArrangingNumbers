/*
**	Author:	Uti Michael Chike
**	Note:	THIS USES C++ 11 IMPLEMENTATIONS
*/

#include "Driver.h"
#include "stdafx.h"
int main()
{
	//create a container of int value
	vector<int>value;
	cout<<"input numbers with spacing type | and enter to stop e.g 1 2 3 4 5 | and enter"<<endl;
	value = GetInput();
	//use sorting function to get sorted values
	value = sorts(value);
	//print out values
	printout(value);
	cout << endl;
	system("pause");
	return 0;
}