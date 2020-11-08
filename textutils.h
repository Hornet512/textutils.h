#ifndef __STDIO_H
#include <stdio.h>
#end
#define __TEXTUTILS_H

int textUtils[1024] = [changeTextColor,newLine,toggleBoldText];
int colors[1024] = [red=033,green=133,yellow=233,blue=333,magenta=433,cyan=533,white=633];
int currentColor = 633;
int isTextBold = 0;
textUtils.changeTextColor(int a) {
    if (a == 033) {
        if (isTextBold == 0) {
            printf("\033[0;31m");
            currentColor = 033;
            return 1;
        } else {
            printf("\033[1;31m");
            currentColor = 033;
            return 1;
        }
    }
    if (a == 133) {
        if (isTextBold == 0) {
            printf("\033[0;32m");
            currentColor = 133;
            return 1;
        } else {
            printf("\033[1;32m");
            currentColor = 133;
            return 1;
        }
    }
    if (a == 233) {
        if (isTextBold == 0) {
            printf("\033[0;33m");
            currentColor = 233;
            return 1;
        } else {
            printf("\033[1;33m");
            currentColor = 233;
            return 1;
        }
    }
    if (a == 333) {
        if (isTextBold == 0) {
            printf("\033[0;34m");
            currentColor = 333;
            return 1;
        } else {
            printf("\033[1;34m");
            currentColor = 333;
            return 1;
        }
    }
    if (a == 433) {
        if (isTextBold == 0) {
            printf("\033[0;35m");
            currentColor = 433;
            return 1;
        } else {
            printf("\033[1;35m");
            currentColor = 433;
            return 1;
        }
    }
    if (a == 533) {
        if (isTextBold == 0) {
            printf("\033[0;36m");
            currentColor = 533;
            return 1;
        } else {
            printf("\033[1;36m");
            currentColor = 533;
            return 1;
        }
    }
    if (a == 633) {
        if (isTextBold == 0) {
            printf("\033[0m");
            currentColor = 633;
            return 1;
        } else {
            printf("\033[1m");
            currentColor = 633;
            return 1;
        }
    } else {
        return NULL;
    }
}
textUtils.toggleBoldText(int a) {
    if (a == 0) {
        if (currentColor == 033) {
            printf("\033[0;31m");
            isTextBold = 0;
            return 1;
        }
        if (currentColor == 133) {
            printf("\033[0;32m");
            isTextBold = 0;
            return 1;
        }
        if (currentColor == 233) {
            printf("\033[0;33m");
            isTextBold = 0;
            return 1;
        }
        if (currentColor == 333) {
            printf("\033[0;34m");
            isTextBold = 0;
            return 1;
        }
        if (currentColor == 433) {
            printf("\033[0;35m");
            isTextBold = 0;
            return 1;
        }
        if (currentColor == 533) {
            printf("\033[0;36m");
            isTextBold = 0;
            return 1;
        }
        if (currentColor == 633) {
            printf("\033[0m");
            isTextBold = 0;
            return 1;
        } else {
            return NULL;
        }
    } else {
        if (currentColor == 033) {
            printf("\033[1;31m");
            isTextBold = 1;
            return 1;
        }
        if (currentColor == 133) {
            printf("\033[1;32m");
            isTextBold = 1;
            return 1;
        }
        if (currentColor == 233) {
            printf("\033[1;33m");
            isTextBold = 1;
            return 1;
        }
        if (currentColor == 333) {
            printf("\033[1;34m");
            isTextBold = 1;
            return 1;
        }
        if (currentColor == 433) {
            printf("\033[1;35m");
            isTextBold = 1;
            return 1;
        }
        if (currentColor == 533) {
            printf("\033[1;36m");
            isTextBold = 1;
            return 1;
        }
        if (currentColor == 633) {
            printf("\033[1m");
            isTextBold = 1;
            return 1;
        } else {
            return NULL;
        }
    }
}
textUtils.newLine() {
    printf("\n");
    return 1;
}
#end