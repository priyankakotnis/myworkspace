
//This is the implementation file for person_with_telephone.h
//This is the implementation for class person_with_telephone
//This is the implementation file for person_with_telephone.h

#include<iostream>
#include<string>
#include "person_with_telephone.h"

using namespace std;

    	person_with_telephone::person_with_telephone(const string &pName, const string &pSurname, const string &telephone) : person(pName,pSurname), phoneNumber(telephone) {
		
	}
	
	/*bool person_with_telephone::operator==(const person &rhs) {
	  return person::operator==(rhs);
	}*/
	
	person_with_telephone::~person_with_telephone() {
	  
	}

	string person_with_telephone::telephone() const {
		return phoneNumber;
	} 
	
	void person_with_telephone::set_telephone(const string newTelephone) {
	    phoneNumber = newTelephone;
	}
	
	ostream& person_with_telephone::print(ostream &out) const {
	    out << "person S" << " " << surname() << " " << "N " << name(); 
	    if(has_telephone_p())	 
	    out << " T " << telephone() ;
	    return out;
	}
	
	bool person_with_telephone::has_telephone_p() const {
		if(phoneNumber != "") {
		  return true; }
		else return false;
	}
	
	bool person_with_telephone::has_email_p() const {
		return false;
	}