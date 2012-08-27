//
//  InputProtector.h
//  InputProtector
//
//  Created by Stephan Rabanser on 27.08.12.
//  Copyright (c) 2012 Stephan Rabanser. All rights reserved.
//

#ifndef _InputProtector_h
#define _InputProtector_h

/*
 This function causes all functions that take something from STDIN (such as scanf()) not to echo the user's input.
 */
void protectInput(void);

/*
 This function restores the usual echo behaviour.
 */
void unprotectInput(void);

#endif