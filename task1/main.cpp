#include <iostream>
#include <ctime>
using namespace std;

int sum(int arg1, int arg2){

	cout << "sum two numbers " << arg1 + arg2 << endl; 
	return arg1 + arg2;
}

void arithmetic() {
	double arg1, arg2;
	char ch;
	cout << "Enter numbers" << endl;
	cin >> arg1;
	cin >> arg2;
	cout << "chose arithmetic type + - * /" << endl;
	cin >> ch;
	switch (ch) {
  case '+':
	cout << "result  " <<  arg1 + arg2 << endl;
    break;
  case '-':
	cout << "result  " <<  arg1 - arg2 << endl;
	break;
  case '*':
	cout << "result  " <<  arg1 * arg2 << endl;
	break;
  case '/':
	cout << "result  " <<  arg1 / arg2 << endl;
    break;
}
}

void swap(int num1, int num2){
	cout << "start  " << "number 1 = " << num1 << " number 2 = " << num2 << endl;
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	cout << "end  " << "number 1 = " << num1 << " number 2 = " << num2 << endl;
}

void volumeOfCube(){
	int side;
	cout << "Input the side of a cube : ";
	cin >> side;
	cout << "The volume of a cube is : " << side * side * side << endl;
}


void AreaAndPerimeterRectangle(){

	int length, width;
	cout << "Input the length of the rectangle : ";
	cin >> length;
	cout << "Input the width of the rectangle : ";
	cin >> width;
	cout << "The area of the rectangle is : " << length * width << endl;
	cout << "The perimeter of the rectangle is : " << length * 2 + width * 2 << endl;	
}


// (30°C x 1.8) + 32 = 86°F

void CelsiusToFahrenheit(){

	float C;
	cout << "Input the temperature in Celsius : ";
	cin >> C;
	cout << "The temperature in Fahrenheit : " << (C * 1.8) + 32 << endl;
}


void FahrenheitToCelsius(){
	float F;
	cout << "Input the temperature in Fahrenheit : ";
	cin >> F;
	cout << "The temperature in Celsius : " << ( ( F - 32 ) * 5 ) / 9 << endl;
	
}


void KilometersToMiles(){

	int K;
	cout << "Input the distance in kilometer : ";
	cin >> K;
	cout << "The " << K << " Km./hr. means " << K * 0.6213711922 << " Miles/hr." << endl;
}

//9/5(K - 273) + 32

void KelvinToFahrenheit(){

	int K;
	cout << "Input the temperature in Kelvin : ";
	cin >> K;
	cout << "The temperature in Fahrenheit : " <<( 1.8 * ( K - 273 )) + 32 << endl;
}

void CurrentDateTime(){

	time_t now = time(0);
	tm *ltm = localtime(&now);

	cout << "Year:" << 1900 + ltm->tm_year<<endl;
	cout << "Month: "<< 1 + ltm->tm_mon<< endl;
    cout << "Day: "<< ltm->tm_mday << endl;
    cout << "Time: "<< 5+ltm->tm_hour << ":";
	cout << 30+ltm->tm_min << ":";
    cout << ltm->tm_sec << endl;
}

void MultiplicationTable(){

	int num;
	cout << "Input a number: ";
    cin >> num;
	for(int i = 1; i <= 10; ++i){
		cout << num << " x " << i << " = " << num * i << endl;
	}	
}

int main(){

//	sum(5, 7);

//	arithmetic();

//	swap(10, 20);

//	volumeOfCube();

//	AreaAndPerimeterRectangle();

//	CelsiusToFahrenheit();

//	FahrenheitToCelsius();

//	KilometersToMiles();

//	KelvinToFahrenheit();

//	CurrentDateTime();

	MultiplicationTable();
}

