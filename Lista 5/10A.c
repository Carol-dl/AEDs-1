int main ()
 {
 int * ptr , i ;
 ptr = ( int *) malloc ( sizeof ( int ) ) ;
 *ptr = 10;
 for ( i =0; i <5; i ++) {
 *ptr = *ptr +1;
 }
 printf ( "\nptr : %d " , *ptr ) ;
 free ( ptr ) ;
 return 0;
 }