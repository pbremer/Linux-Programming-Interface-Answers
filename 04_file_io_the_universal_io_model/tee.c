/**
 * tee.c
 * 
 * Patrick Bremer
 * 
 * This file re-impliments the tee command
 * Usage: ./tee [OPTION] FILE
 */

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <getopt.h>

#ifndef MY_BUFFER_SIZE /* Used for testing */
#define MY_BUFFER_SIZE BUFSIZ
#endif /* MY_BUFFER_SIZE */

static char* buf[MY_BUFFER_SIZE];

static bool append = false;

/**
 * Prints application's help info to stderr
 */
static void print_usage(char* name);

int main(int argc, char* argv[])
{    
    int opt;

    while ((opt = getopt(argc, argv, ":a")) != -1)
    {
        switch (opt)
        {
            case 'a':
                append = true;
                break;
            case '?':
                print_usage(argv[0]);
                return EXIT_FAILURE;
                break;
            default:
                break;
        }
    }

    if (argc < 2 || argc == optind)
    {
        print_usage(argv[0]);
        return EXIT_FAILURE;
    }

    fprintf(stdout, "File: %s\n", argv[optind]);

    return EXIT_SUCCESS;
}

static void print_usage(char* name)
{
    fprintf(stderr, "Usage: %s [OPTION] FILE\n", name);
    fprintf(stderr, "Copy standard input to FILE, also to standard output\n");
    fprintf(stderr, "\n");
    fprintf(stderr, "  -a   Append to the given FILE, do not overwrite\n");
}