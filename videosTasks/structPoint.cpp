#include <iostream>

struct Point {
	int x;
	int y;
	int red;
	int green;
	int blue;
};
struct Line {
	Point p[3];
};

int main() {

    Line l1, l2;

    for(int i = 0; i < 3; ++i) {
        l1.p[i].x = rand() % 10;
        l1.p[i].y = rand() % 10;
        l1.p[i].red = rand() % 10;
        l1.p[i].green = rand() % 10;
        l1.p[i].blue = rand() % 10;
    }

    for(int i = 0; i < 3; ++i) {
        l2.p[i].x = rand() % 10;
        l2.p[i].y = rand() % 10;
        l2.p[i].red = rand() % 10;
        l2.p[i].green = rand() % 10;
        l2.p[i].blue = rand() % 10;
    }

    l1.p[0].x = 1;
    l1.p[0].y = 2;
    l2.p[0].x = 1;
    l2.p[0].y = 2;

    std::cout << "first line" << std::endl;
    int p1 = 1;
    for(int i = 0; i < 3; ++i) {
        std::cout << "point" << p1 << std::endl;
        std::cout << l1.p[i].x << std::endl;
        std::cout << l1.p[i].y << std::endl;
        std::cout << l1.p[i].red << std::endl;
        std::cout << l1.p[i].green << std::endl;
        std::cout << l1.p[i].blue << std::endl;
        ++p1;
    }

    std::cout << "second line" << std::endl;
    int p2 = 1;
    for(int i = 0; i < 3; ++i) {
        std::cout << "point" << p2 << std::endl;
        std::cout << l2.p[i].x << std::endl;
        std::cout << l2.p[i].y << std::endl;
        std::cout << l2.p[i].red << std::endl;
        std::cout << l2.p[i].green << std::endl;
        std::cout << l2.p[i].blue << std::endl;
        ++p2;
    }

    bool crossing = false;
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            if(l1.p[i].x == l2.p[j].x && l1.p[i].y == l2.p[j].y) {
               crossing = true;
            }
        }
    }

    if(crossing == true) {
        std::cout << "Lines are crossing" << std::endl;
    } else {
        std::cout << "Lines are not crossing" << std::endl;

    }

// 	Point p;
		
// 	for(int i = 0; i < 1; ++i) {
// 		std::cout << "x = " ;
// 		std::cin >> p.x;
// 		std::cout << "y = " ;
// 		std::cin >> p.y;
// 		std::cout << "red = " ;
// 		std::cin >> p.red;
// 		std::cout << "green = " ;
// 		std::cin >> p.green;
// 		std::cout << "blue = " ;
// 		std::cin >> p.blue;
//
// 	}
		
}
