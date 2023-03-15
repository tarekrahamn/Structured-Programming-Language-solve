#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int s=1;
struct Book_info a;
struct student info;
FILE *file, *file2,*file3;
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
    
    char id;
    char pass1[10]={"STUDENT"};
    char pass2[10];
    printf("\n \t\t Enter Your Id: ");
    scanf("%s",id);
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
    printf("\n\n \t\t *************  Welcome UIU Library Managemante Project **************\n");
    printf("\n \t\t 1. Add Book\n");
    printf("\t\t 2. View Book List\n ");
    printf("\t\t 3. Search Book\n ");
    printf("\t\t 4. Delete Book\n ");
    printf("\t\t 5. Add Student \n ");
    printf("\t\t 6. Search Student \n ");
    printf("\t\t 7. View Student List\n ");
    printf("\t\t 8. Delete Student \n ");
    printf("\t\t 9. Exit");
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
    else if (n==4)
    {
        deletBook();
    }
    
    else if (n==5)
    {
        addStudent();
    }
    else if (n==6)
    {
        searchstudent();
    }
    else if (n==7)
    {
        viewStudentList();
    }
    else if (n==8)
    {
        deletStudent();
    }
    else if (n==9)
    {
        Exit();
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
    scanf("\t%s",a.author);
    printf("\n\t\t Enter Rack: ");
    scanf("%d",&a.rack);
    fwrite(&a,sizeof(a),1,file);
    fclose(file);
    printf("\n\n\t\t Add BOOK Suessfylly!");
    fflush(stdin);
    getchar();
    mainMenu();
}

void viewBook()
{
    printf("\n\n\t\t********* view Book List********\n\n");
    printf("\tID\tName\tAuthor\tRack\n\n");
    file=fopen("books.txt","r");
    while (fread(&a,sizeof(a),1,file)==1)
    {
        printf("\t%d",a.ID);
        printf("\t%s",a.name);
        printf("\t%s",a.author);
        printf("\t%d\n",a.rack);
    }
    fclose(file);
    printf("\n\n \t\t  press any key....");
    fflush(stdin);
    getchar();
    mainMenu();
    
}

void searchBook()
{
    int y;
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
            printf("Book\t\tID\t\tAuthor\t\tRack\n");
            printf("%s",a.name);
            printf("\t\t%d",a.ID);
            printf("\t\t%s",a.author);
            printf("\t\t%d",a.rack);
            count=1;
            printf("\n");
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

void deletBook()
{
    int z;
    int count =0;
    printf("\n\n\t\t ************** Delete Book ***********");
    printf("\n\n\t\tEnter ID for delete Book: ");
    scanf("%d",&z);
    file=fopen("Books.txt","w+");
    rewind(file);
    while (fread(&a,sizeof(a),1,file)== 1);
    {
        if(z == a.ID)
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
        printf("\n\n Book is not Availble ! ");
    }
    else
    {
        file2=fopen("text.txt","w+");
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
        remove("Books.txt");

        rename("text.txt", "Books.txt");

        file = fopen("Books.txt","r");
        
        fclose(file);
    }
    printf("\n\n \t\t  press any key....");
    fflush(stdin);
    getchar();
    mainMenu();
}

void addStudent()
{
    int count = 0;
    int p;
    printf("\n\n \t\t************** Add Student ************* \n");
    file = fopen("student.txt","a+");
    printf("\t\t Enter Student ID: ");
    scanf("%d",&p);

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
    gets(info.name);
    printf("\t\tEnter ID: ");
    scanf("%d",&info.id);
    printf("\t\tEnter Depertment: ");
    fflush(stdin);
    scanf("%s",info.depertment);
    fwrite(&info,sizeof(info),1,file);
    printf("\n\n\t\t Add Student Suessfylly!");
    fclose(file);
    fflush(stdin);
    getchar();
    mainMenu();
}

void viewStudentList()
{
    printf("\n\n\t\t********* view Book List********\n\n");
    printf("Name\t\tID\t\t Depertment\n\n");
    file=fopen("student.txt","r");
    while (fread(&info,sizeof(info),1,file)==1)
    {
        printf("%s",info.name);
        printf("\t\t%d",info.id);
        printf("\t\t%s\n",info.depertment);
        
    }
    fclose(file);
    printf("\n\n \t\t  press any key....");
    fflush(stdin);
    getchar();
    mainMenu();
    
}

void searchstudent()
{
    int m;
    int count=0;
    printf("\n\n\t\t************Search Book***********");
    printf("\n\t\tSearching...\n\n");
    file=fopen("student.txt","r");
    printf("\n\t\tEnter ID: ");
    scanf("%d",&m);
    while (fread(&info,sizeof(info),1,file)== 1)
    {
        if(m == info.id)
        {
            printf("\n\n\t\t Student Is Found!\n");
            printf("Student\t\tID\t\tDepertment\n");
            printf(info.name);
            printf("\t\t%d",info.id);
            printf("\t\t%s",info.depertment);
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

void deletStudent()
{
    int s;
    int count =0;
    printf("\n\n\t\t ************** Delete Student ***********");
    printf("\n\n\t\tEnter ID for delete Student: ");
    scanf("%d",&s);
    file=fopen("student.txt","w+");
    rewind(file);
    while (fread(&info,sizeof(info),1,file)== 1);
    {
        if(s == info.id)
        {
            printf("\n\n\t\t Student Is Availble!!\n");
            printf("\t%d",info.id);
            printf("\t%s",info.name);
            printf("\t%s\n",info.depertment);
            count=1;
        }
    }
    if(count==0)
    {
        printf("\n\n Student is not Availble ! ");
    }
    else
    {
        file3=fopen("INFO.txt","w+");
        rewind(file);
        while (fread(&info,sizeof(info),1,file)== 1);
        {
            if(s != info.id)
            {
                fseek(file3,ftell(file3)-sizeof(info),0);
                fwrite(&info,sizeof(info),1,file3);
            }
        }
        fclose(file);
        fclose(file3);
        remove("student.txt");
        rename("INFO.txt", "student.txt");
        file=fopen("student.txt","r");
        fclose(file);
    }
    printf("\n\n \t\t  press any key....");
    fflush(stdin);
    getchar();
    mainMenu();
}

void Exit()
{
    int i;
    printf( "\n\n\t\t This is simple Library Project\n" );

    printf(" \n\n\n \t\t\t Thank You \n\n" );

    printf("\n\t\t\t Wait....");
    for(i=1;i<1e10;i++)
    {

    }
    exit(0);

}

int main()
{
    password();
    mainMenu();
    return 0;
}
