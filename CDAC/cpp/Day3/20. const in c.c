#include <stdio.h>
int main(void)
{
	const float pi=3.142f;
	float *ptr=&pi;
	printf("\n pi=%.3f", pi);
	//pi=3.14; //error ae pi is constant
	//pi++;
	//++pi;
	//--pi;
	//pi--;
	//pi+=10;
	//pi-=10;
	//pi*=10;
	//pi/=10;
	*ptr=3.14; // allowed to modify value of const using pointer in c
	printf("\n *ptr=%.3f pi=%.3f", *ptr, pi);
	return 0;
}
