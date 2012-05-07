/* This is a number guessing game created for turbo C++. Any one can edit or modify this program. 

By changing the range in line 26 you can increase the range of the random number selected. By changing total in line 6 
you can increase the total chances.
.

Thanks.

Author : Sajin M Prasad
Email : sajinprasadkm@gmail.com */


#include<fstream.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
const int total=7;
const int score=70;
main()
{
  clrscr();
  int num,guess,chance=0,fscore,rchance,chanscore=score/total;
  char ans1,ans2,ans3;
  A:
   clrscr();
   cout<<"\t\t\t\tWelcome to Number Guessing Game";
   cout<<"\n\n\n The computer will decide a number.\n\n You have to guess the number (0-100 both included) in 7 chances";
   cout<<"\n\n\nSo shall we start(Click Enter)";
   getch();
   do
   {
    chance=0;
    randomize();
    num=random(101);
    B:
    clrscr();
    do
    {
     rchance=total-chance;
     if(rchance!=0)
     {
     cout<<"\n\nRemaining chances="<<rchance<<"\t\t\tScore="<<chanscore*rchance;
     cout<<"\n\nEnter your "<<chance+1<<"th guess : ";
     cin>>guess;
     if(guess<0||guess>100)
     {
       cout<<"\n\n\nGuess is out of range. Please try again.";
       getch();
       goto B;
     }
     else if(guess>num)
       cout<<"\n\nGuess is higher. Please try again";
     else if(guess<num)
       cout<<"\n\nGuess is lower. Please try again";
     else
     {
       cout<<"\n\nCongratulations. You Won.";
       break;
     }
     chance++;
     }
     else
       goto C;
    }while(guess!=num);
    cout<<"\n\n\t\tThe total score is "<<chanscore*rchance;
    cout<<"\n\nDo you wanna give another try(y/n) : ";
    cin>>ans1;
   }while(ans1=='y'||ans1=='Y');
   cout<<"\n\nThanks for playing";
   exit(0);
  C:
    cout<<"\n\n\nSorry. You failed. \n\nThe number was "<<num<<".\n\t\t\tBetter luck next time";
    cout<<"\n\nDo you wanna try again(y/n) : ";
    cin>>ans2;
    if(ans2=='y'||ans2=='Y')
      goto A;
    else
      cout<<"\n\nThanks for Playing";
  getch();
}
