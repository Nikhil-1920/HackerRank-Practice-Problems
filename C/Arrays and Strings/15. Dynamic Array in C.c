// Library Problem
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int *total_number_of_books;
int **total_number_of_pages;

int main(void) {
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);

    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);

    total_number_of_pages = (int **)malloc(total_number_of_shelves
                            * sizeof(int *));
                            
    total_number_of_books = (int *)malloc(total_number_of_shelves
                            * sizeof(int));

    for(int i=0; i<total_number_of_shelves; ++i) {
        total_number_of_pages[i] = malloc(total_number_of_shelves
                                    * sizeof(int));
    }

    while(total_number_of_queries--) {
        int type_of_query;

        scanf("%d", &type_of_query);

        if(type_of_query == 1) {
            int shelf, pages;
            scanf("%d %d", &shelf, &pages);
            total_number_of_books[shelf]++;  
            int *book = total_number_of_pages[shelf];
            while(*book != 0)
                book++;
            *book = pages;       
        }
        else if(type_of_query == 2) {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", *(*(total_number_of_pages + x) + y));
        }
        else {
            int x;
            scanf("%d", &x);
            printf("%d\n", *(total_number_of_books + x));
        } 
    }

    if(total_number_of_books)
        free(total_number_of_books);
    
    for(int i=0; i<total_number_of_shelves; ++i) {
        if(*(total_number_of_pages + i))
            free(*(total_number_of_pages + i));
    }

    if(total_number_of_pages)
        free(total_number_of_pages);

    return 0;
}