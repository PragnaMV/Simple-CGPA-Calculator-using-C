#include<stdio.h>
int main()
{
  int i,n,m=0,j,marks[10],credits[10],gradepoint,totalcredit=0,subject;
  float semestergrade[5],sgtotal=0.0,SGPA[10],CGPA,sgpatotal=0.0;
  one:
  printf("enter number of semesters completed\n");
  scanf("%d",&m);
  two:
    if(m<=8)
    {
    for(j=1;j<=m;j++)
    {
     printf("enter number of subjects of semester %d\n",j);
     scanf("%d",&n);
     if(n<=9)
     {
      for(i=1;i<=n;i++)
      {
          three:
              printf("\n enter subject %d : obtained marks and credits\n",i);
              scanf("%d",&marks[i]);
              scanf("%d",&credits[i]);
              if(marks[i]<=100 && credits[i]<=5)
              {
               if(marks[i]>=90)
               {
                gradepoint=10;
               }
             else if(marks[i]>=80 && marks[i]<90)
               {
                gradepoint=9;
               }
             else if(marks[i]>=70 && marks[i]<80)
               {
                gradepoint=8;
               }
             else if(marks[i]>=60 && marks[i]<70)
               {
                gradepoint=7;
               }
             else if(marks[i]>=46 && marks[i]<60)
               {
                gradepoint=6;
               }
            else
               {
                gradepoint=5;
              }
        totalcredit=(totalcredit+credits[i]);
        semestergrade[i]=(credits[i]*gradepoint);
        sgtotal=(sgtotal+semestergrade[i]);
        SGPA[j]=(sgtotal/totalcredit);
              }
              else
           {
               printf("invalid information !!!\n");
               printf("\n enter marks below 100 & credits below 5 \n");
               goto three;
               break;
           }
      }
      printf("SGPA of semester %d=%.3f\n",j,SGPA[j]);
      sgpatotal=sgpatotal+SGPA[j];
     }
     else
    {
        printf("invalid!!! you can enter upto 9 subjects only....\n");
        goto two;
        break;
    }
    }
    CGPA=(sgpatotal/m);
      printf("\n CGPA of %d semesters=%.2f\n",m,CGPA);
    }
    else
    {
        printf("\n invalid!!you can enter upto 8 semester's\n");
        goto one;
    }
}
