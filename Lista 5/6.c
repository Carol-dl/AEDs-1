int main(){

char charr = 'c';
int inte = 1;
float floate = 2.0;

int * ptrint = &inte;
char * ptrchar = &charr;
float * ptrflaot = &floate;

printf("%c, %p\n", charr, &charr);
printf("%d, %p\n", inte, &inte);
printf("%.2f, %p\n", floate, &floate);

printf("%p, %p\n", ptrchar, &ptrchar);
printf("%p, %p\n", ptrint, &ptrint);
printf("%p, %p\n", ptrflaot, &ptrflaot);

scanf(" %c %d %f", ptrchar, ptrint, ptrflaot);

printf("%c, %p\n", charr, &charr);
printf("%d, %p\n", inte, &inte);
printf("%.2f, %p\n", floate, &floate);

printf("%p, %p\n", ptrchar, &ptrchar);
printf("%p, %p\n", ptrint, &ptrint);
printf("%p, %p\n", ptrflaot, &ptrflaot);

}