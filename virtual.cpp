#include<iostream>
using namespace std;
class student
{
	public:
		virtual void getdata()=0;
		virtual void display()=0;
};
class engeineering:public student
{
	public:
		int regno;
		string name;
		public:
			void getdata()
			{
				cout<<"faculty-> engeineering"<<endl;
				cout<<"enter name";
				cin>>name;
				cout<<"enter regno";
				cin>>regno;
			}
			void display()
			{
				cout<<"name="<<name<<endl;
				cout<<"regno="<<regno<<endl;
			}
};
class medicine:public student
{
	public:
		int regno;
		string name;
		void getdata()
		{
			cout<<"faculty->medicine"<<endl;
			cout<<"enter name";
			cin>>name;
			cout<<"enter regno";
			cin>>regno;
		}
		void display()
		{
			cout<<"name="<<name<<endl;
			cout<<"regno="<<regno<<endl;
		}
};
class science:public student
{
	public:
		int regno;
		string name;
		void getdata()
		{
			cout<<"faculty->science"<<endl;
			cout<<"enter name";
			cin>>name;
			cout<<"enter regno";
			cin>>regno;
		}
		void display()
		{
			cout<<"name="<<name<<endl;
			cout<<"regno="<<regno<<endl;
		}
};
int main()
{
	student *p;
	engeineering e;
	medicine m;
	science s;
	p=&e;
	p->getdata();
	p->display();
	p=&m;
	p->getdata();
	p->display();
	p=&s;
	p->getdata();
	p->display();
	return 0;
	}
