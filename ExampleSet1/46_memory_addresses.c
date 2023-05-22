// Memory = an array of bytes within the RAM (street)
// Memory Block = a single unit (byte) within memory, used to hold some value (person)
// Memory Address = the address of where a memory block is located (house address)

#include <stdio.h>

int main46(void){

	char a = 'X';
	char b = 'Y';
	char c = 'Z';

	printf("%d bytes\n", sizeof(a));
	printf("%d bytes\n", sizeof(b));
	printf("%d bytes\n", sizeof(c));

	printf("%p\n", &a);
	printf("%p\n", &b);
	printf("%p\n", &c);

	short d = 'X';
	short e = 'Y';
	short f = 'Z';

	printf("%d bytes\n", sizeof(d));
	printf("%d bytes\n", sizeof(e));
	printf("%d bytes\n", sizeof(f));

	printf("%p\n", &d);
	printf("%p\n", &e);
	printf("%p\n", &f);

	int g = 'X';
	int h = 'Y';
	int i = 'Z';

	printf("%d bytes\n", sizeof(g));
	printf("%d bytes\n", sizeof(h));
	printf("%d bytes\n", sizeof(i));

	printf("%p\n", &g);
	printf("%p\n", &h);
	printf("%p\n", &i);

	double j = 'X';
	double k = 'Y';
	double l = 'Z';

	printf("%d bytes\n", sizeof(j));
	printf("%d bytes\n", sizeof(k));
	printf("%d bytes\n", sizeof(l));

	printf("%p\n", &j);
	printf("%p\n", &k);
	printf("%p\n", &l);

	char m;
	char n[1];

	printf("%d bytes\n", sizeof(m));
	printf("%d bytes\n", sizeof(n));

	printf("%p\n", &m);
	printf("%p\n", &n);

	return 0;
}
