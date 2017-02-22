#include <iostream>
using namespace std;

void get_user_input();
void is_it_square_free(int &number1, int &number2);
void result(bool number1_result, bool number2_result); 

int main(){

	/*
		Enter the 1st integer of the pair, between 2 and 5000: 30
		Enter the 2nd integer of the pair, between 2 and 5000: 36
	*/
	get_user_input();
	int input1;
	int input2;

	cout << "Enter the 1st integer of the pair, between 2 and 5000: ";
	cin >> input1;
	cout << "\nEnter the 2nd integer of the pair, between 2 and 5000: ";
	cin >> input2;

	/*	
		30 has these factors (>1) that are square: (none)
		30 is square-free
		36 has these factors (>1) that are square: 4, 9, 36
		36 is not square-free
	*/
		is_it_square_free(input1, input2);
		// cout << "new input 1 = " << input1 << endl
		// 	 << "new input 2 = " << input2 << endl;
	/*
		Therefore, the ordered pair (30, 36) is SOUR.
	*/
		result();
}

void get_user_input(){

	}

void is_it_square_free(int &number1, int &number2){
	// cout << "number1 = " << number1 << endl
	// 	 << "number2 = " << number2 << endl
	// 	 << "Add 2 to both" << endl;

	// number1 += 2;
	// number2 += 2;
	
	int square_numbers[10] = { 4, 9, 25, 36, 49, 64, 81, 100, 121, 144 };
	bool number1_result = false;
	bool number2_result = false;
	
	for (int i = 0; i < 10; i++) {
		if(number1 % square_numbers[i] == 0){
			number1_result = true; 
		} else {
			
		}
	}
	
	for (int i = 0; i < 10; i++) {
		if(number2 % square_numbers[i] == 0){
			number2_result = true; 
		} else {

		}
	}	

		cout << "number1_result: " << number1_result << endl
			 << "number2_result: " << number2_result << endl ;

	}

void result(bool number1_result, bool number2_result){
	if(number1_result == true && number2_result == true)
		cout << "SWEET";
	else if(number1_result == true && number2_result == false)
		cout << "SOUR";
	else if(number1_result == false && number2_result == true)
		cout << "SALTY";
	else
		cout << "BITTER";
	
	}