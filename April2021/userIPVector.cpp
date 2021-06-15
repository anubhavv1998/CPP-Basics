#include<vector>
#include<iostream>
using namespace std;

vector<int> v;

int main()
{
	cout << "Enter n " << endl;
    int n;
    cin>>n;
	int input = 0;

	for (int i = 0; i < n; i++) 
	{
		cin >> input;
		v.push_back(input);
		
	}

	for (int i = 0; i < n; i++) 
	{
		cout << v[i] <<" ";
	}

		return 0;
}
