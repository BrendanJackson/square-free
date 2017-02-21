#include <iostream>
using namespace std;

void get_user_input();
void is_it_square_free();
string result(); 

int main(){

	/*
		Enter the 1st integer of the pair, between 2 and 5000: 30
		Enter the 2nd integer of the pair, between 2 and 5000: 36
	*/
		get_user_input();

	/*	
		30 has these factors (>1) that are square: (none)
		30 is square-free
		36 has these factors (>1) that are square: 4, 9, 36
		36 is not square-free
	*/
		is_it_square_free();
	/*
		Therefore, the ordered pair (30, 36) is SOUR.
	*/
		result();
}

void get_user_input(){
	cout << "Enter the 1st integer of the pair, between 2 and 5000: ";
	cin >> input1;
	cout << "\nEnter the 2nd integer of the pair, between 2 and 5000: ";
	cin >> input2;
	}

void is_it_square_free(){

	}
	
string result(){

	}