CXXFLAGS = -Wall -std=c++11 -pedantic -g 
CC=$(CXX)
CFLAGS=$(CXXFLAGS)
LIBS	= 
PROGS	= phoneBookTest
OBJECTS	= common.o contacts.o person.o person_with_email.o person_with_telephone_and_email.o person_with_telephone.o
SHELL	= /bin/sh

all: $(PROGS)

phoneBookTest: phoneBookTest.o $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o phoneBookTest phoneBookTest.o $(OBJECTS) $(LIBS)

clean:
	-/bin/rm -f $(PROGS) *.o Makefile.bak

Makefile:
	./makemake

depend:
	./makedepend $(CXXFLAGS) *.cpp

# DO NOT DELETE THIS LINE -- make depend depends on it.

common.o: common.cpp person.h person_with_email.h person_with_telephone.h \
 person_with_telephone_and_email.h
contacts.o: contacts.cpp contacts.h person.h common.h
person.o: person.cpp person.h
person_with_email.o: person_with_email.cpp person_with_email.h person.h
person_with_telephone.o: person_with_telephone.cpp \
 person_with_telephone.h person.h
person_with_telephone_and_email.o: person_with_telephone_and_email.cpp \
 person_with_telephone_and_email.h person_with_telephone.h person.h \
 person_with_email.h
phoneBookTest.o: phoneBookTest.cpp person.h person_with_telephone.h \
 person_with_email.h person_with_telephone_and_email.h common.h \
 contacts.h
