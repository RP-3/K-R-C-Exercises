#include <stdio.h>

main()
{
    int c, lineCount;

    lineCount = 0;
    while((c = getchar()) != EOF)
        if(c == '\n')
            ++lineCount;
    
    printf("%d\n", lineCount);
}
