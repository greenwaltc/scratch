#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define MAXLINE 1024

int main(void) {
    char* query_string = getenv("QUERY_STRING");

    // Headers
    fprintf(stdout, "Content-Type: text/plain\r\n");

    char* resp_body = strcat("The query string is: ", query_string);
    int len_resp = strlen(resp_body);

    fprintf(stdout, "Content-Length: %d\r\n\r\n", len_resp);

    // Body
    fprintf(stdout, "%s", resp_body);

    return 0;
}