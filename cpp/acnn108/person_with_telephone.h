//This is the interface file for class person_with_telephone

#ifndef PERSON_WITH_TELEPHONE_H
#define PERSON_WITH_TELEPHONE_H

#include<string>
#include "person.h"

using namespace std;

class person_with_telephone : public virtual person {
	public:
	    person_with_telephone(const string &pName, const string &pSurname, const string &telephone);
	    
	    
	    //Virtual functns
	    virtual bool has_telephone_p() const;
	    virtual bool has_email_p() const;
	    
	    
	    string telephone() const;    //Get Person's telephone
	    void set_telephone(const string newTelephone);    //Set Person's telephone
	    
	    //bool operator==(const person &rhs);		
	    virtual ostream& print(ostream&) const;	
	    
	    virtual ~person_with_telephone(); // Destructor
	
	private:
	    string phoneNumber;

};

#endif //PERSON_WITH_TELEPHONE_H