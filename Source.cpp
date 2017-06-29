#include"Header.h"


using namespace std;
/*we are going to create a guess interface where the machine will chose a random number
between one and one thousand and the user will have to guess what the number was
he will be led by the machine to tell him if the answers is lower or greater than 
what he proposed */

int main(int argc, char ** argv) {
	//the machine picks a random number between one and one thousand
	unsigned int r= Random(1000).getr();
	int g;
	int i = 1;
	printf("the values of r is %d\n", r);
	//now we are going to get the information from the user we are going be using buffer sizes
	puts("please guess a number between 1 and 1000");
	//we store what was given by the user and we output it to him
	scanf("%d", &g);
	while (g != r) {
		while (check(g)==false){
			puts("come one dude you are killing me right now, just put in an integer between 1 and 1000");
			++i;
			scanf("%d", &g);
		}
		if (g > r) {
			printf("the number is lower \n");
		}
		else {
			printf("the number is higher\n");
		}
		scanf("%d", &g);
		++i;
	}
	printf("BRAVO, you guessed correctly \n");
	printf("you attempted %d times before getting it right\n", i);
	return 0;
}