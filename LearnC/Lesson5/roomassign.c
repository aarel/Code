/* Demonstrates using multiple return statements in a function. */

# include <stdio.h>

char last_init;
int room;

int room_assign(char last_init);

int main(void)
{
    puts("\nEnter the first initial of your last name: \n");
    scanf("%c", &last_init);

    room = room_assign(last_init);

    printf("\nYou need to report to room %d\n\n", room);

    return 0;
}

int room_assign(char li)
{
    /*
       This if statement test whether the first initial is A-M or N-Z
       with the first group being assigned to room 1045 and the rest to 1055.
    */

    /*
       The or part of the statement checks both lower and uppercase.
    */

    if ((li >= 'a' && li <= 'm') || (li >= 'A' && li <= 'M'))
        return 1045;
    else
        return 1055;
}
