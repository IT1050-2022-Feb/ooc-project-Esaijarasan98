
#include "Company.h"
#include "Jobseeker.h"
#include "Admin.h"
#include "Job.h"
#include "guestUser.h"
#include "RegisteredCustomer.h"
#include <iostream>
using namespace std;
int main()
{
	//---- Object creation ------
	GuestUser* rg = new RegisteredCustomer(); // Object -
	RegisteredCustomer class
		RegisteredCustomer* company = new Company(); // Object - Company 
	class
		RegisteredCustomer* jobseeker = new Jobseeker(); // Object - Jobseekerclass
	Job* job = new Job(); // Object - Job class
	
	Admin* admin = new Admin(); // Object - Staff class
	
	
		//----Method Calling------
		rg->login();
	rg->displayDetails();

	company->login();
	company->displayCompanyDetails();
	jobseeker->login();
	jobseeker->displayJobseekerDetails();
	job->updateJobDetails();
	job->checkAvailability();
	
	//----Delete Dynamic objects------
	delete rg;
	delete company;
	delete jobseeker;
	delete job;

	return 0;
}