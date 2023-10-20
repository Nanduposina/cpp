#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> v{ 1,3,5,7,11,13 };

	cout << "Using vector container: ";
	for (auto i : v)
	{
		cout<<endl << i << " ";
	}
	return 0;
}
