//Julian Pabon
//CIS 1202.501
//May 2, 2021

#include <iostream>
using namespace std;

//function prototype
char character(char start, int offset);

int main()
{
	//declare variables
	char start;
	int offset;
	//get input
	cout << "Enter starting character: ";
	cin >> start;
	cout << "Enter amount of offset: ";
	cin >> offset;
	//call function and output it
	character(start, offset);
}

char character(char start, int offset)
{ 
	//test if start is letter
	try 
	{
		if (start < 'A' || start < 'z')
		{
			throw start;
		}
	}
	catch (char startException)
	{
		cout << "invalidCharacterExcpeption: " << startException << " is not a letter\n";
	}
	//try if start + offset is a letter
	try
	{
		if ((start + offset) < 'A' || (start + offset) < 'z')
		{
			throw (start + offset);
		}
	}
	catch (int offsetException)
	{
		cout << "invalidRangeException: " << offsetException << " is not a letter\n";
	}
}

