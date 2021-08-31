#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
char st[20],d[20];                                               //global variable declaration
 int member,type;
 double m;
 double store;
 double RET;
 char name[20];
 int age;
 long long int mobile;
 char surname[20];
 	int c;
 	int price;
   double Return;
 	double  dis;
 	char Date[10];
 	int days;
 	int del;                                                   //global variable declaration

void online();                                                 //function declaration
void offline();
int sleeperAC(int);
int nonACsleeper(int);
int seaterAC(int);
int nonACseater(int);
int cancel();
void Name();
void Surname();
void Mobile();
void Age();
void date();



class railway                                             //class definition
{  
	   private:
	   	int total;
	
       public:
       	void getTOTAL(int m)
       	{
       		total=m;
		}
		friend float bill(railway);                              //friend function declaration
     	
		railway()                                                //constructor
		{
		   
			cout<<"-MY NAME IS VILAS ADMANE\n";
			cout<<"-MY ROLL NO IS MC20144\n";
			cout<<"-MCA I-SEM\n";
			cout<<"-MY PROJECT IS OF RAILWAY RESERVATION\n\n\n";
			cout<<"PLEASE PRESS ENTER TO CONTINUE";
              getch();
		}
		~railway(){                                                 //destructor
			       
	           	}
		int sleeperAC(int member)                                   //member function of railway class 
		{
			cout<<"\nFOR THIS CLASS CHARGES OF 1KM IS 3 RUPEES\n ";
	 	cout<<"PLEASE ENTER THE DISTANCE YOU ARE GOING TO TRAVELLED \n";
	 	cin>>dis;
	 	dis=dis*3;
			store=dis*member;
			return store;
		}     
		int nonACsleeper(int member)                                 //member function of railway class 
		{
			 cout<<"\nFOR THIS CLASS CHARGES OF 1KM IS 2 RUPEES\n ";
	 	cout<<"PLEASE ENTER THE DISTANCE YOU TRAVELLED \n";
	 	cin>>dis;
	 	dis=dis*2;
				store=dis*member;
			return store;
		} 
		int seaterAC(int member)                                      //member function of railway class 
		{
			cout<<"\nFOR THIS CLASS CHARGES OF 1KM IS 1.5 RUPEES\n ";
	 	cout<<"PLEASE ENTER THE DISTANCE YOU TRAVELLED \n";
	 	cin>>dis;
	 	dis=dis*1.5;
				store=dis*member;
			return store;
		} 
		int nonACseater(int member)                                   //member function of railway class 
		{
			cout<<"\nFOR THIS CLASS CHARGES OF 1KM IS 1 RUPEES\n ";
	 	cout<<"PLEASE ENTER THE DISTANCE YOU TRAVELLED\n";
	 	cin>>dis;
	 	dis=dis*1;
				store=dis*member;
			return store;
		}  
		float cancel()                                                   //member function of railway class 
		{
			cout<<"PLEASE ENTER NO. OF TICKET YOU WANT TO CANCEL ";
			cin>>c;
			if(days<=7)
			{
			RET=(dis/2)*c;
			return RET;
	      	}
	      	else if(days>7 && days <=20)
            {
            	dis=dis*0.3;
            	RET=dis*c;
            	return RET;
			}		
			else if(days>20)
			{
				cout<<"\nSORRY YOU ARE TOO LATE SO AS PER THE INSTRUCTION YOU WILL GET NO MONEY IN RETURN\n";
			}	
			return Return;
		}
		
	
}R1;
float bill(railway BILL)                                           //friend function defination    
{
	cout<<"\nTOTAL AMMOUNT TO BE PAID "<<BILL.total<<" \n";
}
class display                                                       //class
{
	public :
	display()                                                      //constructor of display class
		{
			
		cout<<"\nFOR CANCELATION OF TICKET :-\n";
		cout<<"\t\t\t\tINSTRUCTION\n";
	cout<<"\nFOR YOUR KIND INFORMATION IF YOU ARE CANCEL THE TICKET BEFORE 7 DAYS OF THE BOOKING DATE THEN YOU WILL GET ONLY 50% MONEY IN RETURN\n";
	cout<<"AND IF CANCEL AFTER 7 DAYS AND BEFORE 20 DAYS OF THE BOOKING DATE THEN YOU WILL GET ONLY 30% MONEY IN RETURN\n";
    cout<<"AND IF CANCEL THE TICKET AFTER 20 DAYS OF THE BOOKING DATE THEN YOU WILL GET NO MONEY IN RETURN\n";
	cout<<"\nSO DO YOU WANT TO CANCEL IT PLEASE CHOOSE \n1 FOR CANCELATION\n2 FOR EXIT\n";
	int cancel;
	cin>>cancel;
	cout<<"PLEASE ENTER THE DAYS YOU LATE\n";
	cin>>days;
	
	if(cancel==1)
	{    
		float C;
		C=R1.cancel();
		if(days>20)
		{
			cout<<"\n\n\t\tTHANK YOU!!!!!!\t\t SEE YOU SOON\n";
		}
		else
		{
		cout<<"\nTOTAL RETURN AMMOUNT WILL BE\n"<<C;
		
   	  cout<<"\n\n\n\n\n\n\n\t\t\t\t\tTHANK YOU !!!!! \t SEE YOU SOON\n";
   }
		
		
   }
   else if(cancel==2)
   {
   	   
   	   system("cls");
   	  cout<<"\n\n\n\n\n\n\n\t\t\t\t\tTHANK YOU !!!!! \t SEE YOU SOON\n";
   }
}
};

int main()                                                               //main start
{

     
	 system("cls");
	 
	cout<<"\t\t\t\tPROJECT OF RAILWAY RESERVATION\n\n\n";

	cout<<"\n\n\n\t\t\tMY PROJECT CONTAINS TWO PARTS \n 1. FOR BOOKING OF TICKET \n 2.CANCELATION OF TICKET \n";
	cout<<"\nPLEASE CHOOSE 1 OR 2\n";
	
		int choose;
		cin>>choose;

   if(choose==1)
	{
			cout<<"\t\t\t----------WELCOME TO THE INDIAN RAILWAYS----------\n\n\n";
	int x;
	start:
	cout<<"\n\nCHOOSE 1--> FOR ONLINE BOOKING\nCHOOSE 2--> FOR OFFLINE BOOKING\n";
	cin>>x;
	
	if(x==1)
    {
    		cout<<"For Enquiry:-\n";
	Name();                                                                  //fuction calling
	Surname();
	Age();
	Mobile();
	date();
	
    	     
    	online();                                                            //function calling
    	cout<<"\n\n\t\tTHANK YOU!!!!!!!!\t SEE YOU SOON\n\n\n\n";
    	cout<<"\n\n\t\t\t\t\tAFTER FEW DAYS\n\n";
    	cout<<"\n\nIF YOU WANT CANCEL THE TICKET PLEASE ENTER \n1. FOR YES\n2. FOR NO\n";
    	cin>>del;
    	if(del==1)
    	{
    		
			goto GO;
		}
		else if(del==2){
			cout<<"\n\n\n\t\t\tTHANK YOU!!!!!!!!\t SEE YOU SOON\n";
		}
	}
	if(x==2)
	{
			cout<<"For Enquiry:-\n";
	Name();
	Surname();
	Age();
	Mobile();
	date();
		   
			offline();
			cout<<"\n\n\t\tTHANK YOU!!!!!!!!\t SEE YOU SOON\n\n\n\n";
    	cout<<"\n\n\t\t\t\t\tAFTER FEW DAYS\n\n";
    	cout<<"\n\nIF YOU WANT CANCEL THE TICKET PLEASE ENTER \n1. FOR YES\n2. FOR NO\n";
    	cin>>del;
    	if(del==1)
    	{
    		
			goto GO;
		}
		else if(del==2){
			cout<<"\n\n\n\t\t\tTHANK YOU!!!!!!!!\t SEE YOU SOON\n";
		}
		
			
	      
	}
}
else if(choose==2)
{
	if(m==0)
	{
		cout<<"\n\t\tPLEASE FIRST BOOK THE TICKET\n----------------------------------------------------------------------------------------------\n";
		goto start;
	}
	else
	{    GO:
	   	display d1;
    }
}
	

}                                                          	//main end

    void Name()                                          // function defination 
	{
		
		cout<<"PLEASE ENTER YOUR NAME\n";
		cin>>name;
	}
	void Surname()
	{
		
		cout<<"PLEASE ENTER YOUR SURNAME\n";
		cin>>surname;
	}
	void Age()
	{
		cout<<"PLEASE ENTER YOUR AGE\n";
		cin>>age;
	}
	void Mobile()
	{
	   
		cout<<"PLEASE ENTER YOUR MOBILE NO.\n";
		cin>>mobile;
	}
	void date()
	{
		cout<<"PLEASE ENTER THE DATE ON WHICH YOU ARE BOOKING THE TICKET\nPLEASE ENTER IN THE FORMATE = DD/MM/YYYY\n";
		cin>>Date;
		cout<<endl;
	}
	
	 void online()                                                    // funtion defination 
	 {               
	 	cout<<"\t\t\t Welcome "<<name<<" to online booking ticket\n\n";
	 	
	  cout<<"\nPLEASE ENTER THE STARTING AND END POINT OF THE JOURNEY\n";
         gets(st);
         gets(d);
         
         cout<<"\nENTER THE TOTAL NUMBER OF MEMBER HAVE TO TRAVEL\n";
         cin>>member;
         cout<<"\nENTER THE CLASS YOU WANT TO TRAVEL IN\n";
         cout<<"1. SLEEPER A/C 2. SLEEPER NON A/C 3. SEATER A/C 4. SEATER NON A/C\n";
         cin>>type;
         if(type==1)
         {
         	
			  m=R1.sleeperAC(member);
         	system("cls");
         		R1.getTOTAL(m);
         			bill(R1);
         		cout<<"\n\nPLEASE PRESS ENTER TO CONTINUE NEXT STEPS";
		 	getch();
		 	system("cls");
		 }
		 else if(type==2)
		 {
		 	int m=R1.nonACsleeper(member);
		 	system("cls");
		 		R1.getTOTAL(m);
		 			bill(R1);
		 		cout<<"\n\nPLEASE PRESS ENTER TO CONTINUE NEXT STEPS";
		 	getch();
		 	system("cls");
		 }
		 else if(type==3)
		 {
		 	int m=R1.seaterAC(member);
		 	system("cls");
		 		R1.getTOTAL(m);
		 			bill(R1);
		 		cout<<"\n\nPLEASE PRESS ENTER TO CONTINUE NEXT STEPS";
		 	getch();
		 	system("cls");
		 }
		 else if(type==4)
		 {
		 	int m=R1.nonACseater(member);
		 	system("cls");
		 	R1.getTOTAL(m);
		 			bill(R1);
		 	
		 		cout<<"\n\nPLEASE PRESS ENTER TO CONTINUE NEXT STEPS";
		 	getch();
		 	system("cls");
		 }
         
	} 
	void offline()                                                    // funtion defination 
	{ 
      	cout<<"Welcome to offline booking ticket\n";
	     
	     cout<<"\nPLEASE ENTER THE STARTING AND END POINT OF THE JOURNEY\n";
         gets(st);
         gets(d);
         cout<<"\nENTER THE TOTAL NUMBER OF MEMBER HAVE TO TRAVEL\n";
         cin>>member;
         cout<<"ENTER THE CLASS YOU WANT TO TRAVEL IN\n";
         cout<<"1. SLEEPER A/C 2. SLEEPER NON A/C 3. SEATER A/C 4. SEATER NON A/C\n";
         cin>>type;
         if(type==1)
         {
         	int m=R1.sleeperAC(member);
         	system("cls");
         		R1.getTOTAL(m);
         			bill(R1);
         
         		cout<<"\n\nPLEASE PRESS ENTER TO CONTINUE NEXT STEPS";
		 	getch();
		 	system("cls");
		 }
		 else if(type==2)
		 {
		 	int m=R1.nonACsleeper(member);
		 	system("cls");
		 		R1.getTOTAL(m);
		 			bill(R1);
		 	
		 		cout<<"\n\nPLEASE PRESS ENTER TO CONTINUE NEXT STEPS";
		 	getch();
		 	system("cls");
		 }
		 else if(type==3)
		 {
		 	int m=R1.seaterAC(member);
		 	system("cls");
		 		R1.getTOTAL(m);
		 			bill(R1);
		 
		 		cout<<"\n\nPLEASE PRESS ENTER TO CONTINUE NEXT STEPS";
		 	getch();
		 	system("cls");
		 }
		 else if(type==4)
		 {
		 	int m=R1.nonACseater(member);
		 	system("cls");
		 		R1.getTOTAL(m);
		 			bill(R1);
		 
		 	cout<<"\n\nPLEASE PRESS ENTER TO CONTINUE NEXT STEPS";
		 	getch();
		 	system("cls");
		 	
		 }
	}
