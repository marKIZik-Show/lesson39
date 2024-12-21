#include <iostream>
#include <map>
#include <string>
#include "Schedule.h"
using namespace std;

int main() {

	//map<string, int> words;
	//string user;

	//do {
	//	cout << "Input word: ";
	//	cin >> user;

	//	auto item = words.find(user);
	//	if (item == words.end()) {
	//		words[user] = 1;
	//	}
	//	else {
	//		words[user]++;
	//	}
	//} while (user != "stop");

	//cout << "----------------------------------\n";
	//words.erase("stop");
	//for (auto node : words) {
	//	cout << node.first << " " << node.second << endl;
	//}

	Schedule Nazar;
	Nazar.addevent(Date(2008, 11, 11), "Birthday");
	Nazar.showSchedule();
}