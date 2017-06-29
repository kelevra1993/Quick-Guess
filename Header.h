#pragma once
#include<cstdio>
#include<string>
#include<ctime>
#include<typeinfo>
#include<iostream>
#define BUFFSIZE  4

class Random {
private:
	unsigned int r;
public :
	//lets set the creator of the random value
	//takes into account one parameter which will be the range of the function
	Random(int a) {
		//first we seed the time
		srand(time(NULL));
		//now we get our random number
		unsigned int b = rand() % a;
		unsigned int c = time(NULL);
		unsigned int d;
		switch (c%3)
		{
		case 0:
			d = (42 * c) %a;
			printf("the time could be divided by 3 \n");
			break;
		case 1:
			d = (7 * c) %a;
			printf("the time could not be dived by 3 remainder 1\n");
			break;
		case 2:
			d = (23 * c) %a;
			printf("the time could not be divided by 3 remainder 2\n");
			break;
		}
		r = d;
	}
	int getr();
};
int Random::getr() {
	return r;
}
bool check(int a) {
	if ((a < 0) || (a>1000)) {
		puts("please put an integer between 1 and 1000");
		return false;
	}
	else {
		puts("thank you");
		return true;
	}
}