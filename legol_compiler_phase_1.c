/*
& A simple Legol Compiler -> BrainStorm
~ include the libraries i will need
~ stdio.h -> input/output functions
    ~ will also use scanf to read input from a user
~ string.h -> compare strings
*/
#include <stdio.h>
#include <string.h>

//& Start small and focus on only one command for now and will build on this more
//~ Legol's idea is the same as planning building problem solving into programming languages
//~ 4 relations -> door, wall, window, roof -> door is embedded into the well
//~ compare lego vpcl
int main () {
    //~ Declare the variables
    //~ [10] -> each variable can hold up to 10 characters
    //~ string for the command ("BUILD")
    char command[10];
    //~ string for the color of the Legol block ("red")
    char color[10];
    //~ string for the size of the Legol block ("small")
    char size[10];

    //~ Display a message to the user asking an inputs. Read the user input and store them in the declared variables
    printf("Enter a Legol command (BUILD <color> <size>):\n");
    scanf("%s %s %s", command, color, size);

    //~ Check what the input command is and process it
    //~ strcmp -> comers two strings
    if (strcmp(command, "BUILD") == 0){
        //~ will print this if the command input is BUILD
        printf("Building a %s %s Legol building block.\n", size, color);
    }else{
        //~ will print this if the command error is not "BUILD"
        printf("Unknown command: %s\n", command);
    }

    return 0;
    //~ restriction idea -> must have a base to tower -> large block
    //~ compiler should say
    //~ could be similar to reserve block
    //~ see if possible to follow guidelines
}
//~ in normal compiler -> will also tell you when so,something is missing
//~ use the compiler to tell you that it is the wrong some -> suppose to do this in this way
//~ if program correct your logic should match -> if the logic is different it should tell you that
//~ compiler doesn't tell us what the logic issue is but the output does -> maybe used predefined