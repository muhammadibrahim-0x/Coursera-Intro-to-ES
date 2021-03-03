Contents
================
*   [Overview](#overview)
    *   [Copyrights](#Copyrights)
    *   [Author](#Author)
*   [Assessment One](#Assessment_One)
    *   [Introduction](#Introduction)
    *   [Functional Requirments](#Functional_Requirments)
    *   [Non Functional Requirments](#Non_Functional_Requirments)
    *   [Software Requirments](#Software_Requirments)



* * *
<h2 id="overview">Overview</h2>

<h3 id="Copyrights">Copyrights</h3>
Copyright (C) - University of Colorado.


Redistribution, modification or use of this software in source or binary forms is permitted as long as the files maintain this copyright. Users are permitted to modify this and use it to learn about the field of embedded software. Alex Fosdick and the University of Colorado are not liable for any misuse of this material.
 

<h3 id="Author">Author</h3>
This code created by Alex Fosdick, modified by Muhammad Ibrahim - politecnico di Torino.


* * *
<h2 id="Assessment_One">Assessment One</h2>

<h3 id="Introduction">Introduction</h3>
You are to write a couple of functions that can analyze an array of unsigned char data items and report analytics on the maximum, minimum, mean, and median of the data set. In addition, you will need to reorder this data set from large to small. All statistics should be rounded down to the nearest integer. After analysis and sorting is done, you will need to print that data to the screen in nicely formatted presentation.

#### **The repo contains 2 files:**
1. stats.c - Implementation file for your C-programming code
2. stats.h -  Header file for your C-programming code

<h3 id="Functional_Requirments">Functional Requirments</h3>

| Requirment ID | Name        | Description |
| ------------- | ----------- | ----------- |
| FR1           | Statistics Functions Rquired [Table 1](#TableOne) |Implementation of eight functions in the stats.c file|            


[Table 1](#TableOne)

 Functions rquired according for FR1.

| Function      | Description |
| ------------- | ----------- |
| main()            | The main entry point for your program       |
| statistics_print()| A function that prints the statistics of an array including minimum, maximum, mean, and median.   |
| array_print()     | Given an array of data and a length, prints the array to the screen|
| median_find()     | Given an array of data and a length, returns the median value|
| mean_find()       | Given an array of data and a length, returns the mean|
| maximum_find()    | Given an array of data and a length, returns the maximum|
| minimum_find()    | Given an array of data and a length, returns the minimum|
| array_sort()      | Given an array of data and a length, sorts the array from largest to smallest.  (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )|



<h3 id="Non_Functional_Requirments">Non Functional Requirments</h3>

|Requirment ID | Type | Description  |
| ------------ | ----------- | ----- |
|NFR1  |    Readability |  All variables and functions names must follow   Firmware Development Standard by  Jack G. Ganssle.  [Table 2](#TableTwo)|
|NFR2  |   Efficiency|  Global variables should be avoided.     |
|NFR3  |    Portablility  |   Int and Long datatypes must be avoided, Instead use standard int types defined in <stdint.h>     |
|NFR4  |   Domain |   Addapt Doxygen decoumenting rules|


[Table 2](#TableTwo)

 Variable naming convention according for NFR1.

 |Requirment ID  | Description  |
| ------------ | ----------- | 
|NFR1.0  | Seperate words within the variables by underscores, etc.  I_Love_Pasta          |
|NFR1.1  | Never assume that a verb must be first when naming a variable|
|NFR1.3  |  Acronyms and abbreviations are not allowed as parts of variable names unless: defined in a special Abbreviations Table which is stored in the Version file or an accepted industry convention like LCD, LED and DSP|
|NFR1.4  | never name a variable or function with a leading underscore. As The ANSI C specification restricts the use of names that begin with an underscore and either an uppercase letter or another underscore |


<h3 id="Software_Requirments">Software Requirments</h3>

**Most of the functions in the stats.c file require 2 input parameters and one return value:**

>>
    Input: A unsigned char pointer to an n-element data array
    Input: An unsigned integer as the size of the array
    Output: An unsigned char result from the function
