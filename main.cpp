#include <iostream>
using namespace std;

void print(){
	int a;
	int b;
	cin >> a;
	cin >> b;
	cout << "first value  "<< a << endl; 
	cout << "second value  "<< b << endl; 

}

int print(int x, int y){
	int result;
	result = x + y;
	cout  << "sum  "<< result << endl;
	return result;

}


void print(char a, int b ){

	cout << "char " << a << endl;
	cout << "int " << b << endl;

}


void byValue(int a, int b){

	a = 7;
	b = 7;
}

void byReference(int &a, int &b){

	a = 7;
	b = 7;
}



int main(){


//	print();
//	print( 5, 4 );
//	print('a', 7 );

	int x = 5;
	int y = 5;
	byValue( x, y );
	cout <<	x << endl;
	cout <<	y << endl;

	byReference(x, y);
    cout <<	x << endl;
	cout <<	y << endl;

// 	int x = 5;
// 	int y = 7;
// 	const int* ptr1 = &x;
// //	*ptr1 = &y; // boom
// 	ptr1 = &y;	// ok
//
//
// 	int* const ptr2 = &x;
// //	ptr2 = &y; // boom
// 	*ptr2 = 7; //ok
//
// 	int const* const ptr3 = &x;
//	ptr3 = &y; // boom
//	*ptr3 = &y;// boom
//
// 	cout << "ptr1  " << ptr1 << endl;
// 	cout << "ptr2  " << ptr2 << endl;
// 	cout << "ptr3  " << ptr3 << endl;
//
//
// 	cout << "-----------" << endl;
//
// 	cout << "*ptr1  " << *ptr1 << endl;
// 	cout << "*ptr2  " << *ptr2 << endl;
// 	cout << "*ptr3  " << *ptr3 << endl;
	
//	int a = 10;
//	int* ptr = &a;
//	int** ptr1 = &ptr;
//	int*** ptr2 = &ptr1;

//	***ptr2 = 20;
//	cout << a << endl;



}





