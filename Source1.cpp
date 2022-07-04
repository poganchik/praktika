#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	{
		map<string, int> myMap;
		myMap.emplace("��������", 2);
		myMap.emplace("������", 4);
		myMap.emplace("������", 5);
		myMap.emplace("������", 1);
		myMap.emplace("��������", 3);
		myMap.emplace("�����", 6);
		myMap.emplace("���������", 7);
		myMap.emplace("��������", 9);
		myMap.emplace("�������", 10);
		myMap.emplace("��������", 8);
	}
	for (pair<string, int> pair : myMap) {
		cout << pair.first << ": " << pair.second << '\n';
	}
	cout << '\n';

	map<int, string> reverseMyMap;
	for (pair<string, int> pair : myMap) {
		reverseMyMap[pair.second] = pair.first;
	}

	cout << "Reverse:\n";
	map<int, string>::reverse_iterator it = reverseMyMap.rbegin();
	while (it != reverseMyMap.rend()) {
		cout << it->first << ": " << it->second << '\n';
		it++;
	}
}