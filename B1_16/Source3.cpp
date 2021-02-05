#include <iostream>
#include <vector>
using namespace std;


int main6() {
	// *** 자료형에 가명 붙이기 Type aliases ***
	typedef double distance_t; // distance_t 라는 가명의 자료형을 쓸때 double을 사용하겠음

	double myDistance = 1.0;
	distance_t myDistance2 = 2.0;

	// 사용 사례1
	typedef vector<pair<string, int> > pairlist_t;
	pairlist_t pairlist1;
	pairlist_t pairlist2;

	// 사용 사례2
	using pairList_t = vector<pair<string, int> >;
	pairList_t pairList1;
	pairList_t pairList2;
	

	return 0;
}