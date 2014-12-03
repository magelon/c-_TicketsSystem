#ifndef PLANE_H
#define PLANE_H
#include <iostream>
#include <string>
using namespace std;
class Person
{
private:
	string fn;//first_name;
	string ln;//last_name;
	string ge;//gender;
	int age;
	string ad;//address;
	string ct;//city;
	string st;//state;
	int zp;//zip_code;
	int ph;//phone_number;
public:
	Person();//default constructor
	Person(string fn,string ln,string ge,int age,string ad,string ct,string st,int zp,int ph);//fn(fn),ln(ln),ge(ge),age(age),ad(ad),ct(ct),st(st),zp(zp),ph(ph){}//user defined constructor
	//Person(const Person & myPerson);//copy constructor
	void setFn(string fn);
	void setLn(string ln);
	void setGe(string ge);
	void setAge(int age);
	void setAd(string ad);
	void setCt(string ct);
	void setSt(string st);
	void setZp(int zp);
	void setPh(int ph);
	string getFn();
	string getLn();
	string getGe();
	int getAge();
	string getAd();
	string getCt();
	string getSt();
	int getZp();
	int getPh();
	void Dispaly();

	~Person();//deconstructor


};
class Pilot:public Person
{
private:
	int flight_hour;
	string position;//captain or copilot
	Person person1;
public:
	Pilot();//default constructor
	Pilot(int flight_hour,string position,Person person1);//user define
	void setFlight_hour(int flight_hour);
	int getFlight_hour();
	void setPosition(string position);
	string getPosition();
	void Dispaly();//dispaly imformations
	~Pilot();
};
class FlightAttendance:public Person
{
private:
	Person person2;
	int height;
	int weight;
	string position;//purser or crew member
public:
	void setHeight(int height);
	int getHeight();
	void setWeight(int weight);
	int getWeight();
	void setPosition(string position);
	string getPosition();
	void Dispaly();
	~FlightAttendance();
};

class Airline
{
private:
	string start_city;
	string land_city;
	string start_time;
	string land_time;
	int flight_hour;//land_time-start_time
	string company;//Delta,American,Airlines,United
	int id;
	string type;//(AIRBUS A320 or Boeing 757)
	int pilots;
	int	flight_attendances;
public:
	Airline();
	Airline(string start_city,string land_city,string start_time,string land_time,int flight_hour,string company,int id,string type,int pilots,int	flight_attendances);

		void setStart_city(string start_city);
		void setLand_city(string land_city);
		void setStart_time(string start_time);
		void setLand_time(string land_time);
		void setFlight_hour(int flight_hour);
		void setCompany(string company);
		void setId(int id);
		void setType(string type);
		void setPilots(int pilots);
		void setFlight_attendances(int flight_attendences);
		string getStart_city();
		string getLand_city();
		string getStart_time();
		string getLand_time();
		int	   getFlight_hour();
		string getCompany();
		int    getId();
		string getType();
		int    getPilots();
		int    getFlight_attendances();
	void Dispaly();
		~Airline();
};


class Ticket
{
private:
	int number;
	int price;
	string airline;
	string passenger;
public:
	Ticket();
	Ticket(int number,
	int price,
	string airline,
	string passenger);
	void setNumber(int number);
	int getNumber();
	void setPrice(int price);
	int getPrice();
	void setAirline(string airline);
	string getAirline();
	void setPassenger(string passenger);
	string getPassenger();
	void Dispaly();
	~Ticket();
};


void check(int a,int b,int c);



#endif 