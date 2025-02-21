#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <getopt.h>
#include <stdbool.h>

int main(int argc, char** argv) {

    int opt;
    char* city = NULL;
    bool forecast = false;

    while ((opt = getopt(argc, argv, "c:fh")) != -1) {
        switch (opt) {
            case 'c':
                city = optarg;
                break;
            case 'f':
                forecast = true;
                break;
            case 'h':
                printf("Usage: %s [-c city] [-f] [-h]\n", argv[0]);
                exit(0);

        }
    }

    if (city == NULL) {
        printf("Please specify a city\n");
        exit(1);
    }

    printf("City: %s\n", city);
    printf("Forecast: %s\n", forecast ? "Yes" : "No");


}
