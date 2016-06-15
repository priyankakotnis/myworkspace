//This is the implementation file for common.h

#include<iostream>
#include<string>
#include<algorithm>
#include "person.h"
#include "person_with_email.h"
#include "person_with_telephone.h"
#include "person_with_telephone_and_email.h"


	ostream& operator<<(ostream &out, const person &p) {
		out << "<";
		p.print(out);
		out << " >";
		return out;
	}
	
	
	istream& read_person(istream &in, person * & p) {
		// <person S    Kotnis N    Arati T    987654321 E    arati@gmail.com > 
		// str1    str2 str3   str4 str5  str6 str7      str8 str9            str10 	

		string str1, str2, str3, str4, str5, str6, str7, str8, str9, str10;
		
		if (in >> str1) {
		  
		  if (in >> str2 >> str3 >> str4 >> str5 >> str6) {		    
		    
		    if(str1 == "<person") {
		      
		      if(str2 == "S" && str4 == "N") {
			  
			  if(str6 == ">")
			    p = new person(str5, str3);
			   
			  else if(in >> str7 >> str8)  {
			  
			      if(str6 == "E" && str8 == ">")
				p = new person_with_email(str5, str3, str7); 
				
			      else if(str6 == "T" && str8 == ">") 
				    p = new person_with_telephone(str5, str3, str7); 
				  
			      else if(in >> str9 >> str10) {
				    if (str6 == "T" && str8 == "E" && str10 == ">")
				    p = new person_with_telephone_and_email(str5, str3, str7, str9); 
				    
				  }
			      }
			  }
			
		      }
		      
		      
		    }
		    else in.setstate(ios::badbit); //read failed
		  
		} 
		  
		return in;
	}