#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include<mmsystem.h>
using namespace std;
void showdata()
{
	char display[]={'*',' ','W','E','L','C','O','M','E',' ','T','O',' ','B','A','N','K',' ','M','A','N','A','G','E','M','E','N','T',' ','S','Y','S','T','E','M',' ','*','.','.','.','.','.','.'};
	cout<<"\n\n\n\t\t";
	for(int i=0;i<sizeof(display)/sizeof(char);i++)
	{
		cout<<display[i];
		Sleep(125);
	}
	PlaySound(TEXT("welcomenodenew.wav"),NULL,SND_SYNC);
	system("CLS");
}
void choice()
{
	cout<<endl;
	cout<<"\tPRESS..!!"<<endl;
	cout<<"\t1. Create new account"<<endl;
	cout<<"\t2. Update information of existing account"<<endl;
	cout<<"\t3. Check the details of an existing account"<<endl;
	cout<<"\t4. For perfoming transactions"<<endl;
	cout<<"\t5. Remove existing account"<<endl;
	cout<<"\t6. View customer list"<<endl;
	cout<<"\t7. To listen all the avaliable choices"<<endl;
	cout<<"\t8. Transfer amount from you account to another account"<<endl;
	cout<<"\t9. Exit"<<endl;
}

class bank{
	private:
	    string arr[1000];
		string arr1[1000];
		string arr2[1000];
		string arr3[1000];
		string arr4[1000];
		string arr5[1000];
		int    arr6[1000];
		int a;
	public:
		int password = 111213; 
		bank()
		{
			a=0;
		}
		void data(int x)
		{
			if(x==1)
			{
				int b=0;
				cout<<"How many accounts do you want to create"<<endl;
				cin>>b;
				
				if(a==0)
				{
					a=b;
				for(int i=0;i<b;i++)
				{
				cout<<"\n\t----Enter Data----"<<endl<<endl;
				cout<<"Enter first name     : ";
				cin>>arr[i];
				cout<<"Enter last name      : ";
				cin>>arr1[i];
				cout<<"Enter phone number   : ";
				cin>>arr2[i];
				cout<<"Enter email          : ";
				cin>>arr3[i];
				cout<<"Enter username       : ";
				cin>>arr4[i];
				cout<<"Create password      : ";
				cin>>arr5[i];
				cout<<"Deposit first amount : ";
				cin>>arr6[i];
			    }
			    cout<<"\n#Creating new account please wait";
			    for(int i=0;i<8;i++)
			    {
			    	cout<<".";
			    	Sleep(500);
				}
				
			    Sleep(3000);
			    system("CLS");
			    cout<<"New Account is Created..!!"<<endl;
			  }
			  
			  else{
			  	for(int i=a;i<a+b;i++)
				{
                cout<<"\n\t----Enter Data----"<<endl<<endl;
				cout<<"Enter first name     : ";
				cin>>arr[i];
				cout<<"Enter last name      : ";
				cin>>arr1[i];
				cout<<"Enter phone number   : ";
				cin>>arr2[i];
				cout<<"Enter email          : ";
				cin>>arr3[i];
				cout<<"Enter username       : ";
				cin>>arr4[i];
				cout<<"Create password      : ";
				cin>>arr5[i];
				cout<<"Deposit first amount : ";
				cin>>arr6[i];
			    }
			    cout<<"\n#Creating new account please wait";
			    for(int i=0;i<8;i++)
			    {
			    	cout<<".";
			    	Sleep(500);
				}
				
			    Sleep(3000);
			    system("CLS");
			    cout<<"New Account is Created..!!"<<endl;
			    a=a+b;
			  }
			  }
				
			
			else if(x==2)
			{ int count=0;
				if(a==0)
				{
					cout<<"No data is entered"<<endl;
				}
				else{
				string username;
				cout<<"Enter username of which you want to update data"<<endl;
				cin>>username;
				for(int i=0;i<a;i++)
				{
				if(username==arr4[i])
				{
					cout<<"\t\n---Old Data---"<<endl<<endl;
					cout<<"First Name  : "<<arr[i]<<endl;
					cout<<"Last Name   : "<<arr1[i]<<endl;
					cout<<"Phone No.   :  "<<arr2[i]<<endl;
					cout<<"Email Id    : "<<arr3[i]<<endl;
					cout<<"Username    : "<<arr4[i]<<endl;
					cout<<"Password    : "<<arr5[i]<<endl;
					cout<<"Balance     : "<<arr6[i]<<endl;
					cout<<endl;
         cout<<"\n\t----Enter New Data----"<<endl<<endl;
				cout<<"Enter first name   : ";
				cin>>arr[i];
				cout<<"Enter last name    : ";
				cin>>arr1[i];
				cout<<"Enter phone numbe  : ";
				cin>>arr2[i];
				cout<<"Enter email        : ";
				cin>>arr3[i];
				cout<<"Enter username     : ";
				cin>>arr4[i];
				cout<<"Create password    : ";
				cin>>arr5[i];
				cout<<"Net Balance        : ";
				cin>>arr6[i];
				count++;
				}
			}
		}
		if(count == 0)
		{
			cout<<"Sorry invalid username"<<endl;
		}
		}
			else if(x==3)
			{  int sum=0;
				if(a==0)
				{
					cout<<"No data is entered"<<endl;
				}
				else{
				string username;
				cout<<"Enter username"<<endl;
				cin>>username;
				for(int i=0;i<a;i++)
				{
				if(username==arr4[i])
				{
					cout<<"\n\t----Data----"<<endl<<endl;
					cout<<"\tFirst Name  : "<<arr[i]<<endl;
					cout<<"\tLast  Name  : "<<arr1[i]<<endl;
					cout<<"\tPhone No.   : "<<arr2[i]<<endl;
					cout<<"\tEmail ID    : "<<arr3[i]<<endl;
					cout<<"\tUsername    : "<<arr4[i]<<endl;
					cout<<"\tPassword    : "<<arr5[i]<<endl;
					cout<<"\tNet Balance : "<<arr6[i]<<endl;
					sum++;
				}
		     	}
				 
				 if(sum == 0)
				 {
					 cout<<"Please enter valid username and try again\n";
				 }
			    }
		}
			else if(x==4)
			{
				if(a==0)
				{
					cout<<"No data is entered"<<endl;
				}

				else{
				string username;
				int count = 0;
				cout<<"Enter your username for performing transaction"<<endl;
				cin>>username;
				for(int i=0;i<a;i++)
				{
				  if(username==arr4[i])
				  {
                    cout<<"\n\t----Data----"<<endl<<endl;
					cout<<"\tFirst Name  : "<<arr[i]<<endl;
					cout<<"\tLast  Name  : "<<arr1[i]<<endl;
					cout<<"\tPhone No.   : "<<arr2[i]<<endl;
					cout<<"\tEmail ID    : "<<arr3[i]<<endl;
					cout<<"\tUsername    : "<<arr4[i]<<endl;
					cout<<"\tPassword    : "<<arr5[i]<<endl;
					cout<<"\tNet Balance : "<<arr6[i]<<endl;
					count++;
				  }
		     	}
				 if(count == 0)
				 {
					 cout<<"Sorry Username is invalid please enter valid username"<<endl;
				 }
                 
				else{  
				int press;
				cout<<"\n   Press 1 for deposit  "<<endl;
				cout<<"   Press 2 for withdraw "<<endl;
				cin>>press;
				if(press==1)
				{
				for(int i=0;i<a;i++)
				{
				if(username==arr4[i])
				{
						int money,sum=0;
					cout<<"\nExisting balance                 : "<<arr6[i]<<endl;
					cout<<"Enter amount you want to deposit : ";
					cin>>money;
					sum=arr6[i]+money;
					arr6[i]=sum;
					 cout<<"\n"<<money<<" Rs is added in your account new balance is "<<arr6[i]<<" Rs"<<endl<<endl;
				}
		    	}
		      }
		      else if(press==2)
		      {
		      		for(int i=0;i<a;i++)
				{
				if(username==arr4[i])
				{
					int money,sub=0;
					cout<<"Existing balance                        : "<<arr6[i]<<endl;
					cout<<"Enter amount which you want to withdraw : ";
					cin>>money;
					sub=arr6[i]-money;
					arr6[i]=sub;
				    cout<<"\n"<<money<<" Rs is withdraw from this account new balance is "<<arr6[i]<<" Rs"<<endl<<endl;
				}
				
		    	}
		      	
			  }
			  
			  else 
			  {
			  	cout<<"Invalid input"<<endl;
			  }
		  }  
		}
	}
			
			else if(x==5)
			{
				if(a==0)
				{
					cout<<"No data is entered"<<endl;
				}
				else
		    	{
				int press;
				string pass;
				int go;
				cout<<"Press 1 to delete specific record"<<endl;
				cout<<"Press 2 to delete full record"<<endl;
				cin>>press;
				
				if(press==1)
				{  
					 int count,found=0;
					string username;
			    	cout<<"Enter username of account  which you want to delete : ";
				    cin>>username; 
                    int i;
                    for(i=0;i<a;i++)
				    {
			     	  if(username==arr4[i])
			    	  {
					  go = i;
					  found++;
			    	  }
					}
                  
				   if(found==0)
				   {
					 cout<<"Invalid Username\n";
				   }

                   else
				   {
					   cout<<"\nPlease enter your password for verification :\n";
					   cin>>pass;
                                              
				                  if(pass == arr5[go])
					              {   char caser;
									  cout<<"Are you sure you want to delete your account press Y or y to confirm\n";
									  cin>>caser;
										if(caser == 'y' || caser == 'Y')
										{
										cout<<"Data is being deleted";
				                     for(i=0;i<a;i++)
				                     {
			     	                  if(username==arr4[i])
			    	                      {
						                  for(int j=i;j<a;j++)
						                   {
						                  arr[j]=arr[j+1];
						                  arr1[j]=arr1[j+1];
					                      arr2[j]=arr2[j+1];
						                  arr3[j]=arr3[j+1];
						                  arr4[j]=arr4[j+1];
						                  arr5[j]=arr5[j+1];
						                  arr6[j]=arr6[j+1];
				    	                  }
			    	                    }
		    	                     }
									 for(int o=0;o<8;o++)
									 {
										 cout<<".";
										 Sleep(300);
									 }
									  a--;
		     	                  }

								   else{
									   cout<<"Your data is was not deleted\n";
								      }
						
							 }
					           else
							    {
							    cout<<"Invalid Password\n";
						        PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC);
								}
				    }
				}

				   else if(press==2)
				    {   int verify;
                        cout<<"In order to delete all the accounts please enter authorised password : ";
                        cin>>verify;
                        if(verify == password)
						{
						a=0;
						cout<<"All records are deleted"<<endl;
						}
						
						else
						{
							cout<<"Sorry cannot delete data password in incorrect\n";
							PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC);
						} 
					 }

				   else
				    {
						cout<<"Invalid input"<<endl;
			    	}
			} 	   					
	       		
		}
		
			else if(x==6)
			  { 
				  if(a==0)
				{
					cout<<"No data is entered"<<endl;
				}
				else
		    	{
			  	cout<<"\t\t\t----Data----"<<endl<<endl;
			  	for(int i=0;i<a;i++)
				{
				cout<<"**Data of customer : "<<i+1<<"**"<<endl<<endl;
					cout<<"First Name    : "<<arr[i]<<endl;
					cout<<"Last name     : "<<arr1[i]<<endl;
					cout<<"Phone No.     : "<<arr2[i]<<endl;
					cout<<"Email ID      : "<<arr3[i]<<endl;
					cout<<"Username      : "<<arr4[i]<<endl;
					cout<<"Password      : "<<arr5[i]<<endl;
					cout<<"Net Balance   : "<<arr6[i]<<endl<<endl;
				}
		        }
		}
		
		      else if(x==7)
		      {
		      	cout<<"Listen to the options in voice node properly and reselect"<<endl;
				  PlaySound(TEXT("gopishnode.wav"),NULL,SND_SYNC);
			  }
			  
			  else if(x==9)
			  {
			  	cout<<"Thank You..!!!"<<endl;
                cout<<"Do visit again..!!!"<<endl;
				PlaySound(TEXT("lastnode.wav"),NULL,SND_SYNC);
			  	exit(0);
			  }

              else if(x==8)
			  {   
				  if(a==0)
				  {
					  cout<<"No account is created in the bank"<<endl;
				  }

				  else
				  {
				  string name;
				  int amounttransfer;
				  int count=0;
			  	  cout<<"Please Enter your Username : ";
				  cin>>name;
				    for(int i=0;i<a;i++)
				    {
                        if(name == arr4[i])
						{  count=1;
							string password;
						   int find = i;
							cout<<"Please Enter your password : ";
							cin>>password;
							if(password == arr5[i])
							{
                              cout<<"Your account balance is "<<arr6[i]<<" Rs."<<endl;
							  cout<<"\nEnter the amount you want to transfer in other's account : ";
							  cin>>amounttransfer;
                              if(amounttransfer>arr6[i])
							  {
								  cout<<"You don't have sufficient amount to transfer"<<endl;
							  }

							  else{
								  string holdername;
								  cout<<"Enter the name of account holder in which you want to transfer amount : ";
							      cin>>holdername;
                                  int check=0;
                                 for(int i=0;i<a;i++)
								 {
                                    if(holdername == arr4[i])
									{ check =1;
                                         arr6[i] = arr6[i] + amounttransfer;
										 cout<<"Successfully transferred "<<amounttransfer<<" Rs to "<<holdername<<"'s account"<<endl;
									     arr6[find] = arr6[find] - amounttransfer;
								}
								 }
								 
								 if(check == 0)
								 {
									 cout<<"Wrong account holder name entered please check it again";
								 }

							  }

							}

							else
							{
								cout<<"Password you entered is incorrect";
								PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC);
							}
						}

				    }
					if(count == 0)
					{
						cout<<"Sorry Wrong username"<<endl;
					}

				  }

			  }

		}

};

main()
{
showdata();
 int password = 111213; 

	bank b;
	int select;
	while(1)
	{
	choice();
	
	cin>>select;
	system("CLS");
	if(select==1)
	{
		b.data(select);
		cout<<"\nPlease press any key to continue"<<endl;
		getch();
		system("CLS");
	}
	else if(select==2)
	{
		b.data(select);
		cout<<"\nPlease press any key to continue"<<endl;
		getch();
		system("CLS");
	}
	else if(select==3)
	{
		b.data(select);
		cout<<"\nPlease press any key to continue"<<endl;
		getch();
		system("CLS");
	}
	else if(select==4)
	{
		b.data(select);
		cout<<"\nPlease press any key to continue"<<endl;
		getch();
		system("CLS");
	}
	else if(select==5)
	{
		b.data(select);
		cout<<"\nPlease press any key to continue"<<endl;
		getch();
		system("CLS");
	}

	else if(select==6)
	{   int pass;
		cout<<"Please enter the authorised numerical password to access the data\n";
        cin>>pass;

		if(pass == password)
		{
		b.data(select);
		cout<<"\nPlease press any key to continue"<<endl;
		getch();
		system("CLS");
		}

		else{
			cout<<"\tSorry the password you entered is incorrect\n";
			cout<<"\n\tPlease press any key to continue"<<endl;
		getch();
		system("CLS");
		}
	}
	else if(select==7)
	{
		b.data(select);
		cout<<"\nPlease press any key to continue"<<endl;
		getch();
		system("CLS");
	}
	else if(select==8)
	{
		b.data(select);
		cout<<"\nPlease press any key to continue"<<endl;
		getch();
		system("CLS");
	}

    else if(select==9)
	{
		b.data(select);
		cout<<"\nPlease press any key to continue"<<endl;
		getch();
		system("CLS");
	}

	else{
		cout<<"Invalid input"<<endl;
		PlaySound(TEXT("invalid.wav"),NULL,SND_SYNC);
		cout<<"\n\nPlease press any key to continue"<<endl;
		getchar();
		system("CLS");
	}
   }
}
