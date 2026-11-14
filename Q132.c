// Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

#include <stdio.h>
#include <string.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    char light[20];
    enum TrafficLight signal;

    printf("Enter traffic light (RED/YELLOW/GREEN): ");
    scanf("%s", light);

    if (strcmp(light, "RED") == 0)
        signal = RED;
    else if (strcmp(light, "YELLOW") == 0)
        signal = YELLOW;
    else if (strcmp(light, "GREEN") == 0)
        signal = GREEN;
    else {
        printf("Invalid traffic light!\n");
        return 1;
    }

    switch (signal) {
        case RED:
            printf("Stop\n");
            break;

        case YELLOW:
            printf("Wait\n");
            break;

        case GREEN:
            printf("Go\n");
            break;
    }

    return 0;
}