# Moving Average Filter

## Overview
This is a simple filter to calculate moving averages.  It takes input from 
standard in and outputs the averages to standard out.

The input is floating point numbers one per line.  The output is 0 until 
a moving average has been calculated.  It does a moving average of 50 samples.

## Example

    genW | movingAve > movingAve.out
    
## Test Program
*genW* is supplies as a test program.  It outputs 4 test series: 50 constant
values of 25.  A ramp from 1 to 50.  A ramp from 50 to 1.  And 50 random 
numbers.

## Compile

    g++ -std=c++11 movingAve.cpp -o movingAve
    g++ -std=c++11 genW.cpp -o genW
    
## Legal
These programs are licensed under the open source license 
*The MIT License (MIT)*

Copyright (c) 2014 Craig Dawson

