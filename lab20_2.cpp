#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *A,Rect *B){

	Rect area;
	if((A->x+A->w)-B->x>0){
		area.w=(A->x+A->w)-B->x;
		if(A->x+A->w>B->x+B->w){
			area.w=B->w;
		}
	}else if((A->x+A->w)-B->x<=0){
		area.w=0;
	}

	if((A->y+A->h)-B->y>0){
		area.h=(A->y+A->h)-B->y;
		if(A->y+A->h>B->y+B->h){
			area.h=B->h;
		}
	}else if((A->y+A->h)-B->x<=0){
		area.h=0;
	}

	return area.h*area.w;
}

int main(){
	Rect R1 = {-1,2,6.9,9.6};
	Rect R2 = {0,0,1.2,2.5};	
	cout << overlap(&R1,&R2);	
	return 0;
}