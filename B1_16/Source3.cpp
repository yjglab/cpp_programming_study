#include <iostream>
#include <vector>
using namespace std;


int main6() {
	// *** �ڷ����� ���� ���̱� Type aliases ***
	typedef double distance_t; // distance_t ��� ������ �ڷ����� ���� double�� ����ϰ���

	double myDistance = 1.0;
	distance_t myDistance2 = 2.0;

	// ��� ���1
	typedef vector<pair<string, int> > pairlist_t;
	pairlist_t pairlist1;
	pairlist_t pairlist2;

	// ��� ���2
	using pairList_t = vector<pair<string, int> >;
	pairList_t pairList1;
	pairList_t pairList2;
	

	return 0;
}