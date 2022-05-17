#pragma once
#include "Job.h"
#define SIZE 5
class Admin
{
private:
	int adminID;
	char adminName[20];
	char adminEmail[20];
	char adminNumber[10];
	char adminUsername[20];
	char adminPassword[20];
	Job* job[SIZE];
public:
	Admin();
	Admin(int padminID, const char padminName[], const char
		padminEmail[], const char padminNumber[], const char
		padminUsername[], const char padminPassword[]);
	void login(const char adnUsername, const char adnPsword);
	void manage(Job* pjob);
	~Admin();
};
