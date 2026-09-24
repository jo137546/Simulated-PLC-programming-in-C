#include <stdio.h>
#include <stdbool.h>


// main function, put variables here
int main(void)
{
    bool startInput = true;
    bool stopInput = false;
    bool estopInput = false;

    bool motorOutput = false;
    bool alarmOutput = false;

    printf("Mock PLC Controller\n");
    printf("-------------------\n");

    if (estopInput == true) {
        motorOutput = false;
        alarmOutput = true;
    }

    else {
        
        if (stopInput == false) {
            motorOutput = false;
        }

        else if (startInput == true) {
            motorOutput = true;
        }
    }

return 0;

}

