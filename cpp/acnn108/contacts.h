//This is a header file for contacts.h
//This is the interface for the class contacts
//This is primarily intended to be used as a container class for person pointers

#ifndef CONTACTS_H
#define CONTACTS_H

#include<vector>
#include"person.h"

using namespace std;


class contacts {

      	public:	  
	    /*Add Person to contacts
	    * If the same contact is added twice then the last added will be used
	    * to update the contact regardless of the information contained.	 * 
	    */
	    void add(person *p);
	    
	    
	    ostream& in_order(ostream& out);
	    ostream& with_telephone(ostream& out);
	    ostream& find(const string &criteria, ostream &out);
	    
	    int count();
	    ostream& printAllContacts(ostream& out);
	    vector<person*>::iterator begin() ;
	    vector<person*>::iterator end() ;
	  
	private:
	    vector<person*> contactsDirectory;
	
};


#endif