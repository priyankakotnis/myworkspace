#include<iostream>
#include<fstream>
#include"person.h"
#include"person_with_telephone.h"
#include"person_with_email.h"
#include"person_with_telephone_and_email.h"
#include"common.h"
#include"contacts.h"

int main() {
  
	cout << "Creating and printing persons......." << endl << endl;
  
        //Q1 - Person 
	person p("Awainn","Calder");
	
	cout << "person = " << p.name() << " , " << p.surname() << " , " << " has_telephone = " << p.has_telephone_p() << " , " << " has_email = " << p.has_email_p() << endl << endl;
	
	//Q2 - Person with telephone
	person_with_telephone pt("John","John","+44.123456789");
	
	cout << "person_with_telephone = " << pt.name() << " , " << pt.surname() << " , " << pt.telephone() << " , " << " has_telephone = " << pt.has_telephone_p() << " , " << " has_email = " << pt.has_email_p() << endl << endl;
	
	//Q3 - Person with email
	person_with_email pe("John","Binosorus","john@yahoo.com");
	
	cout << "person_with_email = " << pe.name() << " , " << pe.surname() << " , " << pe.email() << " , " << " has_telephone = " << pe.has_telephone_p() << " , " << " has_email = " << pe.has_email_p() << endl << endl;
	
	//Q4 - Person with telephone and email
	person_with_telephone_and_email pte("John","Argo","+91.88888888","john@hotmail.com");
	
	cout << "person_with_telephone_and_email = " << pte.name() << " , " << pte.surname() << " , " << pte.telephone() << " , " << pte.email() << " , " << " has_telephone = " << pte.has_telephone_p() << " , " << " has_email = " << pte.has_email_p() << endl << endl;
	
	//Q5 and Q6 - Reading contacts from read.txt and printing
	
	cout << "Reading contacts from read.txt ....... processing" << endl << endl;
	
	person *pp = nullptr;//0;
	ifstream inputFile;
	
	inputFile.open("read.txt");
	if(inputFile.fail())
	{
	  cout << "No input file called read.txt provided" << endl;
	}
	else {
	  while (read_person(inputFile, pp) && pp) {
	      cout << *pp << endl;
	      delete pp;
	      pp = nullptr;
	  }	 
	}
	 // Close the file
	  inputFile.close();
	
	cout <<  endl;
	
	cout << "Continuing..........................." << endl;
	
	//Q5 - Printing person objects
	cout << "Printing persons for checking == & <" << endl << endl;
	
	person_with_telephone_and_email pte1("John","Argo","+91.99999999","john_updated_email@hotmail.com");
	person_with_telephone_and_email pte2("Billy","Argo","+91.99999999","argo@hotmail.com");
	
	
	cout << "p : " << p << endl;
	cout << "pt : " << pt << endl;
	cout << "pe : " << pe << endl;
	cout << "pte : " << pte << endl;
	cout << "pte1 : " << pte1 << endl;
	cout << "pte2 : " << pte2 << endl;
	
	//Q7 - Operator == & <
	
	cout << endl << "Checking p == p : " << ( p == p ) << endl;
	cout << endl << "Checking pte == pte1 : " << ( pte == pte1 ) << endl;
	cout << endl << "Checking pte1 == pte : " << ( pte1 == pte ) << endl;
	cout << endl << "Checking p < pt : " << ( p < pt ) << endl;
	cout << endl << "Checking pt < p : " << ( pt < p ) << endl;
	
	
	//Q7 Continued - to add contacts
	cout <<  endl;
	cout << "Now adding above persons to contacts and printing all....." <<  endl;
	
	contacts myPhoneBook;	
	
	myPhoneBook.add(&p);
	myPhoneBook.add(&pt);
	myPhoneBook.add(&pe);
	myPhoneBook.add(&pte);
	myPhoneBook.add(&pte1);
	myPhoneBook.add(&pte2);
	
	cout << endl;
	
	cout << "Printing all contacts ..." << endl << endl;	
	myPhoneBook.printAllContacts(cout);	
	cout << endl;
	
	//Q8 -- Find
	
	cout << "Now looking for name or surname = " << "John" << endl << endl;	
	myPhoneBook.find("John",cout);	
	cout << endl;
	
	
	//Q9 -- in_order
	cout << "Now sorting by Surname and Name" << endl << endl;
	myPhoneBook.in_order(cout);	
	cout << endl;
	
	//Q10 - with_telephone
	cout << "Printing contacts with telephone...." << endl << endl;
	myPhoneBook.with_telephone(cout);
		 
	return 0;
  
}