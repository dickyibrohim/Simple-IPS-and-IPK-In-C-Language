#include "header.h"
// DICKY IBROHIM
/// Procedure for Style Header only
void headermain () /// Style Only
{
    printf("   \f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f");
    printf("\n   ---------------------------------------- Welcome to Auto Simple IPS/ IPK ------------------------------------\n");
     printf("\n   ---------------POINT A= 4 (85-100), B= 3(75-84.99), C=2 (65-74.99), D= 1 (50-64.99), OTHER=0, ---------------\n");
    printf("   \f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f");
     printf("\n   \f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f");

}



void menu ()
{
    printf ("\n    Available to calculate \n\t1 = for IPS, \n\t2 = for IPK \n\t* What you want to calculate? Answer: ");
if(scanf("%d",&choice) == 1) // if INTEGER DO THIS
  {
    switch (choice)
    {   int manysubnow, manysemester;
        case 1: // Hitung IPS
                system("cls");
                printf ("\n\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f Welcome to calculate your IPS this section:\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\ \n");
                printf ("How many Subject this semester?, Answer: ");
                scanf ("%d", &manysubnow);
                calculateips (value, many_sks, grade,totalvalue, manysubnow);
                break;
        case 2: // Hitung IPK
                system("cls");
                printf ("\n\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f Welcome to calculate your IPK this section:\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\ \n");
                printf ("How many Semester to Calculate?, Answer: ");
                scanf ("%d", &manysemester);
                loopingwithrec (ipk, 0, manysemester);
                break;
        default:
            system ("cls");
            menu ();
    }
  }
  else /// IF NOT INTEGER WILL BE ERROR
  {   system ("cls");
      printf ("Please Input a Number NOT Char! - Open Program And Repeat Again, Please!\n");
      return 0;
  }
}



/// SUM ARRAY WITH RECRUSIVE -- For TotalSKS in calculateips
int sumrec (int myarray [], int manydata)
{   float A=0;
    if (manydata<0) /// BASIS
    {

        return 0;
    }
    else
    {

        A= myarray [manydata]+sumrec(myarray, manydata-1);
        return A;
    }
}

//

void calculateips (float value[], int many_sks[], int grade [], float totalvalue [], int manydata) // call At menu procedure
{   int loop1, loop2, TotalSKS=0, Total=0;
    float IPS=0, SUM=0;
    char subject [50][60]; ///50 Number_String (Banyak String), 60 lenght string

    for (loop1=0; loop1<manydata; loop1++)
    {
        printf ("Subject %d\n", loop1+1);
        printf ("\tSubject Name (BRIEF into one word, Ex.: Algorithm Programming -> ALPRO):");
        scanf("%s", &subject[loop1]);

        printf ("\tMany SKS: ");
        scanf ("%d", &many_sks[loop1]);
        if (many_sks[loop1]>4)
        {
            printf ("\n\n\t\t\t\t\t\f\f\fSorry You Input More than 4 SKS\f\f\f\n");
            printf ("\tMany SKS Max 4: ");
            scanf ("%d", &many_sks[loop1]);

        }
        printf ("\tYour Value: ");
        scanf ("%f", &value[loop1]);
        if (value[loop1]>100)
        {   system("cls");
            printf ("\n\n\t\t\t\f\f\fSorry You Input Incredible value more that 4f\f\f\n");
            system ("pause");
            system("cls");
            return 0;
        }
        printf ("\n\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\n");
    }

   printf ("\n\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f Result of IPS This Semester: \f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f\f \n");
   for (loop2=0; loop2<manydata; loop2++)
    { // CONDITION

        printf ("%s\t: ", subject[loop2]);
         if (value[loop2]>=85&&value[loop2]<=100)
        {
            printf ("*Subject grade : A\n");
            grade [loop2]=4;
        }
         else if (value[loop2]>=75&&value[loop2]<85)
        {
            printf ("*Subject grade : B\n");
            grade [loop2]=3;
        }
         else if (value[loop2]>=65&&value[loop2]<75)
        {
            printf ("*Subject grade : C\n");
            grade [loop2]=2;
        }
         else if (value[loop2]>=50&&value[loop2]<65)
        {
            printf ("*Subject grade : D\n");
            grade [loop2]=1;
        }
       else
        {
            printf ("*Subject grade : E\n");
            grade [loop2]=0;
        }
        totalvalue [loop2]=many_sks[loop2]*grade [loop2];
        SUM+=totalvalue [loop2];
    }

    TotalSKS= sumrec (many_sks, manydata-1); // CALL WITH RECRUSIVE FUNCTION
    printf ("\t* Total SKS      : %d\n", TotalSKS);
    printf ("\t* Total IPS      : %.2f\n", SUM/TotalSKS);
 printf("\n   ---POINT A= 4 (85-100), B= 3(75-84.99), C=2 (65-74.99), D= 1 (50-64.99), OTHER=0, ---\n");

}


//Looping Input With Recrusive
float loopingwithrec (float ipk [], int cur, int manysemester)
{ float sumipk=0;
    int loop1;
    if (cur==manysemester-1)
    {
        printf ("\tInput IPS Semester %d= ", cur+1);
        scanf ("%f", &ipk [cur]);
            for (loop1=0; loop1<manysemester; loop1++)
                {
                    sumipk+= ipk [loop1];
                }
                float *result;
                printf ("** IPK= %.2f", devidedpointer (sumipk, manysemester, &result));
printf("\n  ---POINT A= 4 (85-100), B= 3(75-84.99), C=2 (65-74.99), D= 1 (50-64.99), OTHER=0, ---\n");
        return;
    }
    else
    {
        printf ("\tInput IPS Semester %d= ", cur+1);
        scanf ("%f", &ipk [cur]);
        return loopingwithrec(ipk, cur+1, manysemester);
    }
}

// POINTER DEVIDED
float devidedpointer (float number1, float number2, float *result)
{
    *result= number1/number2;
    return *result;
}
