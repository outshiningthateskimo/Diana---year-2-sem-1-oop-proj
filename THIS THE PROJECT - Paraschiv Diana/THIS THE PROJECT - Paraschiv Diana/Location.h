// OH COME ON I'M NOT KNOWLEDGEABLE ENOUGH TO DO THIS THOUGH I'VE STUDIED SO MUCH UGH BUT I DONT EVEN UNDERSTAND WAWWWHAT



#pragma once
#include<string>
using std::string;

class Location {
private:
	int static MAX_NO_OF_SEATS;
	int noRows;
	string city;	
	string sector;	//district, arrondissement
	string number;	//it is a string because the number can be e.g. 37A
};


// it will allow reading the characteristics of the event location 
// (eg: maximum number of seats, number of rows , zones, number/coding 
// of seats per row, etc.)