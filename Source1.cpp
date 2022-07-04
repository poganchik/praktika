#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	{
		map<string, int> myMap;
		myMap.emplace("Дорофеев", 2);
		myMap.emplace("Крылов", 4);
		myMap.emplace("Рыжова", 5);
		myMap.emplace("Ильина", 1);
		myMap.emplace("Малышева", 3);
		myMap.emplace("Зуева", 6);
		myMap.emplace("Леонтьева", 7);
		myMap.emplace("Кузнецов", 9);
		myMap.emplace("Еремина", 10);
		myMap.emplace("Высоцкая", 8);
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