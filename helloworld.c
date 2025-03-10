/* This program prints "Hello World" a specified number of times.*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
if (argc != 2) {
printf("Usage: %s <number_of_times>\n", argv[0]);
return 1;
}
/* Command Line Arguments:
*An integer specifying how many times to print "Hello World".*/
int times = atoi(argv[1]);
for (int i = 0; i < times; i++) {
printf("Hello World\n");
}
return 0;
}

gcc helloworld.c -o helloworld_1
./helloworld 7
  
/* Example Usage:
* ./helloworld 7
* Output:
* Hello World
* Hello World
* Hello World
* Hello World
* Hello World
* Hello World
* Hello World
*/
