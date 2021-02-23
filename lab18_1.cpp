#include<iostream>
#include<algorithm>

using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect r1, Rect r2){
	double l1 = min(r1.x + r1.w, r2.x + r2.w) - max(r1.x, r2.x);
	double l2 = min(r1.y, r2.y) - max(r1.y - r1.h, r2.y - r2.h);
	if(l1 < 0 || l2 < 0) return 0;
	return l1 * l2;
}

int main(){
	Rect R1 = {-1,2,6.9,9.6};
	Rect R2 = {0,0,1.2,2.5};	
	cout << overlap(R1,R2);	
	return 0;
}