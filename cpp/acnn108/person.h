//This is the interface for the class person

#ifndef PERSON_H
#define PERSON_H

#include<string>

using namespace std;

class person {
	public:
	    person(const string &pName, const string &pSurname);   //Initialize with name and surname
	    
	    string name() const;    //Get Person's name
	    string surname() const; //Get Person's surname
	    
	    virtual bool has_telephone_p() const;
	    virtual bool has_email_p() const;		
	    
	    virtual ostream& print(ostream&) const;	
	    
	    person& operator=(const person &rightPerson);
	    bool operator==(const person &rhs) const; 
	    bool operator<(const person &rhs) const; 
	    
	    virtual ~person();  //Destructor
		
	private:
	    string firstName;
	    string lastName;

};

#endif //PERSON_H
