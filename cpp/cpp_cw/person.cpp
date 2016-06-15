//This is the implementation file for person.h

#include<iostream>
#include<string>
#include "person.h"

using namespace std;

	person::person(const string &pName, const string &pSurname) : firstName(pName), lastName(pSurname) {
		
	}
	
	person::~person() {
	  
	}

	string person::name() const {
		return firstName;
	} 

	string person::surname() const {
		return lastName;
	}
	
	
	bool person::has_email_p() const {
		return false;
	}
	
	bool person::has_telephone_p() const {
		return false;
	}
	
	ostream& person::print(ostream &out) const {
		return out << "person S" << " " << surname() << " " << "N " << name();
	}
	
	person& person::operator=(const person &rPerson) {
	  
		if(this == &rPerson) {
		  return *this;
		}
		else {
		  firstName = rPerson.name();
		  lastName = rPerson.surname();
		  return *this;
		  
		}
	}
	
	bool person::operator==(const person &rhs) const {
		return name() == rhs.name() && surname() == rhs.surname();
	}
	
	bool person::operator<(const person &rhs) const {
		bool flag = false;
		if(surname() == rhs.surname() && name() < rhs.name()) {
		    flag = true;
		}
		else if(surname() < rhs.surname()) {
		    flag = true;
		}
		
		return flag;
	}

