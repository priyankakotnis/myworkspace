//This is the implementation file for person_with_email.h
//This is the implementation for class person_with_email

//This is the implementation for person_with_email.h

#include<iostream>
#include<string>
#include "person_with_email.h"

using namespace std;

	person_with_email::person_with_email(const string &pName, const string &pSurname, const string &pEmail) : person(pName,pSurname), emailId(pEmail) {
		
	}
	
	/*bool person_with_email::operator==(const person &rhs) {
	  return person::operator==(rhs);
	}*/
	
	person_with_email::~person_with_email() {
	  
	}

	string person_with_email::email() const 																				{
		return emailId;
	}
	
	void person_with_email::set_email(const string newEmail) {
	    emailId = newEmail;
	}
	
	ostream& person_with_email::print(ostream &out) const {
	    out << "person S" << " " << surname() << " " << "N " << name(); 
	    if(has_email_p())	 
	    out << " E " << email() ; 
	    return out;
	}
	
	bool person_with_email::has_email_p() const {
		if(emailId != "")
		  return true;
		else return false;
	}
	
	bool person_with_email::has_telephone_p() const {
		return false;
	}
	