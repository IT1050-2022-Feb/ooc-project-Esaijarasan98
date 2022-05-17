#include "Job.h"
#define SIZE1 2
#define SIZE2 2
Job::Job()
{
}
Job::Job(int comp1, int comp2, 
	Company* pcompany, Jobseeker* pjobseeker, Admin* padmin)
{
	
	company = pcompany;
	jobseeker = pjobseeker;
	admin = padmin;
}
void Job::jobDetails(int jobID, const char jobLocation,
	double jobSalary, const char jobFacility,  const
	char jobStatus, Company* pcompany, Jobseeker* pjobseeker, Admin* padmin)
{
}
void Job::deleteJobDetails()
{
}
void Job::updateJobDetails()
{
}

void Job::calculateJobSalary()
{
}
void Job::displayJobDetails()
{
}
void Job::checkAvailability()
{
}
Job::~Job()
{
	//Destructor 

	