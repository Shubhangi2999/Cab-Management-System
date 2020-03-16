#include<bits/stdc++.h>
using namespace std;

typedef struct cab
{
    int id;
    char cabno[9];
    int pickup;
    char driver_name[6];
    int drop;
    char cab_name[6];
    int cab_status; //Enter only 1 or 0. 1 for cab is not available, 0 for cab is available
    int avg_rating,earnings;
    int noofbookings;
}cab;

int main()
{
    int i=1;
    fstream fil,fil2;
    cab ob;
   /* fil.open("cabdatabase.txt",ios::out);
    while(i<=10)
    {
        cout<<"Enter cab number: "<<endl;
        cin>>ob.cabno;
        cin.clear();
        cout<<"Enter cab booking status: "<<endl;
        cin>>ob.cab_status;
        cin.clear();
        cout<<"Enter driver_name: "<<endl;
        cin>>ob.driver_name;
        cin.clear();
        cout<<"Enter cab's current pickup: "<<endl;
        cin>>ob.pickup;
        cin.clear();
        cout<<"Enter cab name: "<<endl;
        cin>>ob.cab_name;
        cin.clear();
        cout<<"Enter cab's current drop: "<<endl;
        cin>>ob.drop;
        cin.clear();
        ob.avg_rating=5;
        cout<<"Enter cab's earnings till now: "<<endl;
        cin>>ob.earnings;
        cin.clear();
        cout<<"Enter cab's total no. of booking with us till now: "<<endl;
        cin>>ob.noofbookings;
        cin.clear();
        ob.id=((int)(ob.cabno[5])*1000) + ((int)(ob.cabno[6])*100) + ((int)(ob.cabno[7])*10) + ((int)(ob.cabno[8]));
        fil.write((char*) &ob,sizeof(ob));
        i++;
    }
    fil.close();*/
    char ch;
    fil.open("cabdata1.txt",ios::in);
    fil2.open("cabdatabase.txt",ios::out);
    while (!fil.eof())
{
fil.get(ch); //reading from file object 'a'
//cout<<ch;
fil2<<ch; //writing to file babli.txt
}
fil2.close();
fil.close();
    fil.open("cabdata1.txt",ios::in);
    //fil.seekg(0,ios::beg);
    i=0;
    while(i<10)
    {
        fil.read((char*) &ob,sizeof(ob));
        cout<<"\nCab's ID: "<<ob.id;
        cout<<"\nCab number: "<<ob.cabno;
        cout<<"\nCab booking status: "<<ob.cab_status;
        cout<<"\nDriver_name: "<<ob.driver_name;
        cout<<"\ncab's current pickup: "<<ob.pickup;
        cout<<"\nCab name: "<<ob.cab_name;
        cout<<"\ncab's current drop: "<<ob.drop;
        cout<<"\nAvg_rating: "<<ob.avg_rating<<endl;
        cout<<"cab's earnings till now: "<<ob.earnings<<endl;
        cout<<"cab's total no. of booking with us till now: "<<ob.noofbookings<<endl;
        i++;
    }
    fil.close();
}
