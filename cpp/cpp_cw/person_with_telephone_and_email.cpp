//This is the implementation file for person_with_telephone_and_email.h

#include<iostream>
#include<string>
#include "person_with_telephone_and_email.h"


using namespace std;

	person_with_telephone_and_email::person_with_telephone_and_email(const string &pName, const string &pSurname, const string &telephone, const string &pEmail) : person(pName,pSurname), person_with_telephone(pName,pSurname,telephone), person_with_email(pName,pSurname,pEmail) {
	}

	
	/*bool person_with_telephone_and_email::operator==(const person &rhs) {
	  return person::operator==(rhs);
	}*/

	person_with_telephone_and_email::~person_with_telephone_and_email() {
	  
	}
	
	ostream& person_with_telephone_and_email::print(ostream &out) const {
	    out << "person S" << " " << surname() << " " << "N " << name(); 
	    if(has_telephone_p())	 
	    out << " T " << telephone() ; 
	    if(has_email_p())	 
	    out << " E " << email() ;
	    return out;
	}
	
	bool person_with_telephone_and_email::has_telephone_p() const {
		if(telephone() != "")
		  return true;
		else return false;
	}
	
	bool person_with_telephone_and_email::has_email_p() const {
		if(email() != "")
		  return true;
		else return false;
	}