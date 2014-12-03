#include<iostream>
#include<iomanip>
#include<conio.h>
#include<string.h>
#include<string>
#include<windows.h>
#include<fstream>
using namespace std;

char l_destination[5][20]={"CALIFORNIA","TEXAX","ATLANTA","FLORIDA","VIRGINIA"};
char i_destination[10][20]={"LONDON","BERLIN","DUBAI","NEW YORK","BEIJING","PARIS","CAPE TOWN","TOKYO","LOS ANGELES","MUMBAI" };

class Person
{
private:
	string fname;
	string lname;
	string gender;
	int age;
	string phone;
	string address;
	string city;
	string state;
	int zip;
public:
	Person(){}
	Person(string fna,string lna, string gen,int ag,string ph, string add, string ct,string st, int zp):
		fname(fna),lname(lna),gender(gen),age(ag),phone(ph),address(add),city(ct),state(st),zip(zp){}
	
	void setFirstname(string fna)
	{
		fname=fna;
	}
	string getFirstname()
	{
		return fname;
	}
	void setLastname(string lna)
	{
		lname=lna;
	}
	string getLastname()
	{
		return lname;
	}
	void setGender(string gen)
	{
		gender=gen;
	}
	string getGender()
	{
		return gender;
	}
	void setAge(int a)
	{
		age=a;
	}
	int getAge()
	{
		return age;
	}
	void setPhone(string ph)
	{
		phone=ph;
	}
	string getPhone()
	{
		return phone;
	}
	void setAddress(string ad)
	{
		address=ad;
	}
	string getAddress()
	{
		return address;
	}
	void setCity(string ct)
	{
		city=ct;
	}
	string getCity()
	{
		return city;
	}
	void setState(string st)
	{
		state=st;
	}
	string getState()
	{
		return state;
	}
	void setZIP(int zp)
	{
		zip=zp;
	}
	int getZIP()
	{
		return zip;
	}
	void Display()
	{
		cout<<"\tFirst Name:		"<<fname<<endl;
		cout<<"\tLast Name:		"<<lname<<endl;
		cout<<"\tGender:			"<<gender<<endl;
		cout<<"\tAge:			"<<age<<endl;
		cout<<"\tPhone:			"<<phone<<endl;
		cout<<"\tAddress:		"<<address<<endl;
		cout<<"\tCity:			"<<city<<endl;
		cout<<"\tState:			"<<state<<endl;
		cout<<"\tZIP:			"<<zip<<endl;
	}
	~ Person(){}
};


class Pilot:public Person
{
	int flight_hour; 
	string position;
public:
	Pilot(){}
	Pilot(string fna,string lna, string gen,int ag,string ph, string add, string ct,string st, int zp,int fh, string pos):
		Person(fna,lna,gen,ag,ph,add,ct,st,zp), flight_hour(fh),position(pos){}
	void setFlight_hour(int fh)
	{
		flight_hour=fh;
	}
	int getFlight_hour()
	{
		return flight_hour;
	}
	void setPosition(string po)
	{
		position=po;
	}
	string getPosition()
	{
		return position;
	}
	
};


class FlightAttendence:public Person
{
	int height;
	int weight;
	string position;
public:
	FlightAttendence(){}
	FlightAttendence(string fnam,string lnam, string gend,int age,string phn, string addr, string cit,string sta, int zip,int ht,int wt, string posi):
		Person(fnam,lnam,gend,age,phn,addr,cit,sta,zip),height(ht),weight(wt),position(posi){}
	void setHeight(int ht)
	{
		height=ht;
	}
	int getHeight()
	{
		return height;
	}
	void setWeight(int wt)
	{
		weight=wt;
	}
	int getWeight()
	{
		return weight;
	}
	void setPosition(string po)
	{
		position=po;
	}
	string getPosition()
	{
		return position;
	}
};

class passenger
{
protected:
	int num;
	char firstname[60];
	char lastname[60];
	char address[60];
	char c_loc[30];
	char dest[30];
	char reservation_no[60];
	int option;
public:
	void getpsndata()
	{
		Sleep(500);
		Sleep(500);
		Sleep(500);
		Sleep(500);
		Sleep(500);
		system("CLS");
		//try{
		cout<<setw(40)<<"\n\n\t     ::Please enter the required information for passenger::"<<endl; 
		cout<<"\n\t	Enter the firstname of passenger: ";
		cin.getline(firstname,60);
	
		//if(strcmp(firstname," "))
		//if(firstname == " ")
		//{throw "Passenger must have a firs name! Try again";}
		cout<<endl;
		cout<<"\t	Enter the lastname of passenger: ";
		cin.getline(lastname,60);
		cout<<endl;
		cout<<"\t	Enter address of passenger:  ";
		cin.getline(address,60);
		cout<<endl;
		cout<<"\t	Enter the Resevation No. of Ticket: ";
		cin.getline(reservation_no,60);
		//if(reservation_no ==0) {throw "Passenger must have a firs name! Try again";}
		cout<<endl;
		cout<<"\t	Enter the current location of passenger";
		cout<<"\n\t	(IN CAPITAL LETTERS ONLY):  ";
		cin.getline(c_loc,60);
		cout<<"\t	Enter the destination of passenger ";
		cout<<"\n\t	(IN CAPITAL LETTERS ONLY):  ";
		cin.getline(dest,60);//}
		//catch(const char *str)
	//{
		//cout <<"\t\t"<< str << '\n';
		//getpsndata();
	//}
		cout<<endl<<endl;
		system("CLS");
		int k=0;
		int p=0;
		for(int j=0;j<5;j++)
		{
			if(strcmp(l_destination[j],c_loc)==0)
			{
				k++;
			}
		}
		for( int i=0;i<10;i++)
		{
			if(strcmp(i_destination[i],dest)==0)
			{
				p++;
			}
		}
		if(k==1&&p==1)
		{
			cout<<"			 FLIGHT AVAILABLE ON THIS ROUTE"<<endl;
			int b_seat=30;
			int e_seat=40;
			cout<<"\n\n\n\n\n\n";
			cout<<setw(60)<<"*************************************"<<endl;
			cout<<setw(60)<<"*     Press 1 for buisness class    *"<<endl;
			cout<<setw(60)<<"*     Press 2 for economy class     *"<<endl;
			cout<<setw(60)<<"*************************************"<<endl<<endl<<endl<<endl;
			cout<<"  			Enter your choice: ";
			int ch=0;
			cin>>ch;
			cout<<endl;
			switch(ch)
			{
			case 1:
				b_seat--;
				if(b_seat<=0)
					cout<<"SORRY NO SEAT AVAILABLE"<<endl;
				else
					cout<<"SEAT AVAILABLE"<<endl;
				break;
			case 2:
				e_seat--;
				if(e_seat<=0)
					cout<<"SORRY NO SEAT AVAILABLE"<<endl;
				else
					cout<<"SEAT AVAILABLE"<<endl;
				break;
				int b;
				cin>>b;
			}
			system("CLS");
			if(ch==1)
			{
				cout<<"|                                                                         "<<endl;
				cout<<"	|Ticket Information: "<<endl;
				cout<<"	|BUISNESS CLASS "<<endl;
				ofstream outfile;
				outfile.open("E:\\E_ticket.txt",ios::app);
				outfile<<"|                                                                         "<<endl<<
        "|Ticket Information:                                                      "<<endl<<
        "|BUISNESS CLASS                                                           "<<endl;
			}
			if(ch==2)
			{
				cout<<" "<<endl;
				cout<<"	|Ticket Information: "<<endl;
				cout<<"	|ECONOMY CLASS "<<endl;
				ofstream outfile;
				outfile.open("E:\\E_ticket.txt",ios::app);
				outfile<<"|                                                                         "<<endl<<
        "|Ticket Information:                                                      "<<endl<<
        "|ECONOMY CLASS                                                           "<<endl;
			}
			cout<<"	|Status: confirmed"<<endl<<endl;
			ofstream outfile;
			outfile.open("E:\\E_ticket.txt",ios::app);
			outfile<<"|Status: confirmed                                                        "<<endl;
			Sleep(500);
			Sleep(500);
			Sleep(500);
		Sleep(500);
			system("CLS");
			show();
		}
		else
		{

			cout<<"__________________________________________________________________________"<<endl;

			cout<<"|     SORRY NO FLIGHT AVAILABLE ON THIS ROUTE RIGHT NOW                   "<<endl;

			cout<<"__________________________________________________________________________"<<endl;
		}
}

void show()
{
	cout<<setw(40)<<" Your E-Ticket"<<endl<<endl;
	int t=1;
	int r=12345;
	cout<<"                           AIRLINE TICKET                               "<<endl;
	cout<<"|Ticket No."<<t<<"                                Reference No."<<r<<"\t"<<endl;
	cout<<"|_______________________________________________________________________"<<endl;
	cout<<"|Resevation No. :"<<reservation_no<<"                                   "<<endl;
	cout<<"|_______________________________________________________________________"<<endl;
	cout<<"|Passenger Information :                                                "<<endl;
	cout<<"|Name :"<<lastname<<"  "<<firstname<<"                                  "<<endl;
	cout<<"|                                                                       "<<endl;
	cout<<"|Address :"<<address<<"                                                 "<<endl;
	cout<<"|_______________________________________________________________________"<<endl;
	cout<<"|flight Information :                                                   "<<endl;
	cout<<"|12 aug 2011                                                            "<<endl;
	cout<<"|BOING 747                                                              "<<endl;
	cout<<"|_______________________________________________________________________"<<endl;
	cout<<"|Depart :"<<c_loc<<"                                                    "<<endl;
	cout<<"|Arrive :"<<dest<<"                                                     "<<endl;
	cout<<"|*BAGGAGE allowed 40 Kilos                                              "<<endl;
	cout<<"|*contact Airline to Confirm baggage allowance                          "<<endl;
	cout<<"|_______________________________________________________________________"<<endl;


 
	ofstream outfile("E:\\E_ticket.txt");
	outfile<<"                           AIRLINE TICKET                       "<<endl<<
   "|Ticket No."<<t<<"                                Reference No."<<r<<"\t  "<<endl<<
   "|_________________________________________________________________________"<<endl<<
   "|Resevation No. :"<<reservation_no<<"                                     "<<endl<<
   "|_________________________________________________________________________"<<endl<<
   "|Passenger Information :                                                  "<<endl<<
   "|Name :"<<lastname<<"/"<<firstname<<"                                     "<<endl<<
   "|                                                                         "<<endl<<
   "|Address :"<<address<<"                                                   "<<endl<<
   "|_________________________________________________________________________"<<endl<<
   "|flight Information :                                                     "<<endl<<
   "|12 aug 2011                                                              "<<endl<<
   "|BOING 747                                                                "<<endl<<
   "|_________________________________________________________________________"<<endl<<
   "|Depart :"<<c_loc<<"                                                      "<<endl<<
   "|Arrive :"<<dest<<"                                                       "<<endl<<
   "|*BAGGAGE allowed 40 Kilos                                                "<<endl<<
   "|*contact Airline to Confirm baggage allowance                            "<<endl<<
   "|_________________________________________________________________________"<<endl;
	t=t+1;
	r=r+1;
}
};

class Airline
{
private:
	string start_city;
	string land_city;
	int start_time;
	int land_time;
	int flight_hour;
	string company;
	int ID;
	string type;
	Pilot pl;
	FlightAttendence fla;
public:
	Airline(){}
	Airline(string sc,string lc,int srt,int lnt,int fth,string com,int id,string tp):
	start_city(sc),land_city(lc),start_time(srt),land_time(lnt),flight_hour(fth),company(com),ID(id),type(tp){}
    void setStartCity(string sc)
	{
		start_city=sc;
	}
	string getStartCity()
	{
		return start_city;
	}
	void setLandCity(string lc)
	{
		land_city=lc;
	}
	string getlandCity()
	{
		return land_city;
	}
	void setStartTime(int st)
	{
		start_time=st;
	}
	int getStartTime()
	{
		return start_time;
	}
	void setLandTime(int lt)
	{
		land_time=lt;
	}
	int getLandTime()
	{
		return land_time;
	}
	int getFlightHour()
	{
		return start_time-land_time;
	}
	void setCompany(string com)
	{
		company=com;
	}
	string getCompany()
	{
		return company;
	}
	void setID(int id)
	{
		ID=id;
	}
	int getID()
	{
		return ID;
	}
	void setType(string tp)
	{
		type=tp;
	}
	string getType()
	{
		return type;
	}
	void Display()
	{
		cout<<"start city: "<<start_city<<endl;
		cout<<"land city: "<<land_city<<endl;
		cout<<"start time: "<<start_time<<endl;
		cout<<"land time: "<<land_time<<endl;
		cout<<"flight_hour: "<<flight_hour<<endl;
		cout<<"company: "<<company<<endl;
		cout<<"ID: "<<ID<<endl;
		cout<<"Type: "<<type<<endl;
	}
};

class Ticket
{
private:
	int ticket_number;
	float price;
	int numberOfPassenger;
	Airline air;
	string airName;
	string destination;
public:
	Ticket(){}
	Ticket(int num,float pr, int passn):ticket_number(num),price(pr),numberOfPassenger(passn){}
	void setTicket_number(int t)
	{
		ticket_number=t;
	}
	int getTicket_number()
	{
		return ticket_number;
	}
	void setPrice(float t)
	{
		price=t;
	}
	float getPrice()
	{
		return price;
	}
	void setNumberOfPassenger(int t)
	{
		 numberOfPassenger=t;
	}
	int getNumberOfPassenger()
	{
		return  numberOfPassenger;
	}
	void setAirName(string com)
	{
		airName=com;
	}
	string getAirname()
	{
		return airName;
	}
	void setDes(string com)
	{
		destination=com;
	}
	string getdes()
	{
		return destination;
	}
    void display()
	{
		cout<<"\n\t\tNumber of ticket:	"<<ticket_number<<endl;
		cout<<"\t\tPrice for each seat:	$"<<price<<endl;
		cout<<"\t\tNumber Of Passenger:	"<<numberOfPassenger<<endl;
		passenger psn;
		psn.getpsndata();
	}

};



int main()
{
	////just show////
	SetConsoleTitle(L"AIRWAYS TICKETING");
	system("color 5f");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\t    WELCOME TO AIRWAYS TICKETING SYSTEM";
    Sleep(500);
    system ("cls");
    cout<<"\n\n\n\n\n\n\n\t\t          Developed by :";
    Sleep(500);
    cout<<" SHAHIDUL ISLAM";
    Sleep(500);
    cout<<"\n\n\n\t\t               SHAHED & GUOJINDONG";
	cout<<"\n\n\n\t\t                 10580 & 10435";
    Sleep(300);Sleep(500); Sleep(500); Sleep(500);
    system("cls");
 Sleep(500); Sleep(500); Sleep(500);
	//show end//
	
	////strart from here/////
	Pilot p;
	FlightAttendence fl;
	Airline ar;
	Ticket tk;
	char Airlines[5][30] ={"AIR BLUE","ARAB EMIRATES","QATAR AIRWAYS","SINGAPUR AIRLINES","AMERICAN AIRLINES" };
	char idestination[10][20]={"LONDON","BERLIN","DUBAI","NEW YORK","BEIJING","PARIS","CAPE TOWN","TOKYO","DHAKA","MUMBAI" };
	char ldestination[10][20]={"CALIFORNIA","TEXAX","ATLANTA","FLORIDA","VIRGINIA","ARIZONA","COLORADO","ALASKA","LOS ANGELES","OREGON"};
	char pilot_fname[5][20]={"John","Sin","Shan","Shahidul","Islam"};
	char pilot_lname[5][20]={"linda","Zang","Shahed","Islam","Khan"};
	char pilot_sex[5][20]={"Female","Female","Male","Male","Male"};
	int pilot_age[5]={54,23,43,54,32};
	char pilot_phone[5][30]={"(510-324-2231)","(232-342-3233)","(534-232-1344)","(323-235-2323)","(532-254-6745)"};
	char pilot_address[5][30]={"Fremont blbd","Nework dr","","Milmont dr","Milpitas dixon"};
	char pilot_city[5][30]={"Milpitas","Fremont","Sunyveil","Nework","Sanjose"};
	char pilot_state[5][30]={"TEXAX","PARIS","NEW YORK","DUBAI","LONDON"};
	int pilot_zip[5]={50334,20323,40323,50234,30232};
	int pilot_hour[5]={9,8,14,8,12};
	char pilot_position[5][30]={"Pilot","Pilot","Pilot","Pilot","Pilot"};
	float FlightAttendence_height[5]={5.7,5.8,6.2,5.9,6.3};
	int FlightAttendence_weight[5]={65,58,74,68,82};
	char FlightAttendence_position[5][30]={"Purser","Crew member,","Purser","Purser","Crew member"};
	char back;
	cout<<"\t		WELLCOME TO TICKETING SYSTEM"<<endl;
	int will=1,i,num;
	////start main menu////
m:
	printf("\n\t	1.Press 1 for ticket information \n");
	printf("\t	2.Press 2 for Airline information\n\t	3.Press 3 to exit:");
	scanf("%d",&will);
	system("cls");
	try{ //// start of Exception handling
	switch(will) 
	{ 
	case 1:
		printf("	***wellcome ticket information***\n");
		cout<<"\n	Airlines for this week :"<<endl;
		for(int i=0;i<5;i++)
		{
			tk.setAirName(Airlines[i]);
			cout<<"	"<<i+1<<") "<<tk.getAirname()<<endl;
		}

		////start airlines menu under main menu case 1 ////
		int option;
		cout<<endl<<endl<<"	press 1 for AIR BLUE"<<endl;
		cout<<"	press 2 for ARAB EMIRATES"<<endl;
		cout<<"	press 3 for QATAR AIRWAYS"<<endl;
		cout<<"	press 4 for SINGAPUR AIRLINES"<<endl;
		cout<<"	press 5 for AMERICAN AIRLINES"<<endl;
		cout<<"	Enter your choice: ";
		cin>>option;
		system ("cls");
		switch(option)
		{
		case 1:
			if(option==1)
				cout<<setw(40)<<"\n\n                       WELCOME TO AIRBLUE"<<endl<<endl;
			cout<<setw(40)<<"\n		THESE ARE THE PLACES AVAILABLE\n\n\n"<<endl;
			cin.ignore();
			for(int i=0;i<10;i++)
			{
		
				tk.setDes(idestination[i]);
				cout<<"\t\t"<<tk.getdes()<<endl;
			}
			cout<<"\n\n";
			 Sleep(300);Sleep(500); Sleep(500); Sleep(500);
			  Sleep(300);Sleep(500); Sleep(500); Sleep(500);
			break;
		case 2:
			if(option==2)
				cout<<setw(40)<<"\n\n                       WELCOME TO ARAB EMIRATES"<<endl<<endl;
			cout<<setw(40)<<"\n\t\tTHESE ARE THE PLACES AVAILABLE\n\n\n"<<endl;
			cin.ignore();
			for(int i=0;i<10;i++)
			{
				tk.setDes(idestination[i]);
				cout<<"\t\t"<<tk.getdes()<<endl;
			}
			 Sleep(300);Sleep(500); Sleep(500); Sleep(500);
			  Sleep(300);Sleep(500); Sleep(500); Sleep(500);
			break;
		case 3:
			if(option==3)
				cout<<setw(40)<<"\n\n                       WELCOME TO QATAR AIRWAYS"<<endl<<endl;
			cout<<setw(40)<<"\n\tTHESE ARE THE PLACES AVAILABLE\n\n\n"<<endl;
			cin.ignore();
			for(int i=0;i<10;i++)
	
			{
		
				tk.setDes(idestination[i]);
				cout<<"\t\t"<<tk.getdes()<<endl;
			}
			 Sleep(300);Sleep(500); Sleep(500); Sleep(500);
			  Sleep(300);Sleep(500); Sleep(500); Sleep(500);
			break;
		case 4:
			if (option==4)
				cout<<setw(40)<<"\n\n                       WELCOME TO SINGAPUR AIRLINES"<<endl<<endl;
			cout<<setw(40)<<"\n\tTHESE ARE THE PLACES AVAILABLE\n\n\n"<<endl;
			cin.ignore();
			for(int i=0;i<10;i++)
			{
				tk.setDes(idestination[i]);
				cout<<"\t\t"<<tk.getdes()<<endl;
			}
			 Sleep(300);Sleep(500); Sleep(500); Sleep(500);
			  Sleep(300);Sleep(500); Sleep(500); Sleep(500);
			break;
		case 5:
			if (option==5)
				cout<<setw(40)<<"\n\n                       WELCOME TO AMERICAN AIRLINES"<<endl<<endl;
			cout<<setw(40)<<"\n\tTHESE ARE THE PLACES AVAILABLE\n\n\n"<<endl;
			cin.ignore();
			for(int i=0;i<10;i++)
			{
				tk.setDes(idestination[i]);
				cout<<"\t\t"<<tk.getdes()<<endl;
			}
			 Sleep(300);Sleep(500); Sleep(500); Sleep(500);
			  Sleep(300);Sleep(500); Sleep(500); Sleep(500);
			break;
		}
		////end airlines menu under main menu case 1 ////

		tk.setTicket_number(70);tk.setPrice(1200.00);tk.setNumberOfPassenger(70);
		tk.display();
		cout<<"	**To Go To Main Menu Press b: ";
		cin>>back;
		system("CLS");
		if (back=='b')
		{
		   goto m;
		}
		else
		{
		   cout<<"\n\n\n\n\n\n";
		   cout<<setw(40)<<"BYE FROM AIR TICKETING SYSTEM\n";
		}
		break;////end main menu case 1 ////

		////start main menu case 2////
	case 2:
		printf("	wellcome Airline infofrmation \n\n");
		cout<<"   FOLLOWING ARE THE INTERNATIONAL FLIGHTS SCHEDULE"<<endl<<endl;
		for(int i=0;i<5;i++)
		{
			int k=5;
			cout<<"	Date: 1"<<i<<"/"<<"06"<<"/"<<"2014"<<endl;
			Sleep(500);
			ar.setStartCity(idestination[i]);
			for(int j=0;j<10;j++)
			{
				k++;
				ar.setLandCity(ldestination[j]);
				cout<<"	FLIGHT FROM "<<ar.getStartCity()<<" TO "<<ar.getlandCity()<<endl;
				ar.setStartTime(j+2); ar.setLandTime(j+k);
				cout<<"	Start time "<<ar.getStartTime()<<":00	"<<"Land time"<<ar.getLandTime()<<":00"<<endl;
				cout<<"	Flight hour "<<ar.getStartTime() - ar.getLandTime()<<":00"<<endl<<endl;
			}
			cout<<"\n\n\n";
		}
		////start pilot flightattendence menu under main menu case 2//
		printf("\n	1.Press 1 for pilot information\n	2.Press 2 for FlightAttendance information \n");
		printf("	3.Press 3 to exit. ");
		cout<<"\n	Enter your choice: ";
		int opt;
		cin>>opt;
		system ("cls");
		switch(opt)
		{
		case 1:
			if (opt==1)
				cout<<setw(40)<<"\n\n\n\t\tWELCOME TO PILOT INFORMATION"<<endl;
			cout <<"\t*** pilot attendence for this week ***"<<endl;
			for(int i=0;i<5;i++)
			{
				Person p1;
				p1.setFirstname(pilot_fname[i]);p1.setLastname(pilot_lname[i]);p1.setGender(pilot_sex[i]);
				p1.setAddress(pilot_address[i]);p1.setAge(pilot_age[0]);p1.setPhone(pilot_phone[i]);
				p1.setState(pilot_state[i]);p1.setCity(pilot_city[i]);p1.setZIP(pilot_zip[i]);
				cout <<"\tID :			"<<"250"<<i+1<<endl;
				p1.Display();
				cout<<"\tFlight hour:		"<<pilot_hour[0]<<endl;
				cout <<"\tposition:		"<<FlightAttendence_position[0]<<endl;
				cout<<endl;
			}
			break;
		case 2:
			if(opt==2)
				cout<<setw(40)<<"\n\n\n\t\tWELCOME TO FLIGHTATTENDENCE INFORMATION"<<endl;
			cout <<"\t\t*** flight attendence for this week ***"<<endl;
			for(int i=0;i<5;i++)
			{
				Person p1;
				p1.setFirstname(pilot_fname[i]);p1.setLastname(pilot_lname[i]);p1.setGender(pilot_sex[i]);
				p1.setAddress(pilot_address[i]);p1.setAge(pilot_age[0]);p1.setPhone(pilot_phone[i]);
				p1.setState(pilot_state[i]);p1.setCity(pilot_city[i]);p1.setZIP(pilot_zip[i]);
				cout <<"\tID :			"<<"250"<<i+1<<endl;
				p1.Display();
				cout<<"\tFlight hour:		"<<pilot_hour[0]<<endl;
				cout<<"\tposition:		"<<FlightAttendence_position[0]<<endl;
				cout<<"\tWeight:			"<<FlightAttendence_weight[0]<<endl;
				cout<<"\tHeight:			"<<FlightAttendence_height[0]<<endl;
				cout<<endl;
			}
			break;
		case 3:
			if(opt==3)
				exit(0);
			break;
		}////end pilot flightattendence menu under main menu case 2//

		cout<<"\t\tTo Go To Main Menu Press b: ";
		cin>>back;
		system("CLS");
		if (back=='b')
		{
		   goto m;
		}
		else
		{
		   cout<<"\n\n\n\n\n\n";
		   cout<<setw(40)<<"\tBYE FROM AIR TICKETING SYSTEM\n   ";
		   cout<<"\t";
		}
		break;
		////end main menu case 2 ////

		////start main menu case 3////
	case 3:

		printf("	Thank you.. bye bye..\n   ");
	default:
		printf("	Oh: Dear sorry ! Invalid Choice try again . \n   ");
		break;
} 
}//End of Exception handling
catch(string error)
{
	cout <<error<<endl;
}
////end main menu ////
return 0;
}//// end of main ////