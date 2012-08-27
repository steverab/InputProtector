//
//  main.c
//  InputProtector
//
//  Created by Stephan Rabanser on 27.08.12.
//  Copyright (c) 2012 Stephan Rabanser. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "InputProtector.h"

int main(int argc, const char * argv[])
{
    
    // Read in the user's username. It shows on screen as you would expect.
    char username[50];
    printf("Username: ");
    scanf("%s", username);
    
    // Switch on input protection.
    protectInput();
    
    // Read in the user's password. Because of the prevoius protectInput() call the user's input will be hidden.
    char password[100];
    printf("Password: ");
    scanf("%s", password);
    
    // We read the password, so we can unprotect all user inputs from here on.
    unprotectInput();
    
    // Print out the user's username and password just to prove that we read all user inputs successfully.
    printf("\nYour username: %s\n",username);
    printf("Your password: %s\n",password);
    
    return EXIT_SUCCESS;
}