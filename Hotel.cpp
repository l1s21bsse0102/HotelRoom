#include<iostream>
using namespace std;

class Hotel{
	
	private:
		string HotelName;
		string HotelAddress;
		
	public:
		Hotel();
		
		void PrintHotelName(){
			cout << "Hotel Name is printed" << endl;
		}
		
		void PrintHotelAddress(){
			cout << "Hotel Address is printed" << endl;
		}
};

int main (){
	
	Hotel hotel1;
	
	return 0;
}
