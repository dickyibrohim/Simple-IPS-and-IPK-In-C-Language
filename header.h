#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// DICKY IBROHIM
// Global Variable
float value [100]; //value per sunject, example: Phisics 100;
int many_sks [100]; // How many SKS Max 24 from total subject in Calculate IPS
int grade [100]; // 1,2,3,4
int choice; // Pilihan
float totalvalue [100]; //sks x grade
float ipk [100]; //IPS Persemester

void headermain ();
void menu ();
int sumrec (int myarray [], int manydata);// For SUM TOTAL SKS
void calculateips (float value[], int many_sks[], int grade [], float totalvalue [], int manydata);
float loopingwithrec (float ipk [], int cur, int manysemester);
float devidedpointer (float number1, float number2, float *result);// IF A,B,C,D --- 4,3,2,1,0 -->
#endif // HEADER_H_INCLUDED
