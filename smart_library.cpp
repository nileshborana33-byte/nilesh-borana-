#include<iostream>
using namespace std;
int main()
{
	int book[10];
	int n = 0;
	int choice;
	int searchId;
	
	do
	{
		cout<<"\n\n===== SMART LIBRARY =======";
		cout<<"\n1. Add Book";
		cout<<"\n2. Display Book";
		cout<<"\n3. Search Book";
		cout<<"\n4.Exit";
		cout<<"Enter you Choice: ";
		cin>>choice;
		
		if (choice == 1)
		{
			cout<<"Enter Book Ids:";
			cin>> book[n];
			n++;
			cout<<"Book Added!:";
			
		}
		else if (choice == 2)
		{
			cout<<"\nBooks in Library:\n";
			for (int i=0;i<n;i++)
			{
				cout<<book[i]<<endl;
				
			}
			
		}
		else if (choice == 3)
		{
			cout<<"Enter Book Ids to search: ";
			cin>>searchId;
			bool found = false;
			for (int i = 0; i<n;i++)
			{
				if (book[i]==searchId)
				{
					found = true;
				}
				
			}
			if (found)
			{
				cout<<"Book Found!";
				
			}
			else
			{
				cout<<"Book Not Found!";
				
			}
		}
		else if (choice == 4)
		{
			cout<<" Thank you!";
		
		}
		else
		{
			cout<<"invalid choice! ";
		
		}
	
	}
	while( choice !=4 );
	return 0;
}
