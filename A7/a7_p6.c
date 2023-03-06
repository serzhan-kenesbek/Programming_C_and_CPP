/*
CH-230-A
a7_p6.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

struct person {
    char name[30];
    int age;
};

// a boolean function to sort by names
_Bool compare_names(struct person p1, struct person p2) {
    if (((p1.age > p2.age) && strcmp(p1.name, p2.name) == 0) || (strcmp(p1.name, p2.name) > 0)) {
        return 1;
    }
    return 0;
}

// a boolean function to sort by ages
_Bool compare_ages(struct person p1, struct person p2) {
    if ((p1.age > p2.age || (p1.age) == (p2.age)) && (strcmp(p1.name, p2.name) > 0)) {
        return 1;
    }
    return 0;
}

// function for bubblesort
void bubblesort(struct person people[], bool(*compare) (person, person), int number_people) {
    // bubblesort algorithm
    _Bool swapped = 1;
    while (swapped == 1) {
        swapped = 0;
        for (int i = 1; i < number_people; i++) {
            if (compare(people[i - 1], people[i])) {
                struct person buf = people[i - 1];
                people[i - 1] = people[i];
                people[i] = buf;
                swapped = 1;
            }
        }
    }
    // printing after sorting
    for (int i = 0; i < number_people; i++) {
        printf("{%s, %d}; ", people[i].name, people[i].age);
    }
    printf("\n");
}

int main() {
    int number_people;
    scanf("%i", &number_people);
    struct person people[number_people];
    // input
    for (int i = 0; i < number_people; i++) {
        scanf("%s", &people.name);
        scanf("%d", &people.age);
    }
    // function calls
    bubblesort(people, &compare_names, number_people);
    bubblesort(people, &compare_ages, number_people);
    return 0;
}