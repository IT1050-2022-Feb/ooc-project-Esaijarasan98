#pragma once
#include "Company.h"
#include "Jobseeker.h"
#include "Admin.h"
#define SIZE1 2
#define SIZE2 2
class Job
{
private:
	int JobID;
	char jobtLoctaion[50];
	double jobSalary;
	char jobFacilities[50];
	char jobStatus[50];
	int count = 0;
	
	Company* company;
	Jobseeker* jobseeker;
	Admin* admin;
public:
	Job();
	Job(int comp1, int comp2, Company*
		pcompany, Jobseeker* pjobseeker, Admin* padmin);
	void jobDetails(int jobID, const char jobLocation,
		double jobSalary, const char jobFacility, const
		char jobStatus, Company* pcompany, Jobseeker* pjobseeker, Admin* padmin);
	void deleteJobDetails();
	void updateJobDetails();
	void calculateJobSalary();
	void displayJobDetails();
	void checkAvailability();
	~Job();
};