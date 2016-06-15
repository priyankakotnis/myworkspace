//This is the interface for the class person_with_email

#ifndef PERSON_WITH_EMAIL_H
#define PERSON_WITH_EMAIL_H

#include<string>
#include "person.h"

using namespace std;

class person_with_email : public virtual person {
	public:
	    person_with_email(const string &pName, const string &pSurname, const string &pEmail); 
	    
	    //Virtual functions
	    virtual bool has_telephone_p() const;
	    virtual bool has_email_p() const;
	    
	    string email() const;    //Get Person's email
	    void set_email(const string newEmail);    //Set Person's email
	    
	    virtual ostream& print(ostream &out) const;
	    //bool operator==(const person &rhs);	
	    
	    virtual ~person_with_email(); //Destructor		
		
	private:
	    string emailId;  
};

#endif //PERSON_WITH_EMAIL_H