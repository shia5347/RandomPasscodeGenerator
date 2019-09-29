#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>

using namespace std;

int rand();

int main() {
	
	//Generate random seed relative to time compiled at
	//To feed RNG
	
	srand(time(NULL));

	time_t now = time(0);

	//convert
	char* dt = ctime(&now);

	int randNum1 = rand() % 9;

	ofstream PassCodes;
	PassCodes.open("PassCodes.txt");
	//Cout
	PassCodes << "First Number:" << rand()%9 << endl;
PassCodes << "Second Number:" << rand()%9<< endl;
PassCodes << "Third Number:" << rand()%9 << endl;
PassCodes << "Fourth Number:" << rand()%9 << endl;
PassCodes << "TIME: " << dt << endl;
PassCodes << "----------------------------------------------------------------------------" << endl;
	PassCodes.close();
	return 0;


}
