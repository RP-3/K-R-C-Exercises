#include <stdio.h>

main(){

    int i, j, c, currentWordLength;
    int lengths [20];
    currentWordLength = i = j = 0;

    for(i=0; i<20; i++){
        lengths[i] = 0;
    }

    while((c = getchar()) != EOF){

        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
            currentWordLength++;
        }else{
            if(currentWordLength < 19 && currentWordLength > 0)
                ++lengths[currentWordLength];
            currentWordLength = 0;
        }
    }

    for(i=0; i<20; i++){
        printf("%2d: ", i);
        for(j=0; j<lengths[i]; j++){
            printf("+");
        }
        printf("\n");
    }
}
