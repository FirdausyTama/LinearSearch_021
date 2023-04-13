#include <iostream>
using namespace std;


int arr[20];		// array to be searched
int n;				// number of elements in the array
int i;				// index of array elemnt


void input()
{
	while (true)
	{
		cout << "Enter the number of elements in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 elements. \n\n";
	}


	// Acccept array elementa
	cout << "\n----------------------\n";
	cout << "Enter array elements \n";
	cout << "------------------------\n";
	for (i - 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> arr[i];
	}
}


void LinearSearch()
{
	char ch;
	int comparasion;		// Number of comparasions

	do
	{
		// Accept the number to be searched
		cout << "\nEnter the element you want to sreach";	// Langah 1
		int item;
		cin >> item;

		comparasion = 0;
		for (i = 0; i < n; i++)								//Langkah 2 dan 4
		{
			comparasion++;
			if (arr[i] == item)								// Langkah 5 a found
			{
				cout << "\n" << item << " found at position " << (i + 1) << endl;
				break;
			}
		}

		if (i == n)											// Langkah 5 b not found
			cout << "\n" << item << " not found in the array\n";
		cout << "\nNumber of comparasions: " << comparasion << endl; \

			cout << "\nContinue search (y/n): ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'Y'));
}


int main()
{
	input();
	LinearSearch();
}