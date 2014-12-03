#include "plane.h"
#include <iostream>
#include <fstream>
#include <string>


#include <vector>
#include <algorithm>



Person::Person(){}
Person::Person(string fn,string ln,string ge,int age,string ad,string ct,string st,int zp,int ph):
fn(fn),ln(ln),ge(ge),age(age),ad(ad),ct(ct),st(st),zp(zp),ph(ph){}//user defined constructor

void Person ::setFn(string fn){this->fn=fn;}
void Person ::setLn(string ln){this->ln=ln;}
void Person ::setGe(string ge){this->ge=ge;}
void Person ::setAge(int age){this->age=age;}
void Person ::setAd(string ad){this->ad=ad;}
void Person ::setCt(string ct){this->ct=ct;}
void Person ::setSt(string st){this->st=st;}
void Person ::setZp(int zp){this->zp=zp;}
void Person ::setPh(int ph){this->ph=ph;}
string Person ::getFn(){return fn;}
string Person ::getLn(){return ln;}
string Person ::getGe(){return ge;}
int Person ::getAge(){return age;}
string Person ::getAd(){return ad;}
string Person ::getCt(){return ct;}
string Person ::getSt(){return st;}
int Person ::getZp(){return zp;}
int Person ::getPh(){return ph;}
void Person ::Dispaly(){
cout<<"firstname:"<<getFn()<<endl;
cout<<"lastname:"<<getLn()<<endl;
cout<<"gender:"<<getGe()<<endl;
cout<<"age:"<<getAge()<<endl;
cout<<"address:"<<getAd()<<endl;
cout<<"city:"<<getCt()<<endl;
cout<<"state:"<<getSt()<<endl;
cout<<"zip:"<<getZp()<<endl;
cout<<"phone_number:"<<getPh()<<endl;
}
Person::~Person(){}


Pilot::Pilot(int flight_hour,string position,Person person1):flight_hour(flight_hour),position(position),person1(person1){}
void Pilot::setFlight_hour(int flight_hour){this->flight_hour=flight_hour;}
int Pilot::getFlight_hour(){return flight_hour;}
void Pilot::setPosition(string position){this->position=position;}
string Pilot::getPosition(){return position;}
void Pilot::Dispaly(){
	cout<<"Flight_hour:"<<getFlight_hour()<<endl;
	cout<<"Position:"<<getPosition()<<endl;
	person1.Dispaly();
}


void FlightAttendance::setHeight(int height){this->height=height;}
int FlightAttendance::getHeight(){return height;}
void FlightAttendance::setWeight(int weight){this->weight=weight;}
int FlightAttendance::getWeight(){return weight;}
void FlightAttendance::setPosition(string position){this->position=position;}
string FlightAttendance::getPosition(){return position;}
void FlightAttendance::Dispaly(){
cout<<"Height:"<<getHeight()<<endl;
cout<<"weight:"<<getWeight()<<endl;
cout<<"Position:"<<getPosition()<<endl;
person2.Dispaly();
}



Airline::Airline(string start_city,string land_city,string start_time,string land_time,int flight_hour,string company,int id,string type,int pilots,int	flight_attendances):land_city(land_city),start_time(start_time),land_time(land_time),flight_hour(flight_hour),company(company),id(id),type(type),pilots(pilots),flight_attendances(flight_attendances){}
void Airline::setStart_city(string start_city){this->start_city;}
void Airline::setLand_city(string land_city){this->land_city;}
void Airline::setStart_time(string start_time){this->start_time;}
void Airline::setLand_time(string land_time){this->land_time=land_time;}
void Airline::setFlight_hour(int flight_hour){this->flight_hour=flight_hour;}
void Airline::setCompany(string company){this->company=company;}
void Airline::setId(int id){this->id=id;}
void Airline::setType(string type){this->type=type;}
void Airline::setPilots(int pilots){this->pilots=pilots;}
void Airline::setFlight_attendances(int flight_attendences){this->flight_attendances=flight_attendances;}
string Airline::getStart_city(){return start_city;}
string Airline::getLand_city(){return land_city;}
string Airline::getStart_time(){return start_time;}
string Airline::getLand_time(){return land_time;}
int	   Airline::getFlight_hour(){return flight_hour;}
string Airline::getCompany(){return company;}
int    Airline::getId(){return id;}
string Airline::getType(){return type;}
int    Airline::getPilots(){return pilots;}
		int    Airline::getFlight_attendances(){return flight_attendances;}
		void Airline::Dispaly()
		{
		cout<<"start city:"<<getStart_city()<<endl;
		cout<<"land city:"<<getLand_city()<<endl;
		cout<<"flight hour:"<<getFlight_hour()<<endl;
		cout<<"company:"<<getCompany()<<endl;
		cout<<"id:"<<getId()<<endl;
		cout<<"type:"<<getType()<<endl;
		cout<<"pilots:"<<getPilots()<<endl;
		cout<<"flight attendances:"<<getFlight_attendances()<<endl;
		}
Airline::~Airline(){}


Ticket::Ticket(int number,int price,string airline,string passenger):number(number),price(price),airline(airline),passenger(passenger){}
void Ticket::setNumber(int number){this->number=number;}
int Ticket::getNumber(){return number;}
void Ticket::setPrice(int price){this->price=price;}
int Ticket::getPrice(){return price;}
void Ticket::setAirline(string airline){this->airline=airline;}
string Ticket::getAirline(){return airline;}
void Ticket::setPassenger(string passenger){this->passenger=passenger;}
string Ticket::getPassenger(){return passenger;}
void Ticket::Dispaly(){
cout<<"number:"<<getNumber()<<endl;
cout<<"price:"<<getPrice()<<endl;
cout<<"airline:"<<getAirline()<<endl;
cout<<"passenger:"<<getPassenger()<<endl;
}
Ticket::~Ticket(){};



void check(int test)
	{
		if(test<=0)
		{
		throw 0;
		}
		else if(test>=3)
		{
		throw 1;
		}
	
	}


int main() 
{
	Person person1;
	string line;
	int test;
	cout<<"1.checking airline:"<<endl;
	cout<<"2.purches tickets option:"<<endl;
	cout<<"enter a number to start:"<<endl;
	cin>>test;
try{
check(test);
}
catch(int e)
{
if(e==0)
	cout<<"number should not smaller than 1!"<<endl;
else if(e==1)
	cout <<"the number is too big!"<<endl;
}
while(true){
switch ( test ) {

  case 1 : 
	{
	ifstream myfile("airlines_week.txt");
	if(myfile.is_open())
	{
	while(getline(myfile,line))
	{
	cout<<line<<'\n';
	}
	myfile.close();
	}
	else cout<<"Unable to open file"<<endl;
	}
 
    break;

  case 2 : 
	  {
    cout<<" your firstname:"<<endl;
	cin>>person1.getFn();
	cout<<"your lastname:"<<endl;
	cin>>person1.getLn();
	person1.Dispaly();
	cout<<"Thank for your purchase."<<endl;

	  }
    break;

  default : 
   ;

}
}
  

}