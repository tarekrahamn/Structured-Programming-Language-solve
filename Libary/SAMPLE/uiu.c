#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int s=1;
struct Book_info a;
struct student info;
FILE *file, *file2;
struct Book_info
{
    int ID;
    char name[10];
    char author[10];
    int rack;
};
struct student
{
    int id;
    char name[100];
    char depertment[10];
};
void heading()
{
    printf("\n\n\t\t*********** Welcome to UIU Libary*************\n");
}

void password()
{
    heading();
    int id;
    char pass1[10]={"STUDENT"};
    char pass2[10];
    printf("\n \t\t Enter Your Id: ");
    scanf("%d",&id);
    fflush(stdin);
    printf("\n \t\t Enter Password: ");
    gets(pass2);

    if(strcmp(pass1,pass2)==0)
    {
        printf("\n\n \t\t Match Password!!\n");
        printf("\n\n \t\t Press any key....");
    }
    else
    {
        if(s==3)
        {
            exit(0);
        }
        printf("\n\n \t\t Wrong Password!!%d to 3\n",s);
        printf("\n\n \t\t  Try agin....");
        s++;
        fflush(stdin);
        getchar();
        password();
    }
        fflush(stdin);
        getchar();
    }

void mainMenu()
{
    int n;
    printf("\n\n \t\t *************  Welcome UIU Library  **************\n");
    printf("\n \t\t 1. Add Book\n");
    printf("\t\t 2. View Book List\n ");
    printf("\t\t 3. Search Book\n ");
    printf("\t\t 5. Delete Book\n ");
    printf("\t\t 6. Add Student \n ");
    printf("\t\t 7. Search Student \n ");
    printf("\t\t 8. Exit\n ");
    printf("\t\t**********************************************\n ");
    printf("\t\tEnter Your Choice: ");
    scanf("%d",&n);
    if(n==1)
    {
        printf("\t\tYou Want to add Book in Library..\n");
        addBook();
    }
    else if (n==2)
    {
        viewBook();
    }
    else if (n==3)
    {
        searchBook();
    }
    else if (n==5)
    {
        deleteBook();
    }
    else if (n==6)
    {
        addStudent();
    }
    else if (n==7)
    {
        searchstudent();
    }
    else
    {
        printf("\n\n \t\tYour choice is wrong!\n \t\t  Try agine....");
        fflush(stdin);
        getchar();
        mainMenu();
    }
}

void addBook()
{
    int x,count = 0;
    printf("\n\n \t\t************** Add Book ************* \n");
    file = fopen("Books.txt","a+");
    printf("\t\t Enter Book ID: ");
    scanf("%d",&x);
    rewind(file);

    while(fread(&a, sizeof(a),1,file)==1)
    {
        if(x==a.ID)
        {
            printf("\n\n\t\t This Book is Alredy in libaray..");
            count=1;
        }
    }
    if(count==1)
    {
        fflush(stdin);
        getchar();
        mainMenu();
    }
    a.ID=x;
    printf("\n\t\t Enter Name: ");
    fflush(stdin);
    scanf("%s",a.name);
    printf("\n\t\t Enter Author: ");
    fflush(stdin);
    scanf("%s",a.author);
    printf("\n\t\t Enter Rack: ");
    scanf("%d",&a.rack);
    fseek(file,0,SEEK_END);
    fwrite(&a,sizeof(a),1,file);
    fclose(file);
    printf("\n\n\t\t Add BOOK Suessfylly!");
    fflush(stdin);
    getchar();
}

void viewBook()
{
    printf("\n\n\t\t********* view Book List********\n\n");
    printf("\tID\tName\tAuthor\tRack\n\n");
    file=fopen("book.txt","r");
    while (fread(&a,sizeof(a),1,file)==1)
    {
        printf("\t%d",a.ID);
        printf("\t%s",a.name);
        printf("\t%s",a.author);
        printf("\t%d\n",a.rack);
    }
    printf("\n\n \t\t  press any key....");
    fflush(stdin);
    getchar();
    
}

void searchBook()
{
    char y;
    int count=0;
    printf("\n\n\t\t************Search Book***********");
    printf("\n\t\tSearching...\n\n");
    file=fopen("books.txt","r");
    printf("\n\t\tEnter ID: ");
    scanf("%d",&y);
    while (fread(&a,sizeof(a),1,file)== 1);
    {
        if(y== a.ID)
        {
            printf("\n\n\t\t Book Is Found!\n");
            printf("\t%d",a.ID);
            printf("\t%s",a.name);
            printf("\t%s",a.author);
            printf("\t%d\n",a.rack);
            count=1;
        }
    }
    if(count==0)
    {
        printf("\n\n Book is not Found! ");
    }
    printf("\n\n \t\t  press any key....");
    fflush(stdin);
    getchar();
    mainMenu();
}

void deleteBook()
{
    int z;
    int count =0;
    printf("\n\n\t\t ************** Delete Book ***********");
    printf("\n\n\t\tEnter ID for delete Book: ");
    scanf("%d",&z);
    file=fopen("books.txt","w+");
    while (fread(&a,sizeof(a),1,file)== 1);
    {
        if(z== a.ID)
        {
            printf("\n\n\t\t Book Is Availble!!\n");
            printf("\t%d",a.ID);
            printf("\t%s",a.name);
            printf("\t%d\n",a.rack);
            count=1;
        }
    }
    if(count==0)
    {
        printf("\n\n Book is notAvailble ! ");
    }
    else
    {
        file2=fopen("text.txt","w");
        rewind(file);
        while (fread(&a,sizeof(a),1,file)== 1);
        {
            if(z!= a.ID)
            {
                fseek(file2,ftell(file2)-sizeof(a),0);
                fwrite(&a,sizeof(a),1,file2);
            }
        }
        fclose(file);
        fclose(file2);
        //remove("books.txt");
        //remove("text.txt","books.txt");
        file=fopen("books.txt","r");
        fclose(file);
    }
    printf("\n\n \t\t  press any key....");
    fflush(stdin);
    getchar();
    mainMenu();
}

void addStudent()
{
    int p,count = 0;
    printf("\n\n \t\t************** Add Student ************* \n");
    file = fopen("student.txt","a+");
    printf("\t\t Enter Student ID: ");
    scanf("%d",&p);
    rewind(file);

    while(fread(&info, sizeof(info),1,file)==1)
    {
        if(p==info.id)
        {
            printf("\n\n\t\t This Students already in Libaray..");
            count=1;
        }
    }
    if(count==1)
    {
        fflush(stdin);
        getchar();
        mainMenu();
    }
    info.id=p;
    printf("\n\t\t Enter Name: ");
    fflush(stdin);
    scanf("%s",info.name);
    printf("\n\t\t Enter ID: ");
    scanf("%d",&info.id);
    printf("\n\t\t Enter Depertment: ");
    fflush(stdin);
    scanf("%s",info.depertment);
    fseek(file,0,SEEK_END);
    fwrite(&info,sizeof(info),1,file);
    printf("\n\n\t\t Add Student Suessfylly!");
    fclose(file);
    fflush(stdin);
    getchar();
}

void searchstudent()
{
    int m;
    int count=0;
    printf("\n\n\t\t************Search Book***********");
    printf("\n\t\tSearching...\n\n");
    file=fopen("books.txt","r");
    printf("\n\t\tEnter ID: ");
    scanf("%d",&m);
    while (fread(&info,sizeof(info),1,file)== 1);
    {
        if(m== info.id)
        {
            printf("\n\n\t\t Student Is Found!\n");
            printf("\t%d",info.id);
            printf("\t%s",info.name);
            printf("\t%s",info.depertment);
            count=1;
        }
    }
    if(count==0)
    {
        printf("\n\n Student is not Found! ");
    }
    printf("\n\n \t\t  press any key....");
    fflush(stdin);
    getchar();
    mainMenu();
}

int main()
{
    password();
    mainMenu();
    return 0;
}
