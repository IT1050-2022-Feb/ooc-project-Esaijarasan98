#pragma once
#include "RegisteredCustomer.h"
#include "Job.h"
#define SIZE 5
class Company :public RegisteredCustomer
{
private:
	int noOfApartments;
	Job* sellJob[SIZE];
public:
	Company();
	Company(const char usName[], const char usPwd[], int id, const
		char name[], const char address[], const char email[], const char
		telno[], int pnoOfApartments);
	void addSellingApartment(Job* psellApt);
	void login();
	void displaySellerDetails();
	~Company();
};