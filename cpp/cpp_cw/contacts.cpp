//This is the implementation file for contacts.h
//This is the implementation for class contacts

#include <algorithm>
#include <iostream>
#include"contacts.h"
#include"common.h"

using namespace std;

	void contacts::add(person *p) {
	  
	  for(auto ritr = contactsDirectory.begin(); ritr != contactsDirectory.end() ; ritr++) {
	      if(**ritr == *p) {
		contactsDirectory.erase(ritr);
		break;
	      }
	  }
	  contactsDirectory.push_back(p);	  
	}
	
	int contacts::count() {
	  return contactsDirectory.size();
	}
	
	ostream& contacts::in_order(ostream &out) {	  
	  sort(contactsDirectory.begin(), contactsDirectory.end(), [](person *lhs, person *rhs){return *lhs < *rhs;});
	  return printAllContacts(out);
	}
	
	ostream& contacts::with_telephone(ostream& out) {	  
	  for_each(contactsDirectory.begin(), contactsDirectory.end(), [&out](const person *p) { if((*p).has_telephone_p()) out << *p << endl;}); 
	  return out;
	}
	
	ostream& contacts::printAllContacts(ostream& out) {
	  for_each(contactsDirectory.begin(), contactsDirectory.end(), [&out](const person *p){ out << *p << endl;}); 
	  return out;
	}
	
	
	ostream& contacts::find(const string &criteria, ostream &out) {
	  for_each(contactsDirectory.begin(), contactsDirectory.end(), [&criteria,&out](const person *p){ if( (*p).name() == criteria || (*p).surname() == criteria ) out << *p << endl;});
	  return out;	  
	}	
	
	vector<person*>::iterator contacts::begin()  {
	  return contactsDirectory.begin();	  
	}
	
	vector<person*>::iterator contacts::end()  {
	   return contactsDirectory.end();
	}