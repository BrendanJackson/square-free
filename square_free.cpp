 //standard input/output
#include <iostream>
//allows call to numeric_limits 
#include <limits>
//calls std namespace for the whole project, 
//prevents calling std: on each operation
using namespace std; 

/*
* Brendan Jackson
* "CS215−J1E1"
* Spring 2017
* "Homework Assignment #2"
* This homework assignment determines whether or not any square number exists
* in whatever pair of integers that you choose to give it.
*/


//prototype for get_user_input function
void get_user_input(int &input1, int &input2); 
//prototype for is_it_square_free function
void is_it_square_free(int &number1, 
	int &number2, bool &number1_result, bool &number2_result);
//prototype for result function
void result(int input1, int input2, bool number1_result, bool number2_result); 

// void sweet_test();
int main(){
	 //defines and declares a variable named input1
	int input1; 
	 //defines and declares a variable named input2
	int input2;
	//defines and declares a variable named number1_result
	bool number1_result; 
	//defines and declares a variable named number2_result
	bool number2_result; 

	//initializes a variable named input1 to 0
	input1 = 0;  
	//initializes a variable named input2 to 0
	input2 = 0; 
	//initializes a variable named number1_result to true
	number1_result = true; 
	//initializes a variable named number1_result to true
	number2_result = true; 

	//calls the get_user_input function and passes in 
	//the input1 and input2 arguements
	get_user_input(input1, input2);

	//calls the is_it_square_free function and passes in the input1,
	// input2, number1_result, and number2_result arguements
	is_it_square_free(input1, input2, number1_result, number2_result);
	
	//calls the result function and passes in the input1,
	// input2, number1_result, and number2_result arguements
	result(input1, input2, number1_result, number2_result);


}
/******************************************************************
******************** Function Definitions *************************
******************************************************************/

//Gets usable input from the user
void get_user_input(int &input1, int &input2){
	
	
	//Gets input1 from the user
	//tests for input between 2 & 5000
	while (input1 < 2 || input1 > 5000){ 
		//prompts user for input
		cout << 
		"Enter the 1st integer of the pair, between 2 and 5000: "; 
		 //recieves input
		cin >> input1;
		//clears error flags
		cin.clear(); 
		 //skips to a line without the error
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		//sends user an error message if they failed 
		//to give proper input
			if(input1 < 2 || input1 > 5000)
				cout << "\nImproper input, please try again\n";
			else{}
		}
	
	//Gets input2 from the user
	//tests for input between 2 & 5000
	while (input2 < 2 || input2 > 5000){ 
		//prompts user for input
		cout << 
		"\nEnter the 2nd integer of the pair, between 2 and 5000: "; 
		//recieves input
		cin >> input2; 
		//clears error flags
		cin.clear(); 
		//skips to a line without the error
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
			//sends user an error message if,
			// they failed to give proper input
			if(input2 < 2 || input2 > 5000)
				cout << "\nImproper input, please try again\n";
			else{}
		}

	}
//END get_user_input()

//Tests if input is square free
void is_it_square_free(int &number1, int &number2,
 bool &number1_result, bool &number2_result){

	//defines, declares, and initiates
	// an array square_numbers with 10 numbers 
	int square_numbers[10] = {4, 9, 25, 36, 49, 64, 81, 100, 121, 144 };  

	//outputs the value of number1 and some text 
	cout << number1 << " has these factors (>1) that are square: "; 

	//for loop for testing if number1 is 
	//divisible by any number in the square_numbers array
	for (int i = 0; i < 10; i++) { 
		if(number1 % square_numbers[i] == 0){
			//sets var to false if it contains a square factor
			number1_result = false;  
			//outputs any square factors with a space between them
			cout << square_numbers[i]  << " " ; 
			} else {}
		}

	//if number1_result is still square free after being
	// checked the program outputs (none), if not, it breaks the line
	if(number1_result == 1)
		cout << "(none)" << endl;
	else
		cout << endl;		
	
	//outputs the value of number2 and some text 
	cout << number2 << " has these factors (>1) that are square: "; 
	
	//for loop for testing if number2 is
	// divisible by any number in the square_numbers array
	for (int i = 0; i < 10; i++) {
		if(number2 % square_numbers[i] == 0){
			 //sets var to false if it contains a square factor
			number2_result = false; 
			//outputs any square factors with a space between them
			cout << square_numbers[i]  << " " ; 
			} else {}
		}	

	//if number2_result is still square free after being
	// checked the program outputs (none), if not, it breaks the line
	if(number2_result == 1)
		cout << "(none)" << endl;
	else
		cout << endl;		


	}
//END is_it_square_free()

//outputs result of the prior square free tests
void result(int input1, int input2, 
	bool number1_result, bool number2_result){
	
	//outputs the numbers given
	cout << "Therefore, the ordered pair (" << input1 
		 << ", " << input2 << ") is ";
	
	//determines the "TASTE" of the ordered pairs 
	//based on whether they were squarefree or not
	if(number1_result == true && number2_result == true)
		cout << "SWEET";
	else if(number1_result == true && number2_result == false)
		cout << "SOUR";
	else if(number1_result == false && number2_result == true)
		cout << "SALTY";
	else
		cout << "BITTER";
	
	cout << endl;
	}
//END result()	
