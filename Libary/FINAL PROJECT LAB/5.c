#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct books book;
struct students student;
FILE *file,*Student_file,*issu_file, *file2,*file3;;

struct books
{
    char name[200];
    char author[100];
    int id;
};
struct students
{
    char name[10];
    int id;
    char depertment[100];
};

void password()
{
    int s=1;
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

void viewbook()
{
    printf("Available Books\n");
    file = fopen("library.txt", "r");
    printf("Book ID\tBook Name\tAuthor Name\n");
    while(fread(&book,sizeof(book),1,file))
    {
        printf("%d\t%s\t\t%s\n",book.id,book.name,book.author);
    }
    fclose(file);
}


void addbook()
{
    file = fopen("library.txt","a");
    printf("Book ID: ");
    scanf("%d",&book.id);
    printf("\nBook name: ");
    fflush(stdin);
    gets(book.name);
    printf("\nAuthor name: ");
    fflush(stdin);
    gets(book.author);
    fwrite(&book,sizeof(book),1,file);
    fclose(file);
}

void issuebook()
{
    int x=0,id;
    printf("Enter Book id to issue: ");
    scanf("%d", &id);
    file = fopen("library.txt", "r");
    while(fread(&book, sizeof(book), 1, file) == 1)
    {
        if(id == book.id)
        {
            x=1;
            break;
        }
    }
    if(x==0)
    {
        printf("No book found with this id\n");
        printf("Please try again...\n\n");
        return;
    }
    issu_file = fopen("issue.txt", "a");
    printf("Enter Student Name: ");
    fflush(stdin);
    gets(student.name);
    printf("Enter Book Name: ");
    fflush(stdin);
    gets(book.name);
    fflush(stdin);
    printf("Depertment: ");
    gets(student.depertment);
    printf("Book Issued Successfully\n");
    fprintf(issu_file,"%s\t%s\t%s\n",student.name,book.name,student.depertment);
    fclose(issu_file);
}

void issuedbook()
{
    printf("Student\tBook\tDepertment\tID\n");
    issu_file = fopen("issue.txt", "r");
    while(!feof(issu_file))
    {
        fscanf(issu_file,"%s\t%s\t%s",student.name,book.name,student.depertment);
        printf("%s\t%s\t%s\n",student.name,book.name,student.depertment);
    }
    fclose(issu_file);
}
void deletebook()
{
    int id, y=0;
    printf("Enter Book id to remove: ");
    scanf("%d", &id);
    file = fopen("library.txt", "r");
    file2 = fopen("temp.txt", "wb");
    while(fread(&book, sizeof(book), 1, file) == 1)
    {
        if(id == book.id)
        {
            y=1;
        }
        else
        {
            fwrite(&book, sizeof(book), 1, file2);
        }
    }
    if(y==1)
    {
        printf("\n\nDeleted Successfully.");
    }
    else
    {
        printf("\n\nRecord Not Found !");
    }
    fclose(file);
    fclose(file2);
    remove("library.txt");
    rename("temp.txt", "library.txt");

}
void searchbook()
{
    file = fopen("library.txt","r");
    int id;
    printf("\nEnter the book ID: ");
    scanf("%d",&id);
    while(fread(&book,sizeof(book),1,file))
    {
        if(id==book.id)
        {
            fflush(stdin);
            fscanf(file,"%d\t%s\t%s\n",&book.id,book.name,book.author);
            printf("%d\t%s\t%s\n",book.id,book.name,book.author);
            fclose(file);
        }
    }
}

void addstudent()
{
    Student_file = fopen("student.txt","a");
    printf("Student ID: ");
    fflush(stdin);
    scanf("%d",&student.id);
    printf("Student Name: ");
    fflush(stdin);
    gets(student.name);
    printf("Depertment: ");
    gets(student.depertment);
    fwrite(&student,sizeof(student),1,Student_file);
    fclose(Student_file);
}

void searchstudent()
{
    Student_file = fopen("student.txt","r");
    int id;
    printf("\nEnter the Student ID: ");
    scanf("%d",&id);

    while(fread(&student,sizeof(student),1,Student_file))
    {
        if(id==student.id)
        {
            printf("ID\tName\n");
            fflush(stdin);
            fscanf(Student_file,"%d\t%s\t%s\n",&student.id,student.name,student.depertment);
            printf("%d\t%s\t%s\n",student.id,student.name,student.depertment);
            fclose(Student_file);
        }
    }
}

void deletestudent()
{
    int id, p=0;
    printf("Enter Student id to remove: ");
    scanf("%d", &id);
    Student_file = fopen("student.txt", "r");
    file3 = fopen("temp2.txt", "wb");
    while(fread(&student, sizeof(student), 1, Student_file) == 1)
    {
        if(id == student.id)
        {
            p=1;
        }
        else
        {
            fwrite(&student, sizeof(student), 1, file3);
        }
    }
    if(p==1)
    {
        printf("\n\nDeleted Successfully.");
    }
    else
    {
        printf("\n\nRecord Not Found !");
    }
    fclose(Student_file);
    fclose(file3);
    remove("student.txt");
    rename("temp2.txt", "student.txt");
}

void viewstudent()
{
    printf("Registered Student\n");
    Student_file = fopen("Student.txt", "r");
    printf("ID\tName\tDepertment\n");
    while(fread(&student,sizeof(student),1,Student_file))
    {
        fflush(stdin);
        printf("%d\t%s\t%s\n",student.id,student.name,student.depertment);
    }
    fclose(Student_file);
}

void main()
{
    printf("\t\t*********************** Welcome to the library management system *************************\n\n");
    password();
    while(1)
    {
        printf("\n\t\t\t**************Main Menu******************\n\n");
        printf("\t\t 0. Exit\n");
        printf("\t\t 1. Add Book\n");
        printf("\t\t 2. View Book\n");
        printf("\t\t 3. Issue Book\n");
        printf("\t\t 4. Issued Book\n");
        printf("\t\t 5. Search Book\n");
        printf("\t\t 6. Delete Book\n");
        printf("\t\t 7. Add Student\n");
        printf("\t\t 8. View Student\n");
        printf("\t\t 9. Search Student\n");
        printf("\t\t 10. Delete Student\n");
        printf("\n\t\tEnter Your Choice:  ");
        int num;
        scanf(" %d",&num);
        switch(num)
        {
            case 0:
                exit(1);
            case 1:
                addbook();
                break;
            case 2:
                viewbook();
                break;
            case 3:
                issuebook();
                break;
            case 4:
                issuedbook();
                break;
            case 5:
                searchbook();
                break;
            case 6:
                deletebook();
                break;
            case 7:
                addstudent();
                break;
            case 8:
                viewstudent();
                break;
            case 9:
                searchstudent();
                break;
            case 10:
                deletestudent();
                break;
            
            default:
                printf("\nInvalid\n");
                break;
        }
        printf("\nPress any key to continue");
        getchar();
    }
}