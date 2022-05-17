#include "Admin.h"
#include<cstring>
Admin::Admin()
{
	adminID = 0;
	strcpy(adminName, "");
	strcpy(adminEmail, "");
	strcpy(adminNumber, "0000000000");
	strcpy(adminUsername, "");
	strcpy(adminPassword, "");
}
Admin::Admin(int padminID, const char padminName[], const char
	padminEmail[], const char padminNumber[], const char
	padminUsername[], const char padminPassword[])
{
	adminID = padminID;
	strcpy(adminName, padminName);
	strcpy(adminEmail, padminEmail);
	strcpy(adminNumber, padminNumber);
	strcpy(adminUsername, padminUsername);
	strcpy(adminPassword, padminPassword);
}
void Admin::login(const char adnUsername, const char adnPsword)
{
}
void Admin::manage(Job* pjob)
{
}
Admin::~Admin()
{
	//Destructor 
	for (int i = 0; i < SIZE; i++)
	{
		delete job[i];
	}
}
