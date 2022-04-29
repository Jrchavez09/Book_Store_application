#include <iostream>
#include <string>
#include <cstdbool>

#include "Customer.h"


using namespace std;


ostream& operator<<(ostream& os,  const Customer& obj)
{
	os << fixed << showpoint << setprecision(2);
	os << setw(13) << left << "Name: "
	   << setw(37) << right << obj.name << endl;
	os << setw(13) << left << "Address: "
	   << setw(37) << right << obj.address << endl;
	os << setw(13) << left << "Email: "
	   << setw(37) << right << obj.email << endl;

	return (os);
}


Customer::Customer() : name(""), address(""), email("") { }
		
Customer::Customer(string _name, string _address,
		 string _email, OrderList _orders) :
	name(_name),
	address(_address),
	email(_email),
	orders(_orders) { }


OrderList
Customer::getOrders()
{
	return (orders);
}


void
Customer::AddOrder(Order arg)
{
	return;
}
		
		
void
Customer::UpdateOrders(string arg, int n)
{
	return;
}
		
		
void
Customer::CancelOrder(string arg, int n)
{
	return;
}
		

string
Customer::getCustomerName()
{ 
	return (name); 
}


string
Customer::getAddress()
{ 
	return (address); 
}


string
Customer::getEmail()
{ 
	return (email); 
}


double
Customer::checkoutOrders()
{
	
	return (0.0); 
}

		
bool
Customer::operator==(const Customer& n) const
{
	return (name == n.name || address == n.address
		|| email == n.email);
}


bool
Customer::operator!=(const Customer& n) const
{
	return (name != n.name || address != n.address
		|| email != n.email);
}


bool
Customer::checkCustomerName(string _name)
{ 
	return(name == _name);
}
