//
//  InputProtector.c
//  InputProtector
//
//  Created by Stephan Rabanser on 27.08.12.
//  Copyright (c) 2012 Stephan Rabanser. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <termios.h>

#include "InputProtector.h"

struct termios term, termOrig;

void protectInput()
{
    tcgetattr(STDIN_FILENO, &term);
    termOrig = term;
    term.c_lflag &= ~ECHO;
    tcsetattr(STDIN_FILENO, TCSANOW, &term);
}

void unprotectInput()
{
    tcsetattr(STDIN_FILENO, TCSANOW, &termOrig);
}