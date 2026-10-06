#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    setenv("TZ", "America/Los_Angeles", 1);
    tzset();

    time_t t = time(NULL);
    struct tm *localt = localtime(&t);

    char buf[30];
    strftime(buf, sizeof buf, "%Y-%m-%d %H:%M:%S %Z", localt);

    printf("time in California: %s\n", buf);
    return 0;
}
