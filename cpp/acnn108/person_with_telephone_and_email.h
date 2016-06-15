//This is a interface file for class person_with_telephone_and_email

#ifndef PERSON_WITH_TELEPHONE_AND_EMAIL_H
#define PERSON_WITH_TELEPHONE_AND_EMAIL_H

#include<string>
#include "person_with_telephone.h"
#include "person_with_email.h"

using namespace std;


class person_with_telephone_and_email : public person_with_telephone, public person_with_email {
	public:
	    person_with_telephone_and_email(const string &pName, const string &pSurname, const string &pTelephone, const string &pEmail); 
	    
	    //Virtual functns
	    virtual bool has_telephone_p() const;
	    virtual bool has_email_p() const;
	    
	    virtual ostream& print(ostream &out) const;
	    //bool operator==(const person &rhs);
	    
	    virtual ~person_with_telephone_and_email(); //Destructor
};

#endif //PERSON_WITH_TELEPHONE_AND_EMAIL_H