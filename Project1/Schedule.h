#include "Date.h"
#include <map>
#include <string>
#include <vector>
using namespace std;

class Schedule
{
	map<Date, vector<string>>book;
public:
	Schedule();
	void addevent(Date d, string event);
	void showSchedule()const;
	void findByDate(Date d)const;
	void findByEvent(string event)const;
	void delEvent(Date d, string event);



};