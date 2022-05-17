#include "Company.h"
Company::Company()
{
	noOfJobs = 0;
}
Company::Company(const char usName[], const char usPwd[], int id,
	const char name[], const char address[], const char email[], const
	char telno[], int pnoOfJobs) :RegisteredCustomer(usName,
		usPwd, id, name, address, email, telno)
{
	noOfApartments = pnoOfApartments;
}
void Company::addSellingJob(Job* pselljob)
{
	if (noOfJobs < SIZE)
	{
		selljob[noOfJobs] = psellJob;
		noOfJobs++;
	}
}
void Company::login()
{
}
void Company::displaySellerDetails()
{
}
Company::~Company()
{
	//Destructor 
}
