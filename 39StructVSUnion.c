// #include <stdio.h>
 
// struct Data {
//    int i;
//    float f;
//    char str[20];
// };
 
// int main( ) {

//    struct Data data;        

//    printf( "Memory size occupied by data : %d\n", sizeof(data));

//    return 0;
// }


#include <stdio.h>
 
union Data {
   int i;
   float f;
   char str[20];
};
 
int main( ) {

   union Data data;        

   printf( "Memory size occupied by data : %d\n", sizeof(data));

   return 0;
}