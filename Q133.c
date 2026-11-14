// Q133: Create an enum for months and print how many days each month has.

#include <stdio.h>
#include <string.h>

enum Month {
    JAN, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    char monthName[10];
    enum Month month;

    printf("Enter month (JAN-FEB-...-DEC): ");
    scanf("%s", monthName);

    if (strcmp(monthName, "JAN") == 0)
        month = JAN;
    else if (strcmp(monthName, "FEB") == 0)
        month = FEB;
    else if (strcmp(monthName, "MAR") == 0)
        month = MAR;
    else if (strcmp(monthName, "APR") == 0)
        month = APR;
    else if (strcmp(monthName, "MAY") == 0)
        month = MAY;
    else if (strcmp(monthName, "JUN") == 0)
        month = JUN;
    else if (strcmp(monthName, "JUL") == 0)
        month = JUL;
    else if (strcmp(monthName, "AUG") == 0)
        month = AUG;
    else if (strcmp(monthName, "SEP") == 0)
        month = SEP;
    else if (strcmp(monthName, "OCT") == 0)
        month = OCT;
    else if (strcmp(monthName, "NOV") == 0)
        month = NOV;
    else if (strcmp(monthName, "DEC") == 0)
        month = DEC;
    else {
        printf("Invalid month!\n");
        return 1;
    }

    switch (month) {
        case JAN:
        case MAR:
        case MAY:
        case JUL:
        case AUG:
        case OCT:
        case DEC:
            printf("31 days\n");
            break;

        case APR:
        case JUN:
        case SEP:
        case NOV:
            printf("30 days\n");
            break;

        case FEB:
            printf("28 or 29 days\n");
            break;
    }

    return 0;
}