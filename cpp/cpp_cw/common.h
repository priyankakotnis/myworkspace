/*This is a common file that contains functions used across programs
*/
#ifndef COMMON_H
#define COMMON_H

	//Print Person 
	ostream& operator<<(ostream & out, const person &p);
	
	//Reads the person from standard input stream
	istream& read_person(istream &in, person * & p) ;
#endif