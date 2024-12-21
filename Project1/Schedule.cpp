#include "Schedule.h"

Schedule::Schedule()
{
	book[Date()].push_back("cpp");
	book[Date()].push_back("cinema");
	book[Date()].push_back("Happy New Year");
}

void Schedule::addevent(Date d, string event)
{
	book[d].push_back(event);
}

void Schedule::showSchedule() const
{
	for (auto node : book)
	{
		cout << node.first << endl;
		for (int i = 0; i < node.second.size(); i++)
		{
			cout << "\t" << node.second[i] << endl;
		}cout << endl;
	}
}

void Schedule::findByDate(Date d) const
{
	auto p = book.find(d);
	if (p == book.end())
	{
		cout << "Not Found" << endl;

	}
	else {
		for (string event : p->second)
		{
			cout << event << ",";
		}
		cout << endl;
	}
}

void Schedule::findByEvent(string event) const
{
	bool isFound = false;
	for (auto node : book)
	{
		for (int i = 0; i < node.second.size() ; i++)
		{
			if (event == node.second[i])
			{
				cout << "Date: " << node.first << endl;
				isFound = true; 
				break;
			}
		}
	}
	if (!isFound) {
		cout << "Not Found" << endl;
	}
}

void Schedule::delEvent(Date d, string event)
{
	auto p = book.find(d);
	if (p == book.end()) {
		cout << "Not Found" << endl;
	}
	else {
		for (int i = 0; i < p->second.size(); i++)
		{
			if (event == p->second[i])
			{
				cout << "Delete: " << p->first << " " << p->second[i] << endl;
				p->second.erase(p->second.begin() + i);
				break;
			}
		}
		if (p->second.size() == 0) {
			book.erase(p);
		}
	}
}
