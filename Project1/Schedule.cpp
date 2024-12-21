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
}

void Schedule::findByEvent(string event) const
{
}

void Schedule::delEvent(Date d, string event)
{
}
