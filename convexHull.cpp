#include <fstream>
#include <cstring>
#include <iostream>

int hullDepth; // K
int islandCount; // N
int seaRouteCount; // M
int* pathA_Arr; // a
int* pathB_Arr; // b
int* timeArr; // t
int* wearArr; // h
int start;
int finish;

using namespace std;

void getInput();
int returnOptimizedRoute();

int main() {

	/* 	
		The four different arrays can be concluded to be
		as part of a larger dataset that stores the start,
		the finish, the time, and the wear.
	*/

	printf("%d\n", returnOptimizedRoute());

}

void getInput() {

	ifstream file;
	file.open("s3.x.in");

	file >> hullDepth;
	file >> islandCount;
	file >> seaRouteCount;

	pathA_Arr = new int[seaRouteCount];
	pathB_Arr = new int[seaRouteCount];
	timeArr = new int[seaRouteCount];
	wearArr = new int[seaRouteCount];

	for(int i = 0; i < seaRouteCount; i++) {
		file >> pathA_Arr[i];
		file >> pathB_Arr[i];
		file >> timeArr[i];
		file >> wearArr[i];
	}

	file >> start;
	file >> finish;

}

int returnOptimizedRoute() {
	return -1;
}