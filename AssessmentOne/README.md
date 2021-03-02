Contents
================
*   [Overview](#overview)
    *   [Copyrights](#Copyrights)
    *   [Author](#Author)
*   [Assessment One](#block)
    *   [Introduction](#p)
    *   [Requirments](#header)



* * *
<h2 id="overview">Overview</h2>

<h3 id="Copyrights">Copyrights</h3>
Copyright (C) - University of Colorado.


Redistribution, modification or use of this software in source or binary forms is permitted as long as the files maintain this copyright. Users are permitted to modify this and use it to learn about the field of embedded software. Alex Fosdick and the University of Colorado are not liable for any misuse of this material.
 

<h3 id="Author">Author</h3>
This code created by Alex Fosdick, modified by Muhammad Ibrahim - politecnico di Torino.


* * *
<h2 id="Assessment One">Assessment One</h2>

<h3 id="Introduction">Introduction</h3>
You are to write a couple of functions that can analyze an array of unsigned char data items and report analytics on the maximum, minimum, mean, and median of the data set. In addition, you will need to reorder this data set from large to small. All statistics should be rounded down to the nearest integer. After analysis and sorting is done, you will need to print that data to the screen in nicely formatted presentation.

#### **The repo contains 2 files:**
1. stats.c - Implementation file for your C-programming code
2. stats.h -  Header file for your C-programming code

<h3 id="Requirments">Requirments</h3>


 **Implementation of eight functions in the stats.c file:**

| Function      | Description |
| ------------- | ----------- |
| main()            | The main entry point for your program       |
| print_statistics()| A function that prints the statistics of an array including minimum, maximum, mean, and median.   |
| print_array()     | Given an array of data and a length, prints the array to the screen|
| find_median()     | Given an array of data and a length, returns the median value|
| find_mean()       | Given an array of data and a length, returns the mean|
| find_maximum()    | Given an array of data and a length, returns the maximum|
| find_minimum()    | Given an array of data and a length, returns the minimum|
| sort_array()      | Given an array of data and a length, sorts the array from largest to smallest.  (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )|


**Most of the functions in the stats.c file require 2 input parameters and one return value:**

>>
    Input: A unsigned char pointer to an n-element data array
    Input: An unsigned integer as the size of the array
    Output: An unsigned char result from the function
