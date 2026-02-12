#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

int main()
{
    int people;

    printf("How many RSVPs are there? ");
    scanf("%d", &people);
    getchar();

    char **list = malloc(people * sizeof(char *));

    char buffer[SIZE];

    for (int i = 0; i < people; i++)
    {
        list[i] = malloc(SIZE);

        printf("RSVP #%d ", i + 1);
        fgets(buffer, SIZE, stdin);
        strcpy(list[i], buffer);
    }
    printf("\nYour RSVPs\n");

    for (int i = 0; i < people; i++)
    {
        printf("RSVP %d: %s", i + 1, list[i]);
        free(list[i]);
    }

    free(list);
    return 0;
}