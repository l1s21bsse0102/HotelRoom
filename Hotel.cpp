#include<iostream>
using namespace std;

class Hotel{
	
	private:
		string HotelName;
		string HotelAddress;
		
	public:
		Hotel();
		
		void PrintHotelName();
		void PrintHotelAddress();
};

int main (){
	
	Hotel hotel1;
	
	return 0;
}
