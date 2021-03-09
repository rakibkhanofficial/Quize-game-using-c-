#include <conio.h>
#include <iostream>
#include <windows.h>
#include <cstdio>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <time.h>

using namespace std;

struct questions
{
	char statement[200];
	char option1[100];
	char option2[100];
	char option3[100];
	char option4[100];
	char answer;
};

void intro();
void uprborder();
int display();
int instructions();
int credits();
int dispoflvl();
int play();
int easy();
int medium(int score);
int hard(int score);
void linee();

int main()
{
	intro();      // intro display
	
	instagain:         // to repeat program 

	int n;
	n=display();        // for first display
	
	
	if (n==1)                              // for n==1 play
	{
		int l;
		system("cls");
		l=play();
		if (l==0)
		{
			goto instagain;
		}
		else if (l==3)              // display after zero tries or completion of game
		{
			uprborder();
			cout<<"\n\n\n\n\n\n\n\t\t\t\t  Game Over!";
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\nMain Menu= 1\t\t\t\t\t\t\t\tExit= 0\n";
			for (int i=1 ; i<81 ; i++)
			{
				printf("%c",177);
			}
			int l;
			cin>>l;
			
			switch (l)
			{
				case 1 : goto instagain;
						break;
				case 0 : goto end;
						break;
			}
		}
	}
	
	
	else if (n==2)                // instructions tobe viewed
	{
		
		int n;
		system("cls");
		n=instructions();
		if(n==1)        // for going back to main menu
		{
			system("cls");
			goto instagain;
		}
		else if (n==0)
		{
			goto end;
		}
		
	}
	
	
	else if (n==3)                     // for viewing credits
	{
		system("cls");
		int n;
		n=credits();
		if(n==1)        // for going back to main menu
		{
			system("cls");
			goto instagain;
		}
		else if (n==0)
		{
			goto end;
		}
	}
	
	
	else
	{
		goto end;
	}
	end:
	getch();
}

// upper border function

void uprborder()
{
	cout<<endl;
	for (int i=1 ; i<81 ; i++)
	{
		printf("%c",177);
	}
}

//intro display

void intro()
{
	system("color 7");
	Sleep(1000);
	
	// Q
	
	cout<<"t\t\t\t\t.***.\n";
	cout<<"\t\t\t\t**   **\n";
	cout<<"\t\t\t\t**   **\n";
	cout<<"\t\t\t\t**   **\n";
	cout<<"\t\t\t\t '***''****\n";
	cout<<"\n\n\n\n\n\n\n\t\t\t\tLoading\n\n";
	Sleep(1000);
	system("cls");
	
	// U
	cout<<"\n\n\n\n\n\n\t\t\t\t**   **";
	cout<<"\n\t\t\t\t**   **";
	cout<<"\n\t\t\t\t**   **";
	cout<<"\n\t\t\t\t**   **";
	cout<<"\n\t\t\t\t '***'\n";
	cout<<"\n\n\n\n\n\n\n\t\t\t\tLoading.\n\n";
	Sleep(1000);
	system("cls");
	
	// I
	cout<<"\n\n\n\n\n\n\t\t\t\t*******\n";
	cout<<"\t\t\t\t  ***\n";
	cout<<"\t\t\t\t  ***\n";
	cout<<"\t\t\t\t  ***\n";
	cout<<"\t\t\t\t*******\n";
	cout<<"\n\n\n\n\n\n\n\t\t\t\tLoading..\n\n";
	Sleep(1000);
	system("cls");
	
	// Z
	cout<<"\n\n\n\n\n\n\t\t\t\t*******\n";
	cout<<"\t\t\t\t   ***\n";
	cout<<"\t\t\t\t  ***\n";
	cout<<"\t\t\t\t ***\n";
	cout<<"\t\t\t\t*******\n";
	cout<<"\n\n\n\n\n\n\n\t\t\t\tLoading...\n\n";
	Sleep(1000);
	system("cls");    
	
	// THE
	cout<<"\n\n\n\n\n\n\t\t\t*******\t**  **\t*******\n";
	cout<<"\t\t\t  ***\t**  **\t***\n";
	cout<<"\t\t\t  ***\t******\t*******\n";
	cout<<"\t\t\t  ***\t**  **\t***\n";
	cout<<"\t\t\t  ***\t**  **\t*******\n";
	cout<<"\n\n\n\n\n\n\n\t\t\t\tLoading....\n\n";
    Sleep(1000);
	system("cls");
	system("color 7");

	// GAME
	cout<<"\n\n\n\n\n\n\t\t\t  ***\t **** \t**     **  *******\n";
	cout<<"\t\t\t*'   \t**  **\t***   ***  ***\n";
	cout<<"\t\t\t**  - \t******\t** * * **  *******\n";
	cout<<"\t\t\t**   *\t**  **\t**  *  **  ***\n";
	cout<<"\t\t\t '**'\t**  **\t**     **  *******\n";
	cout<<"\n\n\n\n\n\n\n\t\t\t\tLoading.....\n\n";
	Sleep(1000);
	system("cls");
	
}

// main diplay function

int display()                     // the first main display to start game
{
	system("Color 7");  // console color selector
	
	cout<<endl;
	for (int i=1 ; i<32 ; i++)    // full ascii designs
	{
		printf("%c",177);
	}
	cout<<"********************QUIZ THE GAME***********************";
	for (int i=1 ; i<33 ; i++)
	{
		printf("%c",177);
	}
	cout<<"\n\n\n\n\n\t\t\t\t1.Play";      // some instructions for users
	cout<<"\n\n\t\t\t\t2.Instructions";
	cout<<"\n\n\t\t\t\t3.Credits";
	cout<<"\n\n\t\t\t\t4.Exit";
	cout<<"\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t\t   Press Any Key From 1 To 4...\n";
    for (int i=1 ; i<81 ; i++)   // for lower boarder
	{
		printf("%c",177);
	}
	int n;
	cin>>n;
	return n;
}

// instructions function

int instructions()
{
	uprborder();
	
	cout<<"\n\n\t\t\t\tINSTRUCTIONS\n"<<"\nA Quiz Game. You will be asked questions related to general knowledege or\nanything. You will be given four options.\nAll you have to select or enter the right answer.";
	cout<<"\nYou can start from different level of difficulty or the level will increase\nautomatically if you answered 5 questions correctly.";  
	cout<<"\nEasy level has 5 score each Question.";
	cout<<"\nMedium level has 10 score each Question";
	cout<<"\nHard level has 15 score each Question";
	cout<<"\n\n\n\n\n\n\n\n\n";
	cout<<"Back:Press 1\t\t\t\t\t\t\tExit:Press Zero\n";
    for (int i=1 ; i<81 ; i++)
	{
		printf("%c",177);
	}
	int n;
	cin>>n;
	return n;
}

// credits function

int credits()
{
	uprborder();
	cout<<"\n\n\tThis is the summer training project, Quiz Game . Made by";
	cout<<"\n\n\n\t\t\tName:Abul bashar khan\n\t\t\t\t\t";
	cout<<"\n\t\t\t\tReg:11719775";
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"Back:Press 1\t\t\t\t\t\t\tExit:Press Zero\n";
    for (int i=1 ; i<81 ; i++)
	{
		printf("%c",177);
	}
	int n;
	cin>>n;
	return n;
}

// diplay of levels selection

int dispoflvl()
{
	uprborder();                        // upper border
	cout<<"\n\n\t\t\t\tSelect Level";
	cout<<"\n\n\n\t\t\t\t1.Easy";
	cout<<"\n\n\t\t\t\t2.Medium";
	cout<<"\n\n\t\t\t\t3.Hard";
	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"Back:Press 0\n";
    for (int i=1 ; i<81 ; i++)         // lower border
	{
		printf("%c",177);
	}
	int n;
	cin>>n;
	return n;
}

// play function after selection of any level

int play()
{
	
	int n;
	n=dispoflvl();
	if (n==1)                      // for easy mode
	{
		int n;
		system("cls");
		n=easy();
		return n;
	}
	
	else if (n==2)                // for medium mode
	{
		int n;
		system("cls");
		n=medium(0);
		return n;
	}
	else if (n==3)               // for hard mode
	{
		int n;
		system("cls");
		n=hard(0);
		return n;
	}
	else if (n==0)
	{
		system("cls");
		return n;
	}
}

// easy level function

int easy()                                //  easy mode function 
{
	struct questions easy[10];
	{
		strcpy(easy[0].statement,"Q. 'OS' computer abbreviation usually means ?");     // Question 1
		strcpy(easy[0].option1,"A. Order of Significance");
		strcpy(easy[0].option2,"B. Operating System");
		strcpy(easy[0].option3,"C. Open Software");
		strcpy(easy[0].option4,"D. Optical Sensor");
		easy[0].answer='b';
	}
	{
		strcpy(easy[1].statement,"Q. '.MOV' extension refers usually to what kind of file?");     // Question 2
		strcpy(easy[1].option1,"A. Image file");
		strcpy(easy[1].option2,"B. MS Office document");
		strcpy(easy[1].option3,"C. Audio file");
		strcpy(easy[1].option4,"D. Animation/movie file");
		easy[1].answer='d';
	}
	
	{
		strcpy(easy[2].statement,"Q. Most modern TV's draw power even if turned off. The circuit used \n\t    for this function?");     // Question 3
		strcpy(easy[2].option1,"A. Remote control");
		strcpy(easy[2].option2,"B. Sound");
		strcpy(easy[2].option3,"C. High voltage");
		strcpy(easy[2].option4,"D. Color balance file");
		easy[2].answer='a';
	}
	
	{
		strcpy(easy[3].statement,"Q. The purpose of choke in tube light is ?");     // Question 4
		strcpy(easy[3].option1,"A. To decrease the current");
		strcpy(easy[3].option2,"B. To increase the current");
		strcpy(easy[3].option3,"C. To increase the voltage momentarily");
		strcpy(easy[3].option4,"D. To decrease the voltage momentarily");
		easy[3].answer='c';
	}
	
	{
		strcpy(easy[4].statement,"Q. In computer memory 1 nibble is equal to?");     // Question 5
		strcpy(easy[4].option1,"A. 2 bits");
		strcpy(easy[4].option2,"B. 4 bits");
		strcpy(easy[4].option3,"C. 8 bits");
		strcpy(easy[4].option4,"D. 16 bits");
		easy[4].answer='b';
	}
	
	{
		strcpy(easy[5].statement,"Q. What is the relationship between resistivity r and conductivity s?");     // Question 6
		strcpy(easy[5].option1,"A. R = s2");
		strcpy(easy[5].option2,"B. R = s");
		strcpy(easy[5].option3,"C. R > s");
		strcpy(easy[5].option4,"D. R = 1/s");
		easy[5].answer='d';
	}
	
	{
		strcpy(easy[6].statement,"Q. Servers are computers that provide resources to other computers \n\t   connected to a?");     // Question 7
		strcpy(easy[6].option1,"A. Mainframe");
		strcpy(easy[6].option2,"B. Supercomputer");
		strcpy(easy[6].option3,"C. Network");
		strcpy(easy[6].option4,"D. Client");
		easy[6].answer='c';
	}
	
	{
		strcpy(easy[7].statement,"Q. Word processing, spreadsheet, and photo-editing are examples of?");     // Question 8
		strcpy(easy[7].option1,"A. Application Software");
		strcpy(easy[7].option2,"B. System Software");
		strcpy(easy[7].option3,"C. Operating System Software");
		strcpy(easy[7].option4,"D. Plateform Software");
		easy[7].answer='a';
	}
	
	{
		strcpy(easy[8].statement,"Q. All of the following are examples of input devices EXCEPT a?");     // Question 9
		strcpy(easy[8].option1,"A. Scanner");
		strcpy(easy[8].option2,"B. Mouse");
		strcpy(easy[8].option3,"C. Printer");
		strcpy(easy[8].option4,"D. Keyboard");
		easy[8].answer='c';
	}
	
	{
		strcpy(easy[9].statement,"Q. Computers use the __________ language to process data?");     // Question 10
		strcpy(easy[9].option1,"A. Binary");
		strcpy(easy[9].option2,"B. Relational");
		strcpy(easy[9].option3,"C. Megabyte");
		strcpy(easy[9].option4,"D. Processing");
		easy[9].answer='a';
	}
	
	int score=0;
	int noftry=4;
	char answer;
	
	for (int j=0 ; j<5 ; j++)
	{
		system("cls");
		
		
		int check;
		int i;
		repeat:
		i=rand()%10;
	
		if (check==i)
		{
			goto repeat;
		}
		check=i;
		
		if (noftry>0)         
		{
			cout<<"\n\n\n\n\n\t\t\t\tQuestion No : "<<j+1;
			Sleep(1500);
			system("cls");
			
			uprborder();
		
			cout<<"\n\t\t\t\t\t\t\t\t     Score: "<<score;
			cout<<"\n\t\t\t\t\t\t\t\t     Tries: "<<noftry<<endl;
			
			linee();
			cout<<"\n\n\t"<<easy[i].statement;     
			cout<<"\n\t   "<<easy[i].option1<<"\n\t   "<<easy[i].option2;
			cout<<"\n\t   "<<easy[i].option3<<"\n\t   "<<easy[i].option4<<endl;
			
			linee();
			
			cout<<"\n\n\n\n\n\n\n\n\n";
	
    		for (int j=1 ; j<81 ; j++)         // lower border
			{
				printf("%c",177);
			}
			char casesensitive;
			cin>>casesensitive;
			answer=tolower(casesensitive);
			
			if (answer==easy[i].answer)
			{
				cout<<endl;
			
				cout<<"\n\n\t\tYour Answer Is Correct. ";
				system("pause");
				score=score+5;
			}
			else
			{
				cout<<endl;
			
				cout<<"\n\n\t\tYour Answer Is Wrong. ";
				system("pause");
				noftry=noftry-1;
			}
			
		}
		else
		{
			return 3;
		}
	
		system("cls");
		
	}
	
	if (noftry!=0)
	{
		score=score+20;
		system("cls");
		cout<<"\n\n\n\n\n\t\t\t\tYour Score is "<<score<<"\n\n\t\t\t\t";
		system("pause");
		system("cls");
		cout<<"\n\n\n\n\n\t\t\t\tNext Level\n\n\t\t\t\t";
		system("pause");
		system("cls");
		medium(score);
	}
	else 
	{
		return 3;
	}
}   

// medium level function

int medium(int score)
{
	struct questions medium[10];
	{
		strcpy(medium[0].statement,"Q. Which motor is NOT suitable for use as a DC machine?");     // Question 1
		strcpy(medium[0].option1,"A. Permanent magnet motor");
		strcpy(medium[0].option2,"B. Series motor");
		strcpy(medium[0].option3,"C. Squirrel cage motor");
		strcpy(medium[0].option4,"D. Synchronous motor");
		medium[0].answer='c';
	}
	
	{
		strcpy(medium[1].statement,"Q. 'DB' computer abbreviation usually means?");     // Question 2
		strcpy(medium[1].option1,"A. Data Base");
		strcpy(medium[1].option2,"B. Double Byte");
		strcpy(medium[1].option3,"C. Data Block");
		strcpy(medium[1].option4,"D. Driver Boot");
		medium[1].answer='a';
	}
	
	{
		strcpy(medium[2].statement,"Q. '.TMP' extension refers usually to what kind of file?");     // Question 3
		strcpy(medium[2].option1,"A. Compressed Archive file");
		strcpy(medium[2].option2,"B. Image file");
		strcpy(medium[2].option3,"C. Temporary file");
		strcpy(medium[2].option4,"D. Audio file");
		medium[2].answer='c';
	}
	
	{
		strcpy(medium[3].statement,"Q. Which consists of two plates separated by a dielectric \n\t    and can store a charge?");     // Question 4
		strcpy(medium[3].option1,"A. Inductor");
		strcpy(medium[3].option2,"B. Capacitor");
		strcpy(medium[3].option3,"C. Resistor");
		strcpy(medium[3].option4,"D. Relay");
		medium[3].answer='b';
	}
	
	{
		strcpy(medium[4].statement,"Q. In Physics, what does AM mean?");     // Question 5
		strcpy(medium[4].option1,"A. Angelo marconi");
		strcpy(medium[4].option2,"B. Anno median");
		strcpy(medium[4].option3,"C. Amplitude modulation");
		strcpy(medium[4].option4,"D. Audio file");
		medium[4].answer='c';
	}
	
	{
		strcpy(medium[5].statement,"Q. The set of instructions that tells the computer what to do is?");     // Question 6
		strcpy(medium[5].option1,"A. Softcopy");
		strcpy(medium[5].option2,"B. Software");
		strcpy(medium[5].option3,"C. Hardware");
		strcpy(medium[5].option4,"D. Hardcopy");
		medium[5].answer='b';
	}
	
	{
		strcpy(medium[6].statement,"Q. ---- is the heart of the computer and this is where all \n\t    the computing is done?");     // Question 7
		strcpy(medium[6].option1,"A. Keyboard");
		strcpy(medium[6].option2,"B. Monitor");
		strcpy(medium[6].option3,"C. Central Processing Unit");
		strcpy(medium[6].option4,"D. Printer");
		medium[6].answer='c';
	}
	
	{
		strcpy(medium[7].statement,"Q. Personal computers can be connected together to form a?");     // Question 8
		strcpy(medium[7].option1,"A. Network");
		strcpy(medium[7].option2,"B. Server");
		strcpy(medium[7].option3,"C. Supercomputer");
		strcpy(medium[7].option4,"D. Enterprise");
		medium[7].answer='a';
	}
	
	{
		strcpy(medium[8].statement,"Q. Choose the smallest memory size?");     // Question 9
		strcpy(medium[8].option1,"A. Gigabyte");
		strcpy(medium[8].option2,"B. Megabyte");
		strcpy(medium[8].option3,"C. Kilobyte");
		strcpy(medium[8].option4,"D. Terabyte");
		medium[8].answer='c';
	}
	
	{
		strcpy(medium[9].statement,"Q. The operating system is the most common type of _________ software?");     // Question 10
		strcpy(medium[9].option1,"A. Cuommunication");
		strcpy(medium[9].option2,"B. System");
		strcpy(medium[9].option3,"C. Application");
		strcpy(medium[9].option4,"D. Word-processing");
		medium[9].answer='b';
	}
	
	int noftry=3;
	char answer;
	
	for (int j=0 ; j<5 ; j++)
	{
		system("cls");
		
		int check;
		int i;
		repeat:
		i=rand()%10;
	
		if (check==i)
		{
			goto repeat;
		}
		check=i;
		
		if (noftry>0)         
		{
			cout<<"\n\n\n\n\n\t\t\t\tQuestion No : "<<j+1;
			Sleep(1500);
			system("cls");
			
			uprborder();
		
			cout<<"\n\t\t\t\t\t\t\t\t     Score: "<<score;
			cout<<"\n\t\t\t\t\t\t\t\t     Tries: "<<noftry<<endl;
	
			linee();
			cout<<"\n\n\t"<<medium[i].statement;     
			cout<<"\n\t   "<<medium[i].option1<<"\n\t   "<<medium[i].option2;
			cout<<"\n\t   "<<medium[i].option3<<"\n\t   "<<medium[i].option4<<endl;
			
			linee();
			cout<<"\n\n\n\n\n\n\n\n\n";
	
    		for (int j=1 ; j<81 ; j++)         // lower border
			{
				printf("%c",177);
			}
			char casesensitive;
			cin>>casesensitive;
			answer=tolower(casesensitive);
			
			if (answer==medium[i].answer)
			{
				cout<<endl;
			
				cout<<"\n\n\t\tYour Answer Is Correct. ";
				system("pause");
				score=score+5;
			}
			else
			{
				cout<<endl;
			
				cout<<"\n\n\t\tYour Answer Is Wrong. ";
				system("pause");
				noftry=noftry-1;
			}
		}
		else
		{
			return 3;
		}
	
		system("cls");
	}	
		 
	if (noftry!=0)
	{
		score=score+20;
		system("cls");
		cout<<"\n\n\n\n\n\t\t\t\tYour Score is "<<score<<"\n\n\t\t\t\t";
		system("pause");
		system("cls");
		cout<<"\n\n\n\n\n\t\t\t\tNext Level\n\n\t\t\t\t";
		system("pause");
		system("cls");
		hard(score);
	}
	else 
	{
		return 3;
	}
}

// hard level function selection

int hard(int score)
{
	struct questions hard[10];
	{
		strcpy(hard[0].statement,"Q. The base of the hexadecimal number system is?");     // Question 1
		strcpy(hard[0].option1,"A. 2");
		strcpy(hard[0].option2,"B. 8");
		strcpy(hard[0].option3,"C. 10");
		strcpy(hard[0].option4,"D. 16");
		hard[0].answer='d';
	}
	
	{
		strcpy(hard[1].statement,"Q. The Operating System Manages?");     // Question 2
		strcpy(hard[1].option1,"A. Processes");
		strcpy(hard[1].option2,"B. Memory");
		strcpy(hard[1].option3,"C. Disks and I/O devices");
		strcpy(hard[1].option4,"D. All of the above");
		hard[1].answer='d';
	}
	
	{
		strcpy(hard[2].statement,"Q. Data that are accumulated and processed in group called?");     // Question 3
		strcpy(hard[2].option1,"A. Group processing");
		strcpy(hard[2].option2,"B. Batch Processing");
		strcpy(hard[2].option3,"C. Time sharing");
		strcpy(hard[2].option4,"D. None of these.");
		hard[2].answer='b';
	}
	
	{
		strcpy(hard[3].statement,"Q. Which of the following are true about firewalls?");     // Question 4
		strcpy(hard[3].option1,"A. Follows a set of rules");
		strcpy(hard[3].option2,"B. Can be either a hardware or software device");
		strcpy(hard[3].option3,"C. Filters network traffic");
		strcpy(hard[3].option4,"D. All the above");
		hard[3].answer='d';
	}
	
	{
		strcpy(hard[4].statement,"Q. What are the four things needed to connect to the Internet?");     // Question 5
		strcpy(hard[4].option1,"A. Monitor, keyboard, mouse, modem");
		strcpy(hard[4].option2,"B. Telephone line, PDA, modem and computer");
		strcpy(hard[4].option3,"C. Telephone line, modem, computer, and an ISP");
		strcpy(hard[4].option4,"D. Modem, computer, PDA and ISP");
		hard[4].answer='c';
	}
	
	{
		strcpy(hard[5].statement,"Q. Where is the headquarters of Intel located?");     // Question 6
		strcpy(hard[5].option1,"A. Redmond, Washington");
		strcpy(hard[5].option2,"B. Tucson, Arizona");
		strcpy(hard[5].option3,"C. Santa Clara, California");
		strcpy(hard[5].option4,"D. Richmond, Virginia");
		hard[5].answer='c';
	}
	
	{
		strcpy(hard[6].statement,"Q. Who co-created the UNIX operating system in 1969 with\n\t    Dennis Ritchie?");     // Question 7
		strcpy(hard[6].option1,"A. Bjarne Stroustrup");
		strcpy(hard[6].option2,"B. Steve Wozniak");
		strcpy(hard[6].option3,"C. Niklaus Wirth");
		strcpy(hard[6].option4,"D. Ken Thompson");
		hard[6].answer='d';
	}
	
	{
		strcpy(hard[7].statement,"Q. Voltage is sometimes referred to as EMF, or Electromotive...?");     // Question 8
		strcpy(hard[7].option1,"A. Field");
		strcpy(hard[7].option2,"B. Force");
		strcpy(hard[7].option3,"C. Factor");
		strcpy(hard[7].option4,"D. Flash");
		hard[7].answer='b';
	}
	
	{
		strcpy(hard[8].statement,"Q. What was the active medium used in the first working\n\t    laser ever constructed?");     // Question 9
		strcpy(hard[8].option1,"A. A diamond block");
		strcpy(hard[8].option2,"B. Helium-neon gas");
		strcpy(hard[8].option3,"C. A ruby rod");
		strcpy(hard[8].option4,"D. Carbondioxide gas");
		hard[8].answer='c';
	}
	
	{
		strcpy(hard[9].statement,"Q. Which is a type of Electrically-Erasable Programmable\n\t    Read-Only Memory?");     // Question 10
		strcpy(hard[9].option1,"A. Flash");
		strcpy(hard[9].option2,"B. Frame");
		strcpy(hard[9].option3,"C. Furry");
		strcpy(hard[9].option4,"D. Flang");
		hard[9].answer='a';
	}

	int noftry=2;
	char answer;
	
	for (int j=0 ; j<5 ; j++)
	{
		
		system("cls");
		int check;
		int i;
		repeat:
		i=rand()%10;
	
		if (check==i)
		{
			goto repeat;
		}
		check=i;
		
		if (noftry>0)         
		{
			cout<<"\n\n\n\n\n\t\t\t\tQuestion No : "<<j+1;
			Sleep(1500);
			system("cls");
			
			uprborder();
			
			cout<<"\n\t\t\t\t\t\t\t\t     Score: "<<score;
			cout<<"\n\t\t\t\t\t\t\t\t     Tries: "<<noftry<<endl;
			
			linee();
			
			cout<<"\n\n\t"<<hard[i].statement;     
			cout<<"\n\t   "<<hard[i].option1<<"\n\t   "<<hard[i].option2;
			cout<<"\n\t   "<<hard[i].option3<<"\n\t   "<<hard[i].option4<<endl;
			
			linee();
			
			cout<<"\n\n\n\n\n\n\n\n\n";
	
    		for (int j=1 ; j<81 ; j++)         // lower border
			{
				printf("%c",177);
			}
			char casesensitive;
			cin>>casesensitive;
			answer=tolower(casesensitive);
			
			if (answer==hard[i].answer)
			{
				cout<<endl;
			
				cout<<"\n\n\t\tYour Answer Is Correct. ";
				system("pause");
				score=score+5;
			}
			else
			{
				cout<<endl;
			
				cout<<"\n\n\t\tYour Answer Is Wrong. ";
				system("pause");
				noftry=noftry-1;
			}
		}
		else
		{
			return 3;
		}
	
		system("cls");
	}
	
	if (noftry!=0)
    {
		score=score+20;
		system("cls");
		cout<<"\n\n\n\n\n\t\t\t\tYour Score is "<<score<<"\n\n\t\t\t\t";
		system("pause");
		system("cls");
		cout<<"\n\n\n\n\n\t\t\t\tYou Have Mastered\n\n\t\t\t\t";
		cout<<"\n\n\t\t\t\tThe Game\n\n\n\t\t\t\t";
		system("pause");
		system("cls");
		return 3;
	}
	else 
	{
		return 3;
	}
}

// for line above and below every question
void linee()
{
	for(int i=0 ; i<80 ; i++)
	{
		cout<<"-";
	}
}









