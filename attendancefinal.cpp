#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string>
#include<conio.h>
using namespace std;
class attend
{
	public:
	int idn;
void getdata()
{
    cout<<"ENTER THE ID NUMBER "<<endl;
	cin>>idn;
	ofstream outf("Attend2.txt",ios::app);
	outf<<"\n"<<idn;
	outf.close();
}
void checkdata()
{
	int idc,k,m=0;
	cout<<"ENTER THE ID TO CHECK "<<endl;
	cin>>idc;
	ifstream fin("Attend2.txt",ios::app);
    while(fin.eof()==0)
	{
		fin>>idn;
		if(idn==idc)
		m=1;
	}
	if(m==1)
	cout<<"RECORD FOUND "<<endl;
	else
	cout<<"RECORD NOT FOUND "<<endl;
	fin.close();
}
void deletedata()
{
	int idc,k;
	cout<<"ENTER THE ID TO DELETE "<<endl;
	cin>>idc;
	ifstream fin("Attend2.txt",ios::app);
	ofstream outf("Attend3.txt",ios::app);
	while(!fin.eof())
	{
	 fin>>idn;
     if(idc==idn)
     {
     cout<<"INSIDE IF "<<endl;
     }
     else
      {
     	outf<<"\n"<<idn;
     	cout<<"ELSE IS RUNNING "<<endl;
      }
	}
	fin.close();
	outf.close();
	remove("Attend2.txt");
	rename("Attend3.txt","Attend2.txt");
}
void displaydata()
{
	int k=0;
	ifstream fin("Attend2.txt",ios::app);
	while(!fin.eof())
	{
		fin>>idn;
		cout<<"THE ROLL NUMBER IS  "<<idn<<"\n";
		k++;
	}
	//cout<<"TOTAL NUMBER OF STUDENTS ARE   "<<k<<endl;
	fin.close();
}
};
void start()
{
	
	int k=1,ch;
	attend obj;
	cout<<"******************************************************************************"<<endl;
	cout<<"                    WELCOME TO THE ATTENDANCE SHEET                           "<<endl;
	cout<<"******************************************************************************"<<endl;
	while(k==1)
	{
	system("cls");
	cout<<"******************************************************************************"<<endl;
	cout<<"                        PRESS 1 TO ADD DATA                                   "<<endl;
	cout<<"                        PRESS 2 TO CHECK THE DATA                             "<<endl;
	cout<<"                        PRESS 3 TO DELETE DATA                                "<<endl;
	cout<<"                        PRESS 4 TO DISPLAY DATA                               "<<endl;
	cout<<"                        PRESS 5 TO EXIT                                       "<<endl;
	cout<<"                        ENTER YOUR CHOICE                                     "<<endl;
	cin>>ch;
	switch(ch)
		{
		case 1:
		obj.getdata();
		cout<<"                   PRESS 1 TO CONTINUE                                      "<<endl;
		cout<<"                   PRESS 2 TO EXIT                                          "<<endl;	
		cout<<"                   ENTER YOUR CHOICE                                        "<<endl;
		cin>>k;
		break;
		case 2:
		obj.checkdata();
		cout<<"                   PRESS 1 TO CONTINUE                                      "<<endl;
		cout<<"                   PRESS 2 TO EXIT                                          "<<endl;	
		cout<<"                   ENTER YOUR CHOICE                                        "<<endl;
		cin>>k;
		break;
		case 3:
	    obj.deletedata();
	    cout<<"                   PRESS 1 TO CONTINUE                                      "<<endl;
		cout<<"                   PRESS 2 TO EXIT                                          "<<endl;	
		cout<<"                   ENTER YOUR CHOICE                                        "<<endl;
		cin>>k;
		break;
		case 4:
	    obj.displaydata();
	    cout<<"                   PRESS 1 TO CONTINUE                                      "<<endl;
		cout<<"                   PRESS 2 TO EXIT                                          "<<endl;	
		cout<<"                   ENTER YOUR CHOICE                                        "<<endl;
		cin>>k;
		break;
		case 5:
		exit(0);	
		default:
		cout<<"                  WRONG CHOICE                                              "<<endl;
		cout<<"                  PRESS 1 TO CONTINUE                                       "<<endl;
		cout<<"                  PRESS 2 TO EXIT                                           "<<endl;	
		cout<<"                  ENTER YOUR CHOICE                                         "<<endl;
		cin>>k;
	}

}
};
int main()
{      
         int pass,k=1,choice,pd=1234;
         long int phn;
    while(k==1)
    {
    	system("cls");
    cout<<"******************************************************************************"<<endl;
	cout<<"                    WELCOME TO THE ATTENDANCE SHEET                           "<<endl;
	cout<<"******************************************************************************"<<endl;
    cout<<"                         ENTER THE PASSWORD "<<endl;
    cin>>pass;
	    if(pass==pd)
	    {
	    start();
	    exit(0);
	    }
	    else
	cout<<"                     WRONG CHOICE "<<endl;
	cout<<"                     PRESS 1 TO CONTINUE OR 2 TO EXIT "<<endl;
	cin>>k;

	}
}

