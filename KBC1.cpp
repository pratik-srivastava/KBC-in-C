//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include<stdio.h>
#include<windows.h>
//#include<>
main()
{
	int ctr=0,wctr;
	float ca,wa;
	char ch;
	
   system("kabir.mp3");
	system("color B0");
	printf("\n\t\t\t*********************************************\n\t\t\t*********************************************");
	printf("\n\t\t\t!!!!WELCOME STUDENTS TO THE ONLINE TEST!!!!");
	printf("\n\t\t\t*********************************************\n\t\t\t*********************************************");
	printf("\n\n\t\t\tKindly read the rules mentioned below:-\n");
	printf("\n\t\t\t========================================================================");
	printf("\n\t\t\t1.Please see no papers are around you.\n\t\t\t2.Don't look here and there.\n\t\t\t3.Take care of the time.\n\t\t\t4.You can edit your answer untill and unless you press enter key.\n\t\t\t5.If answered correctly the display will be green.\n\t\t\t6.If answered wrong the display will be red.");
	printf("\n\t\t\t========================================================================");
	printf("\n\n\t\t\t\t!!!!!GOOD LUCK FOR YOUR EXAM!!!!!");
//	sleep(5);
    system("pause");
	system("cls");
	{
		system("color E5");
		printf("\nQ.1)Who is the Father of C Language.\n");
		printf("\n(a)Dennis Ritchie\n(b)Charles Babbage\n(c)Stefen\n(d)Abacus\n");
		ch=getchar();
		if(ch=='a')
		{
			system("color 20");
			ctr++;
		}
		else
		{
				printf("\a");
			system("color 40");
			wctr++;
		}
		system("cls");
		Sleep(650);
		system("color E5");
		printf("\nQ.2)What is the type to store decimal numbers.\n");
		printf("\n(a)int\n(b)char\n(c)float\n(d)none\n");
		fflush(stdin);
		ch=getchar();
		if(ch=='c')
		{
			system("color 20");
			ctr++;
		}
		else
		{
				printf("\a");
			system("color 40");
			wctr++;
		}
		system("cls");
			Sleep(650);
		system("color E5");
		printf("\nQ.3)What is the type to store integral numbers.\n");
		printf("\n(a)int\n(b)char\n(c)float\n(d)none\n");
		fflush(stdin);
		ch=getchar();
		if(ch=='a')
		{
			system("color 20");
			ctr++;
		}
		else
		{
				printf("\a");
			system("color 40");
			wctr++;
		}
		system("cls");
		Sleep(650);
		system("color E5");
		printf("\nQ.4)The conversion of one type to another by user is known as.\n");
		printf("\n(a)Implicit Conversion\n(b)Binary Conversion\n(c)Explicit Conversion\n(d)none\n");
		fflush(stdin);
		ch=getchar();
		if(ch=='c')
		{
			system("color 20");
			ctr++;
		}
		else
		{
				printf("\a");
			system("color 40");
			wctr++;
		}
		system("cls");
	    	Sleep(650);
		system("color E5");
		printf("\nQ.5)Conversion of one type to another by Compiler is known as.\n");
		printf("\n(a)Explicit Conversion\n(b)Type Casting\n(c)Implicit Conversion\n(d)none\n");
		fflush(stdin);
		ch=getchar();
		if(ch=='c')
		{
			system("color 20");
			ctr++;
		}
		else
		{
				printf("\a");
			system("color 40");
			wctr++;
		}
		system("cls");
			Sleep(650);
		system("color E5");
		printf("\nQ.6)What is the range of character.\n");
		printf("\n(a)-1200 to 1200\n(b)-128 to 127\n(c)235 to 458\n(d)none\n");
		fflush(stdin);
		ch=getchar();
		if(ch=='b')
		{
			system("color 20");
			ctr++;
		}
		else
		{
				printf("\a");
			system("color 40");
			wctr++;
		}
		system("cls");
			Sleep(650);
		system("color E5");
		printf("\nQ.7)What is the range of integers.\n");
		printf("\n(a)-32768 to 32767\n(b)2100 to 8800\n(c)-128 to 127\n(d)none\n");
		fflush(stdin);
		ch=getchar();
		if(ch=='a')
		{
			system("color 20");
			ctr++;
		}
		else
		{
				printf("\a");
			system("color 40");
			wctr++;
		}
		system("cls");
        	Sleep(650);
		system("color E5");
		printf("\nQ.8)Full form of DMA.\n");
		printf("\n(a)Dynamic Main Address\n(b)Dynamic Memory Address\n(c)Dynamic Memory Allocation\n(d)none\n");
		fflush(stdin);
		ch=getchar();
		if(ch=='c')
		{
			system("color 20");
			ctr++;
		}
		else
		{
				printf("\a");
			system("color 40");
			wctr++;
		}
		system("cls");
		Sleep(650);
		system("color E5");
		printf("\nQ.9)Pointer initialised with zero value is known as.\n");
		printf("\n(a)Null Pointer\n(b)Generic Pointer\n(c)Dangling Poiter\n(d)none\n");
		fflush(stdin);
		ch=getchar();
		if(ch=='a')
		{
			system("color 20");
			ctr++;
		}
		else
		{
				printf("\a");
			system("color 40");
			wctr++;
		}
		system("cls");
			Sleep(650);
		system("color E5");
		printf("\nQ.10)Pointer initialised with random value and not with zero is known as.\n");
		printf("\n(a)Generic Pointer\n(b)Wild Pointer\n(c)Void Pointer\n(d)none\n");
		fflush(stdin);
		ch=getchar();
		if(ch=='b')
		{
			system("color 20");
			ctr++;
		}
		else
		{
			printf("\a");
			system("color 40");
			wctr++;
		}
	}
	sleep(2);
	system("cls");
	system("color 5E");
	printf("\n\t\t**********TEST OVER***********");
	printf("\n\t\tTotal Correct answer=%d",ctr);
	printf("\n\t\tTotal Wrong Answer=%d",(10-ctr));
	float percent;
	ca=(float)ctr/10;
	wa=(float)ca*100;
	printf("\n\t\tPercentage=%.2f",wa);
	printf("\n\t\t**********THANK YOU**********");
	system("garmi.mp4");
}
