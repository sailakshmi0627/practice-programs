#include<iostream>
int X = 10; //Global variable
int main() {
	int X = 20; //Local variable
	std::cout <<"Local X:" <<X << std::endl;
    std::cout <<"Gobal X:" <<::X << std::endl;
    return 0;
}
