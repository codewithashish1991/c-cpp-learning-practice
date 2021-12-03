#include <stdio.h>

// Variable declaration:
extern int a, b;
extern int c;
extern float f;


// Constant declaration:
#define LENGTH 23
#define WIDTH 5

/* function declaration */
void counter(void);

int cnt;
extern void write_extern();
extern int max(int num1, int num2);
static int count = 5; /* global variable */

int main() {
   // printf() displays the string inside quotation
   printf("+++++++++++++++++ First Program(Hello World!) +++++++++++++ \n");
   printf("Hello, World!\n");

   printf("+++++++++++++++++ Drawing Shapes +++++++++++++ \n");
   printf("    /|\n");
   printf("   / |\n");
   printf("  /  |\n");
   printf(" /   |\n");
   printf("/____|\n");

   /* +++++++++++++++++ C - Variables +++++++++++++ */
   int a, b;
   int c;
   float f;

   /* actual initialization */
   a = 10;
   b = 30;
   c = a + b;

   printf("+++++++++++++++++ Variables & Constants +++++++++++++ \n");
   printf("value of c: %d \n", c);
   f = 70.0/3.0;
   printf("value of f: %f \n", f);

   /* +++++++++++++++++ C - Constants +++++++++++++ */
   /*
   There are two simple ways in C to define constants :−
      1) Using #define preprocessor.
      2) Using const keyword.
   */

   const int NEWLINE = '\n';

   int area;
   area = LENGTH * WIDTH;
   printf("The value of area is: %d", area);
   printf("%c", NEWLINE);

   /* +++++++++++++++++ C - Storage Classes +++++++++++++ */
   /*
      A storage class defines the scope (visibility) and life-time of
      variables and/or functions within a C Program.
      They precede the type that they modify. We have four different
      storage classes in a C program :−
      * Auto :- The auto storage class is the default storage class
         for all local variables.
      * Register :- The register storage class is used to define local
         variables that should be stored in a register instead of RAM
      * Static:- The static storage class instructs the compiler to
         keep a local variable in existence during the life-time of the
         program instead of creating and destroying it each time it comes into and goes out of scope.
      * Extern:- The extern storage class is used to give a reference of a global variable that is
         visible to ALL the program files. 
   */

   // int month;
   auto int month;
   register int  miles;
   while(count--){
      counter();
   }


   printf("+++++++++++++++++  Classes & Loops +++++++++++++ \n");
   cnt = 5;
   write_extern();
   int j;
   for( j = 0; j < 5; j++ ) {
      printf("This loop will 5 time & it's %d time.\n", j+1);
   }

   /* +++++++++++++++++ C - Functions +++++++++++++ */
   /*
   Syntax:- 
      return_type function_name( parameter list ) {
         body of the function
      }
   */
   printf("+++++++++++++++++  Functions +++++++++++++ \n");
   int ret;
   ret = max(a, b);
   printf( "Max value is : %d\n", ret );

   /* +++++++++++++++++ C - Arrays +++++++++++++ */

   /*
   Syntax:-
      type arrayName [ arraySize ];
   */;
   
   int blance[] = {12, 34, 23, 65, 45};

   printf("+++++++++++++++++  one dimensional array +++++++++++++ \n");

   printf("Number 4 elements of array is: %d \n", blance[4]);

   int element1[10];
   for (int k = 0; k < 10; k++){
      element1[k] = k + 120;
   }

   for (int l = 0; l < 10; l++){
      printf("Element1[%d] = %d \n", l, element1[l]);
   }

   printf("+++++++++++++++++  Multi-dimensional array +++++++++++++ \n");

   int element2 [3][4] = {
      {0, 1, 2, 3} ,   /*  initializers for row indexed by 0 */
      {4, 5, 6, 7} ,   /*  initializers for row indexed by 1 */
      {8, 9, 10, 11}   /*  initializers for row indexed by 2 */
   };

   for ( int m = 0; m < 3; m++ ) {

      for ( int n = 0; n < 4; n++ ) {
         printf("Element2[%d][%d] = %d\n", m,n, element2[m][n] );
      }
   }

   /* +++++++++++++++++ C - Pointers +++++++++++++ */

   return 0;
}

void counter( void ){
   static int i = 5;
   i++;
   printf("i is : %d and count is : %d \n", i, count);
}