// extract.c
// funtions and types used to extract x,y,z values from a
// string containing a url of the form
// "http://almondbread.cse.unsw.edu.au:7191/tile_x3.14_y-0.141_z5.bmp"
// initially by richard buckland
// 13 April 2014
// your name here:
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "extract.h"

// "314" -> 314
int myAtoI(char *message) {
    int i = 0;
    int num = 0;
    //while (message[i] != '\0') {
    while (message[i] >= '0' && message[i] <= '9') {
        num *= 10;
        num += message[i] - '0';
        i++;
    }
    return num;
}

int main (int argc, char *argv[]) {
    printf("%d\n", myAtoI("31415"));
    char * message = "http://almondbread.cse.unsw.edu.au:7191/tile_x3.14_y-0.141_z5.bmp";
 
    triordinate dat = extract (message);
    //sscanf(message, "http://almondbread.cse.unsw.edu.au:7191/tile_x%lf_y%lf_z%d.bmp", &dat.x, &dat.y, &dat.z);
    printf ("dat is (%f, %f, %d)\n", dat.x, dat.y, dat.z);
 
    assert (dat.x == 3.14);
    assert (dat.y == -0.141);
    assert (dat.z == 5);
 
    return EXIT_SUCCESS;
}

triordinate extract(char *message) {
    triordinate value;
    // find the x coordinate
    // value.x = myAtoD(message + x_coordinate);

    return value;
}

// "3.1415" -> 3.1415
double myAtoD(char *message) {
    return 0;
}
