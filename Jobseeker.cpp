#include "jobseeker.h"
Jobseeker::Jobseeker()
{
	noOfJobs = 0;
}
Jobseeker::Jobseeker(const char usName[], const char usPwd[], int id, const
	char name[], const char address[], const char email[], const char
	telno[], int pnoOfApartments) :RegisteredCustomer(usName, usPwd, id,
		name, address, email, telno)
{
	noOfJobs = pnoOfJobs;
}
void Jobseeker::addBuyingJobs(Job* pbuyJob)
{
	if (noOfJobs < SIZE)
	{
		buyJob[noOfJobs] = pbuyJob;
		noOfJobs++;
	}
}
void Jobseeker::login()
{
}
void Jobseeker::displayBuyerDetails()
{
}
Jobseeker::~Jobseeker()
{
	//Destructor 
	for (int i = 0; i < SIZE; i++)
	{
		delete buyJob[i];
	}
}
