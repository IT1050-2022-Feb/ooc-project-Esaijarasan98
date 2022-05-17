#pragma once
#include "RegisteredCustomer.h"
#include "Job.h"
#define SIZE 5
class Jobseeker : public RegisteredCustomer
{
private:
	int noOfJobs;
	Job* buyApt[SIZE];
public:
	Jobseeker();
	Jobseeker(const char usName[], const char usPwd[], int id, const
		char name[], const char address[], const char email[], const char
		telno[], int pnoOfApartments);
	void addBuyingApartment(Job* pbuyJob);
	void login();
	void displayBuyerDetails();
	~Jobseeker();
};
