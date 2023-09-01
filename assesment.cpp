#include<iostream>
using namespace std;
int main()

{
	int choice,qty,i;
	int total_amount=0;
	int net=0;
	menu:
		cout<<"menu card "<<endl;
		cout<<"1.coffe  Rs:50"<<endl;
		cout<<"2.tea    Rs:20"<<endl;
		cout<<"3.pizza  Rs:200 "<<endl;
		cout<<"4.dabeli Rs:40"<<endl;
		cout<<"enter your choice : ";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				cout<<"you have selected coffe "<<endl;
				cout<<"enter your qty :"<<endl;
				cin>>qty;
				net=net+(qty*50);
				break;
			
			case 2:
				cout<<"you have selected tea "<<endl;
				cout<<"enter your qty : "<<endl;
				cin>>qty;
				net=net+(qty*20);
				break;
				
				
			case 3:
				cout<<"you have selected pizza "<<endl;
				cout<<"enter your qty : "<<endl;
				cin>>qty;
				net=net+(qty*200);
				break;
				
				case 4:
				cout<<"you have selected dabeli "<<endl;
				cout<<"enter your qty : "<<endl;
				cin>>qty;
				net=net+(qty*40);
				break;
			default:
				cout<<"item is not available ";
		}
		
		cout<<"do you want to continue press 1 or 2 for not: ";
		cin>>i;
		if(i==1)
		{
			goto menu;
		}
		cout<<"total amount :  "<<net<<endl;
		
		
		
		int dis;
		float amounttobepaid;
		if(net>200 && net<2000)
		{
			dis=(net*10)/100;
			amounttobepaid=net-dis;
			cout<<"you have to pay: "<<amounttobepaid;
		}
		else
		{
			cout<<"you have to pay :"<<net<<endl;
		}
		
		
		
		
}
