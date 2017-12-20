#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector <string> ip_table{ "127.0.0.1", "192.168.0.1", "192.168.1.100", "255.255.255.255" };
	cout << "Input a number of the IP: ";
	unsigned num;
	cin >> num;
	if (num > ip_table.size())
	{
		cout << "Impossible, must be more then 0 and less then sixe of IP table!";
	}
	else
	{
		vector<string> copy_ip(num);
		for (unsigned i = 0; i < copy_ip.size(); ++i)//simplify
		{
			copy_ip[i] = ip_table[i];
			cout << copy_ip[i] << " ";
		}
	}
	return 0;
}