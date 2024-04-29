#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void user_registration(char[], char[]);
void user_login(char[], char[]);

FILE *fptr = NULL;

void collectFeedback();

void computer();
void easy_C();
void medium_C();
void hard_C();

void general_knowledge();
void easy_G();
void medium_G();
void hard_G();

void sports();
void easy_P();
void medium_P();
void hard_P();

void science();
void easy_S();
void medium_S();
void hard_S();

void history();
void easy_H();
void medium_H();
void hard_H();
char name[50];

int main()
{

    char choice;
    char password[50];
    char ch;

    do
    {

        printf("\n\t****************************************");

        printf("\n\t\t\t   WELCOME ");
        printf("\n\t\t\t     TO ");
        printf("\n\t\t\t  QUIZ NOVIA ");
        printf("\n\t*****************************************");

        printf("\n");

        char username[50];
        char password[50];

        // user_registration(username, password);
        // user_login(username, password);
        printf("\n");
        printf("WHICH SUJBECT QUIZ DO YOU LIKE TO ATTEMPT? ");
        puts("");
        puts("");
        puts(">> Enter C for Computer Science");
        puts(">> Enter G for General Knowledge");
        puts(">> Enter S for Science");
        puts(">> Enter P for Sports");
        puts(">> Enter H for History");

        printf("Enter:  ");
        scanf("%c", &choice);

        if (choice == 'C' || choice == 'c')
        {
            computer();
        }
        else if (toupper(choice) == 'G' || choice == 'g')
        {
            general_knowledge();
        }
        else if (toupper(choice) == 'S' || choice == 's')
        {
            science();
        }
        else if (toupper(choice) == 'P' || choice == 'p')
        {
            sports();
        }
        else if (toupper(choice) == 'H' || choice == 'h')
        {
            history();
        }

        collectFeedback();

        char choice;
        int platform;
        printf("Would you like to share your results on social media? (y/n): ");
        scanf(" %c", &choice);

        if (choice == 'y' || choice == 'Y')
        {
            printf("Select the platform to share your results:\n");
            printf("1. Facebook\n");
            printf("2. Instagram\n");
            printf("3. LinkedIn\n");
            printf("4. Twitter\n");
            printf("Enter your choice (1-4): ");
            scanf("%d", &platform);

            switch (platform)
            {
            case 1:
                printf("Sharing to Facebook...\n");

                break;
            case 2:
                printf("Sharing to Instagram...\n");

                break;
            case 3:
                printf("Sharing to LinkedIn...\n");

                break;
            case 4:
                printf("Sharing to Twitter...\n");

                break;

            default:

                printf("Invalid choice. Please select a valid platform.\n");

                break;
            }
        }
        else
        {
            printf("No problem! Your results will not be shared.\n");
        }

        printf("\n");
        printf("If You Want to Continue Press Y otherwise Press N:\n");

    } while (getch() != 'N');
}
void computer()
{
    printf("WELCOME %s to the computer science quiz game\n ", name);
    puts("HERE ARE SOME INSTRUCTIONS: \n");
    puts("1. There are three levels(you have to choose which one to play) ");
    puts("    EASY           MEDIUM           HARD ");
    puts("2. Each level will have 5 questions of 5 marks each. ");
    puts("3. Quiz Will be of 25 Marks. ");
    puts(" ");
    puts("SO LETS JUST GET STARTED!!! ");

    char level[10];
    printf("CHOOSE A LEVEL(Easy,Medium,Hard): ");
    scanf("%s", level);
    char e[10] = "easy";
    char m[10] = "medium";
    char h[10] = "hard";

    if (strcmp(e, level) == 0 || e[0] == 'E')
    {
        easy_C();
    }
    else if (strcmp(m, level) == 0 || m[0] == 'M')
    {
        medium_C();
    }
    else if (strcmp(h, level) == 0 || h[0] == 'H')
    {
        hard_C();
    }
}

void easy_C()
{

    int count;

    int r = 0;

    for (int i = 1; i <= 5; i++)
    {
        system("cls");
        r = i;

        switch (r)
        {
        case 1:
            printf("\n\nWhat is the basic unit of information in a computer?");
            printf("\n\nA.Bit\nB.Byte\nC.Pixel\nD.Character");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Bit");
                getch();

                break;
            }
        case 2:

            printf("\n\nWhich programming language is used to create web pages?");

            printf("\n\nA.Python\nB.Java\nC.HTML\nD.C++");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.HTML");
                getch();

                break;
            }
        case 3:
            printf("\n\nWhat's the binary equivalent of 10?");

            printf("\n\nA.1010\nB.110\nC.1001\nD.011");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.1010");
                getch();

                break;
            }
        case 4:
            printf("\n\nWhich device stores the operating system?");

            printf("\n\nA.ROM\nB.RAM\nC.CPU\nD.Hard Drive");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.RAM");
                getch();

                break;
            }

        case 5:

            printf("\n\n Which key opens a new tab in most browsers?");

            printf("\n\nA.Ctrl+N\nB.Ctrl+T\nC.Ctrl+P\nD.Ctrl+S");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B. Ctrl+T");
                getch();

                break;
            }
        }
    }
    printf("\n");
    printf("\n");

    printf("\t\t\t\tYOUR SCORE IS %d out of 25\n", count);
}

void medium_C()
{
    int count;

    int r = 0;

    for (int i = 1; i <= 5; i++)
    {
        system("cls");
        r = i;

        switch (r)
        {
        case 1:
            printf("\n\nWhat's the most common type of malware?");
            printf("\n\nA.Virus\nB.Ransomware\nC.Worm\nD.Spyware ");
            if (toupper(getch()) == 'D')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.Spyware");
                getch();

                break;
            }
        case 2:

            printf("\n\nWhat's the difference between HTTP and HTTPS?");

            printf("\n\nA.HTTP is for text, HTTPS is for images\nB.HTTP is for downloads, HTTPS is for uploads\nC.HTTP is unsecure, HTTPS is secure\nD.(b) HTTP is for text, HTTPS is for images");

            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.HTTP is unsecure, HTTPS is secure");
                getch();
                break;
            }
        case 3:
            printf("\n\nWhich sorting algorithm has the best average-case time complexity?");

            printf("\n\nA.Insertion Sort\nB.Quick Sort\nC.Selection Sort\nD.Bubble Sort");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Quick Sort");
                getch();

                break;
            }
        case 4:
            printf("\n\nWhat's the purpose of a firewall?");

            printf("\n\nA. Filter incoming traffic \nB. Speed up internet connection\nC.Backup important data\nD. Delete unnecessary files");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Filter incoming traffic ");
                getch();

                break;
            }

        case 5:

            printf("\n\n Cloud = remote...? ");

            printf("\n\nA.Computers\nB.Resources\nC.Shopping\nD.Storage");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B. Storage");
                getch();

                break;
            }
        }
    }
    printf("\n");
    printf("\n");

    printf("\t\t\t\tYOUR SCORE IS %d out of 25\n", count);
}
void hard_C()
{
    int count;

    int r = 0;

    for (int i = 1; i <= 5; i++)
    {
        system("cls");
        r = i;

        switch (r)
        {
        case 1:

            printf("\n\n What is the purpose of version control systems, such as Git?");
            printf("\n\nA.Manage software dependencies\nB.Track changes in source code over time\nC.Optimize database performance\nD.Ensure network security");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Track changes in source code over time");
                getch();

                break;
            }
        case 2:

            printf("\n\nWhich programming paradigm is associated with languages like Haskell and Lisp?");

            printf("\n\nA.Object-Oriented Programming (OOP)\nB.Functional Programming (FP)\nC.Procedural Programming (PP)\nD.Declarative Programming (DP)");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Functional Programming (FP)");
                getch();

                break;
            }
        case 3:

            printf("\n\nWhat is the time complexity of a binary search algorithm in the worst case?");

            printf("\n\nA.O(1)\nB.O(log n)\nC.O(n)\nD.O(n^2)");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.O(log n)");
                getch();

                break;
            }
        case 4:

            printf("\n\nWhich cryptographic technique is commonly used for ensuring the confidentiality of data in transit over the internet?");

            printf("\n\nA.Hashing\nB.Symmetric Encryption\nC.Asymmetric Encryption\nD.Digital Signatures");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Symmetric Encryption");
                getch();

                break;
            }

        case 5:

            printf("\n\n Which type of database model organizes data into tables with relationships defined between them?");

            printf("\n\nA.Hierarchical Database Model\nB.Network Database Model\nC.Relational Database Model (RDBM)\nD.Object-Oriented Database Model");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Relational Database Model (RDBM)");
                getch();
                break;
            }
        }
    }
    printf("\n");
    printf("\n");

    printf("\t\t\t\tYOUR SCORE IS %d out of 25\n", count);
}

void general_knowledge()
{

    printf("WELCOME %s to the general knowledge quiz game\n ", name);
    puts("HERE ARE SOME INSTRUCTIONS: \n");
    puts("");
    puts("1. There are three levels(you have to choose which one to play) ");
    puts("    EASY           MEDIUM           HARD ");
    puts("2. Each level will have 5 questions of 6 marks each. ");
    puts("3. Quiz will be of 30 marks. ");
    puts(" ");
    puts("SO LETS JUST GET STARTED!!!  ");

    char level[10];
    printf("CHOOSE A LEVEL(Easy,Medium,Hard): ");
    scanf("%s", level);
    char e[10] = "easy";
    char m[10] = "medium";
    char h[10] = "hard";

    if (strcmp(e, level) == 0 || e[0] == 'E')
    {
        easy_G();
    }
    else if (strcmp(m, level) == 0 || m[0] == 'M')
    {
        medium_G();
    }
    else if (strcmp(h, level) == 0 || h[0] == 'H')
    {
        hard_G();
    }
}

void easy_G()
{

    int count;

    int r = 0;

    for (int i = 1; i <= 5; i++)
    {
        system("cls");
        r = i;

        switch (r)
        {
        case 1:

            printf("\n\nHighest mountain in the world?");
            printf("\n\nA.Mount Everest\nB.K2\nC.Mount Fuji\nD.Kilimanjaro");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Mount Everest");
                getch();

                break;
            }
        case 2:

            printf("\n\nWhat is the largest ocean on Earth?");

            printf("\n\nA.Pacific Ocean\nB.Arctic Ocean\nC.Atlantic Ocean\nD.Indian Ocean");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Pacific Ocean");
                getch();

                break;
            }
        case 3:

            printf("\n\nWho wrote "
                   "Romeo and Juliet"
                   "?");

            printf("\n\nA.Charles Dickens\nB.William Shakespeare\nC.Jane Austen\nD.Mark Twain");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.William Shakespeare");
                getch();

                break;
            }
        case 4:

            printf("\n\n What is the capital of France?");

            printf("\n\nA.Berlin\nB.Madrid\nC.Paris\nD.Rome");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Paris");
                getch();

                break;
            }

        case 5:

            printf("\n\n How many continents are there on Earth?");

            printf("\n\nA.5\nB.6\nC.7\nD.8");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.7");
                getch();

                break;
            }
        }
    }
    printf("\n");
    printf("\n");

    printf("\t\t\t\tYOUR SCORE IS %d out of 25\n", count);
}

void medium_G()
{
    int count;

    int r = 0;

    for (int i = 1; i <= 5; i++)
    {
        system("cls");
        r = i;

        switch (r)
        {
        case 1:

            printf("\n\nWhat is the currency of Japan?");
            printf("\n\nA.Yuan\nB.Yen\nC.Won\nD.Ringgit ");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Yen");
                getch();

                break;
            }
        case 2:

            printf("\n\nWhich famous artist painted the "
                   "Mona Lisa"
                   "?");

            printf("\n\nA.Michelangelo\nB.Vincent van Gogh\nC.Pablo Picasso\nD.Leonardo da Vinci");

            if (toupper(getch()) == 'D')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.Leonardo da Vinci");
                getch();

                break;
            }
        case 3:
            printf("\n\nWhich planet is known as the "
                   "Red Planet"
                   "?");

            printf("\n\nA.Mars\nB.Jupiter\nC.Earth\nD.Venus");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Mars");
                getch();

                break;
            }
        case 4:

            printf("\n\n Which scientist formulated the laws of motion and universal gravitation?");

            printf("\n\nA.Albert Einstein \nB.Isaac Newton\nC.Galileo Galilei\nD.Nikola Tesla");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Isaac Newton ");
                getch();

                break;
            }

        case 5:

            printf("\n\n What element lights up when you strike a match?");

            printf("\n\nA.Oxygen\nB.Nitrogen\nC.Phosphorus\nD.Sulfur");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C. Phosphorus");
                getch();

                break;
            }
        }
    }
    printf("\n");
    printf("\n");

    printf("\t\t\t\tYOUR SCORE IS %d out of 25\n", count);
}
void hard_G()
{
    int count;

    int r = 0;

    for (int i = 1; i <= 5; i++)
    {
        system("cls");
        r = i;

        switch (r)
        {
        case 1:

            printf("\n\nWho was the first woman to win a Nobel Prize?");
            printf("\n\nA.Marie Curie\nB.Rosalind Franklinte\nC.PiDorothy Crowfoot Hodgkinxel\nD.Barbara McClintock");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Marie Curie");
                getch();

                break;
            }
        case 2:

            printf("\n\n What is the capital of South Korea?");

            printf("\n\nA.Tokyo\nB.Beijing\nC.Seoul\nD.Bangkok");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Seoul");
                getch();

                break;
            }
        case 3:

            printf("\n\nWhich element has the chemical symbol "
                   "Fe"
                   "?");

            printf("\n\nA.Iron\nB.Silver\nC.Gold\nD.Copper");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Iron");
                getch();

                break;
            }
        case 4:

            printf("\n\nWhat scientific theory explains the origins of the universe?");

            printf("\n\nA.String theory\nB.Theory of relativity\nC.Big Bang theory \nD.Quantum mechanics");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Big Bang theory ");
                getch();

                break;
            }

        case 5:

            printf("\n\n What is the world's largest desert by area?");

            printf("\n\nA.Sahara Desert\nB.Gobi Desert\nC.Antarctic Desert\nD.Arctic Desert");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Antarctic Desert");
                getch();

                break;
            }
        }
    }
    printf("\n");
    printf("\n");

    printf("\t\t\t\tYOUR SCORE IS %d out of 25\n", count);
}

void sports()
{
    printf("WELCOME %s to the sports quiz game\n ", name);
    puts("HERE ARE SOME INSTRUCTIONS: \n");
    puts("");
    puts("1. There are three levels(you have to choose which one to play) ");
    puts("    EASY           MEDIUM           HARD ");
    puts("2. Each level will have 5 questions of 6 marks each. ");
    puts("3. Quiz will be of 30 Marks. ");
    puts(" ");
    puts("SO LETS JUST GET STARTED!!! ");

    char level[10];
    printf("CHOOSE A LEVEL(Easy,Medium,Hard): ");
    scanf("%s", level);
    char e[10] = "easy";
    char m[10] = "medium";
    char h[10] = "hard";

    if (strcmp(e, level) == 0)
    {
        easy_P();
    }
    else if (strcmp(m, level) == 0)
    {
        medium_P();
    }
    else if (strcmp(h, level) == 0)
    {
        hard_P();
    }
}

void easy_P()
{

    int count;

    int r = 0;

    for (int i = 1; i <= 5; i++)
    {
        system("cls");
        r = i;

        switch (r)
        {
        case 1:

            printf("\n\nWhich country is famous for its passion for cricket?");
            printf("\n\nA.Brazil\nB.India\nC.Russia\nD.Canada");
            if (toupper(getch()) == 'b')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.India");
                getch();

                break;
            }
        case 2:

            printf("\n\nWho is often called "
                   "The King of Basketball"
                   "?");

            printf("\n\nA.Kobe Bryant\nB.LeBron James\nC.Michael Jordan\nD.Shaquille O'Neal");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Michael Jordan");
                getch();

                break;
            }
        case 3:

            printf("\n\n Who is known as "
                   "The Greatest"
                   " in the sport of boxing?");

            printf("\n\nA.Mike Tyson\nB.Muhammad Ali\nC.Joe Frazier\nD.George Foreman");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Muhammad Ali");
                getch();

                break;
            }
        case 4:

            printf("\n\n  Who holds the record for the highest individual score in a Test innings for Pakistan?");

            printf("\n\nA.Younis Khan\nB.Hanif Mohammad\nC.Inzamam-ul-Haq\nD.Javed Miandad");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Hanif Mohammad");
                getch();

                break;
            }

        case 5:

            printf("\n\n What sport is played at Wimbledon?");

            printf("\n\nA.Golf\nB.Soccer\nC.Cricket\nD.Tennis");
            if (toupper(getch()) == 'D')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.Tennis");
                getch();

                break;
            }
        }
    }
    printf("\n");
    printf("\n");

    printf("\t\t\t\tYOUR SCORE IS %d out of 25\n", count);
}

void medium_P()
{
    int count;

    int r = 0;

    for (int i = 1; i <= 5; i++)
    {
        system("cls");
        r = i;

        switch (r)
        {
        case 1:

            printf("\n\n What is the distance of a marathon race in kilometers?");
            printf("\n\nA.21 km\nB.26.2 km\nC.42 km\nD.50 km ");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.42 km");
                getch();

                break;
            }
        case 2:

            printf("\n\nWhat is the name of the trophy awarded to the winner of the FIFA World Cup?");

            printf("\n\nA.Gold Cup\nB.UEFA Cup\nC.Stanley Cup\nD.Jules Rimet Trophy");

            if (toupper(getch()) == 'D')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.Jules Rimet Trophy");
                getch();

                break;
            }
        case 3:

            printf("\n\nIn which sport do countries compete for the Ryder Cup?");

            printf("\n\nA.Tennis\nB.Golf\nC.Cricket\nD.Rugby");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Golf");
                getch();

                break;
            }
        case 4:

            printf("\n\n Which scientist formulated the laws of motion and universal gravitation?");

            printf("\n\nA. Albert Einstein \nB.  Isaac Newton\nC.Galileo Galilei\nD.  Nikola Tesla");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Isaac Newton ");
                getch();

                break;
            }

        case 5:

            printf("\n\n Which country won the FIFA World Cup in 2018?");

            printf("\n\nA.Brazil\nB.Argentina\nC.Germany\nD.France");
            if (toupper(getch()) == 'D')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.France");
                getch();

                break;
            }
        }
    }

    printf("\n");
    printf("\n");

    printf("\t\t\t\tYOUR SCORE IS %d out of 25\n", count);
}
void hard_P()
{
    int count;

    int r = 0;

    for (int i = 1; i <= 5; i++)
    {
        system("cls");
        r = i;

        switch (r)
        {
        case 1:

            printf("\n\nWhat is the traditional Japanese martial art of sword fighting?");
            printf("\n\nA.Kendo\nB.Karate\nC.Sumo\nD.Judo");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Kendo");
                getch();

                break;
            }
        case 2:

            printf("\n\n What is the maximum number of players a team can have on the field in a game of field hockey?");

            printf("\n\nA.9\nB.11\nC.7\nD.6");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.11");
                getch();

                break;
            }
        case 3:

            printf("\n\nWho was the first Pakistani cricketer to achieve a hat-trick in a Test match?");

            printf("\n\nA.Waqar Younis\nB.Wasim Akram\nC.Abdul Razzaq\nD.Shoaib Akhtar");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Wasim Akram");
                getch();

                break;
            }
        case 4:

            printf("\n\n Who is the current captain of the Argentina national football team?");

            printf("\n\nA.Sergio Agüero\nB.Paulo Dybala\nC.Angel Di Maria\nD.Lionel Messi");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Lionel Messi");
                getch();

                break;
            }

        case 5:
            printf("\n\nWhich country has won the most medals in the history of the Winter Olympics?");

            printf("\n\nA.Russia\nB.United States\nC.Norway\nD.V");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Norway");
                getch();

                break;
            }
        }
    }
    printf("\n");
    printf("\n");

    printf("\t\t\t\tYOUR SCORE IS %d out of 25\n", count);
}

void science()
{
    printf("WELCOME %s to the science quiz game\n ", name);
    puts("HERE ARE SOME INSTRUCTIONS: \n");
    puts("1. There are three levels(you have to choose which one to play) ");
    puts("    EASY           MEDIUM           HARD ");
    puts("2. Each level will have 5 questions of 6 marks each. ");
    puts("3. QUIZ WILL BE OF 30 MARKS. ");
    puts(" ");
    puts("SO LETS JUST GET STARTED:  ");

    char level[10];
    printf("CHOOSE A LEVEL(Easy,Medium,Hard): ");
    scanf("%s", level);
    char e[10] = "easy";
    char m[10] = "medium";
    char h[10] = "hard";

    if (strcmp(e, level) == 0)
    {
        easy_S();
    }
    else if (strcmp(m, level) == 0)
    {
        medium_S();
    }
    else if (strcmp(h, level) == 0)
    {
        hard_S();
    }
}

void easy_S()
{

    int count;

    int r = 0;

    for (int i = 1; i <= 5; i++)
    {
        system("cls");
        r = i;

        switch (r)
        {
        case 1:

            printf("\n\nWhat element makes up approximately 78%% of the Earth's atmosphere?");
            printf("\n\nA.Nitrogen\nB.Oxygen\nC.Helium\nD.Carbon dioxide");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Nitrogen");
                getch();

                break;
            }
        case 2:
            printf("\n\nWhat is the largest bone in the human body?");

            printf("\n\nA.Humerus\nB.Tibia\nC.Pelvis\nD.Femur");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.Femur");
                getch();

                break;
            }
        case 3:

            printf("\n\n What is the process by which plants turn sunlight into energy?");

            printf("\n\nA.Transpiration\nB.Photosynthesis\nC.Respiration\nD.Decomposition");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Photosynthesis");
                getch();

                break;
            }
        case 4:

            printf("\n\nWhat is the pH of a neutral solution?");

            printf("\n\nA.8\nB.0\nC.1\nD.7");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.7");
                getch();

                break;
            }

        case 5:
            printf("\n\n  What is the powerhouse of the cell?");

            printf("\n\nA.Nucleus\nB.Ribosome\nC.Mitochondrion\nD.Endoplasmic reticulum");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Mitochondrion");
                getch();

                break;
            }
        }
    }
    printf("\n");
    printf("\n");

    printf("\t\t\t\tYOUR SCORE IS %d out of 25\n", count);
}

void medium_S()
{
    int count;

    int r = 0;

    for (int i = 1; i <= 5; i++)
    {
        system("cls");
        r = i;

        switch (r)
        {
        case 1:

            printf("\n\nWhat is the largest organ in the human body?");
            printf("\n\nA.Heart\nB.Liver\nC.Skin\nD.Brain ");
            if (toupper(getch()) == 'D')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Skin");
                getch();

                break;
            }
        case 2:

            printf("\n\nWhich scientist is known for his theory of evolution by natural selection?");

            printf("\n\nA.Isaac Newton\nB.Gregor Mendel\nC. Louis Pasteur\nD.Charles Darwin");

            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.Charles Darwin");
                getch();

                break;
            }
        case 3:

            printf("\n\nWhat is the process by which genetic information is passed from parent to offspring? ");

            printf("\n\nA.Mitosis\nB.Meiosis\nC.Fertilization\nD.Mutation");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Fertilization");
                getch();

                break;
            }
        case 4:

            printf("\n\n What is the function of red blood cells in the human body?");

            printf("\n\nA. Carry oxygen \nB.Fight infections\nC.Produce insulin\nD.Digest food");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A. Carry oxygen");
                getch();

                break;
            }

        case 5:
            printf("\n\n What type of telescope detects radiation outside the visible spectrum, such as infrared and X-rays?");

            printf("\n\nA.Refracting telescope\nB.Reflecting telescope \nC.Radio telescope\nD.Optical telescope");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C. Radio telescope");
                getch();

                break;
            }
        }
    }
    printf("\n");
    printf("\n");

    printf("\t\t\t\tYOUR SCORE IS %d out of 25\n", count);
}
void hard_S()
{
    int count;

    int r = 0;

    for (int i = 1; i <= 5; i++)
    {
        system("cls");
        r = i;

        switch (r)
        {
        case 1:

            printf("\n\nWhat is the Richter scale used to measure?");
            printf("\n\nA.Wind speed\nB.Earthquake intensity\nC.Ocean depth\nD.Temperature");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Earthquake intensity");
                getch();

                break;
            }
        case 2:

            printf("\n\n Which geological era is known as the "
                   "Age of Dinosaurs"
                   "?");

            printf("\n\nA.Paleozoic\nB.Cenozoic\nC.Mesozoic\nD.Neogene");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Mesozoic");
                getch();

                break;
            }
        case 3:

            printf("\n\n  What type of rock is formed from the cooling and solidification of magma or lava?");

            printf("\n\nA.Igneous\nB.Sedimentary\nC.Metamorphic\nD.Fossilized");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Iron");
                getch();

                break;
            }
        case 4:

            printf("\n\nWhat is the main source of energy for wind power?");

            printf("\n\nA.Solar radiation\nB. Fossil fuels\nC.Geothermal heat \nD.Ocean currents");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Solar radiation");
                getch();

                break;
            }

        case 5:
            printf("\n\n What is the scientific term for the process by which dark matter is thought to interact with itself and with regular matter?");

            printf("\n\nA.Strong nuclear force\nB.Weak nuclear force\nC.Dark force \nD.Electromagnetic force");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C. Dark force ");
                getch();

                break;
            }
        }
    }
    printf("\n");
    printf("\n");

    printf("\t\t\t\tYOUR SCORE IS %d out of 25\n", count);
}

void history()
{
    printf("WELCOME %s to the history quiz game\n ", name);
    puts("HERE ARE SOME INSTRUCTIONS: \n");
    puts("");
    puts("1. There are three levels(you have to choose which one to play) ");
    puts("    EASY           MEDIUM           HARD ");
    puts("2. Each level will have 5 questions of 6 marks each. ");
    puts("3. Quiz will be of 30 marks. ");
    puts(" ");
    puts("SO LETS JUST GET STARTED!!!  ");

    char level[10];
    printf("CHOOSE A LEVEL(Easy,Medium,Hard): ");
    scanf("%s", level);
    char e[10] = "easy";
    char m[10] = "medium";
    char h[10] = "hard";

    if (strcmp(e, level) == 0)
    {
        easy_H();
    }
    else if (strcmp(m, level) == 0)
    {
        medium_H();
    }
    else if (strcmp(h, level) == 0)
    {
        hard_H();
    }
}

void easy_H()
{

    int count = 0;

    int r = 0;

    for (int i = 1; i <= 5; i++)
    {
        system("cls");
        r = i;

        switch (r)
        {
        case 1:

            printf("\n\n Which ancient civilization constructed the Great Wall of China?");
            printf("\n\nA.The Chinese \nB.The Greeks\nC.The Egyptians\nD.The Romans");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.The Chinese ");
                getch();

                break;
            }
        case 2:

            printf("\n\n What monument in New York City commemorates the arrival of European immigrants?");

            printf("\n\nA.The Empire State Building\nB.The Statue of Liberty\nC.The Brooklyn Bridge\nD. Central Park");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.The Statue of Liberty");
                getch();

                break;
            }
        case 3:

            printf("\n\nWhat famous technology company was founded in a garage in 1976?");

            printf("\n\nA.Ford Motor Company\nB.Microsoft\nC.Amazon\nD.Apple Inc.");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.Apple Inc.");
                getch();

                break;
            }
        case 4:
            printf("\n\n Who was the first African American president of the United States?");

            printf("\n\nA.Martin Luther King Jr.\nB.Rosa Parks\nC.Barack Obama \nD.Malcolm X");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Barack Obama ");
                getch();

                break;
            }

        case 5:
            printf("\n\nWhat iconic event marked the fall of the Soviet Union in 1991?");

            printf("\n\nA.The Cuban Missile Crisis\nB.The Space Race\nC.The Berlin Wall falling \nD.The Vietnam War");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.The Berlin Wall falling ");
                getch();

                break;
            }
        }
    }
    printf("\n");
    printf("\n");

    printf("\t\t\t\tYOUR SCORE IS %d out of 25\n", count);
}

void medium_H()
{
    int count;

    int r = 0;

    for (int i = 1; i <= 5; i++)
    {
        system("cls");
        r = i;

        switch (r)
        {
        case 1:
            printf("\n\nWho led the Indian independence movement against British rule?");
            printf("\n\nA.Jawaharlal Nehruan\nB.Mahatma Gandhi\nC.Indira Gandhi\nD.Rajiv Gandhi");
            if (toupper(getch()) == 'D')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Mahatma Gandhi");
                getch();

                break;
            }
        case 2:

            printf("\n\nWhat political and economic system emphasizes state control over the economy?");

            printf("\n\nA.Democracy\nB.Monarchy\nC.Communism\nD.Capitalism");

            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Communism");
                getch();

                break;
            }
        case 3:

            printf("\n\n  Who was the first female monarch of England?");

            printf("\n\nA.Elizabeth I\nB. Mary I\nC.Victoria\nD.Anne");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Elizabeth I");
                getch();

                break;
            }
        case 4:

            printf("\n\n In what year did the Korean War begin?");

            printf("\n\nA. 1945 \nB.1950\nC.1960\nD.1975");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B. 1950");
                getch();

                break;
            }

        case 5:

            printf("\n\n The Ottoman Empire was founded in the 13th century in the region that is now known as which country?");

            printf("\n\nA.Turkey\nB.Iran\nC.Iraq\nD.Saudi Arabia");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A. Turkey");
                getch();

                break;
            }
        }
    }
    printf("\n");
    printf("\n");

    printf("\t\t\t\tYOUR SCORE IS %d out of 25\n", count);
}
void hard_H()
{
    int count;

    int r = 0;

    for (int i = 1; i <= 5; i++)
    {
        system("cls");
        r = i;

        switch (r)
        {
        case 1:
            printf("\n\nWhat political and economic event triggered the Great Depression in the 1930s?");
            printf("\n\nA.The French Revolution\nB.The American Civil War\nC.The Black Death\nD.The Stock Market Crash of 1929");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.The Stock Market Crash of 1929");
                getch();

                break;
            }
        case 2:

            printf("\n\n   What ancient civilization constructed the iconic pyramids of Giza?");

            printf("\n\nA.The Aztecs\nB.The Incas\nC.The Egyptians \nD. The Mayans");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.The Egyptians");
                getch();

                break;
            }
        case 3:

            printf("\n\nThe Rohri Canal Project, located in Sindh Province, is an example of a large-scale irrigation project undertaken by which historical ruler?");

            printf("\n\nA.Akbar\nB.Aurangzeb\nC.Ranjit Singh\nD.Muhammad Ali Jinnah");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.Muhammad Ali Jinnah");
                getch();

                break;
            }
        case 4:

            printf("\n\n The Khyber Pass is a strategic mountain pass connecting Pakistan and which country?");

            printf("\n\nAIndia\nB.Tajikistan\nC.Afghanistan \nD.Iran");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Afghanistan ");
                getch();

                break;
            }

        case 5:

            printf("\n\nWhat major political system emerged following the Cold War, characterized by free trade and globalization?");

            printf("\n\nA.Communism\nB.Fascism\nC.Neo-liberalism\nD.Totalitarianism");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect Answer !!");
                count += 5;
                getch();

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Neo-liberalism");
                getch();

                break;
            }
        }
    }
    printf("\n");
    printf("\n");

    printf("\t\t\t\tYOUR SCORE IS %d out of 25\n", count);
}

void collectFeedback()
{
    printf("\nThank you for completing the quiz!\n");
    printf("Please provide your feedback. It will be valuable for us (1-5):\n");

    int feedback;
    printf(" 1 - Poor\n 2 - Fair\n 3 - Average\n 4 - Good\n 5 - Excellent\n");
    printf("Enter your feedback: ");
    scanf("%d", &feedback);

    if (feedback >= 1 && feedback <= 5)
    {
        if (feedback == 1 || feedback == 2)
        {
            printf("\nThank you for your feedback! We appreciate your input. We will try to improve.\n");
        }
        else
        {
            printf("\nThank you for your feedback!\n");
        }
    }
    else
    {
        printf("\nInvalid feedback. Please enter a number between 1 and 5.\n");
        collectFeedback();
    }
}
// void user_registration(char username[], char password[])
// {
//     printf("Enter username: ");
//     gets(username);
//     printf("Enter password: ");
//     gets(password);

//     FILE *fptr = NULL;
//     fptr = fopen("users.txt", "a+");
//     puts("");
//     if (fptr == NULL)
//     {
//         puts("Your account does not exist");
//     }
//     else
//     {
//         puts("Registration Successful!");
//     }

//     fprintf(fptr, "\n%s %s", username, password);
// }

// void user_login(char username[], char password[])
// {

//     char login_username[50];
//     char login_password[50];
//     FILE *fptr = NULL;

//     fptr = fopen("users.txt", "r");
//     printf("To login your account\n");

//     while (fscanf(fptr, "%s %s", username, password) != 0)
//     {
//         printf("USERNAME: ");
//         gets(login_username);
//         printf("PASSWORD: ");
//         gets(login_password);
//         if (strcmp(login_username, username) == 0 && strcmp(password, login_password) == 0)
//         {
//             fclose(fptr);
//             puts("");
//             printf("Login successful!\n");
//         }
//         else
//         {
//             printf("Invalid username or password!\n");
//         }
//     }

//     fclose(fptr);
// }