#include <iostream>

class Point {
	public:
		int x;
		int y;

};

class Line {
	public:
		Point p[3];
};


int main() {
	
	Line l[2];

	for(int i = 0; i < 2; ++i) {
		for(int j = 0; j < 3; ++j) {
		
			l[i].p[j].x = rand() % 10;		
			l[i].p[j].y = rand() % 10;	
	
		}
	}

	for(int i = 0; i < 2; ++i) {
		std::cout << "Line " << i + 1 << " " << std::endl;
		for(int j = 0; j < 3; ++j) {
		
				std::cout << l[i].p[j].x << std::endl;		
				std::cout << l[i].p[j].y << std::endl;	
	
		}
		std::cout << std::endl;
	}
	l[0].p[0].x = 1;
	l[0].p[0].y = 2;
	l[1].p[0].x = 1;
	l[1].p[0].y = 2;

	int k = 0;
	std::string crossing = "not crossing";
	for(int i = 0; i < 2; ++i) {
		for(int j = 0; j < 3; ++j) {
			if(l[k].p[i].x == l[k +1].p[j].x && l[k].p[i].y == l[k +1].p[j].y) {
				crossing = "crossing";
			}		
	
		}
	}
	std::cout << crossing << std::endl;




}
