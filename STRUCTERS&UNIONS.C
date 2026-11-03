#include<stdio.h>
struct Student
{
	int rollno;
	char name[50];
	float marke;
};
union Contact
{
	char phone[15];
	char email[50]
};
int main()
{struct Student s;
union Contact c;
FILE *fp;

printf("Enter student roll number:");
scanf("%d",&s.rollno);

printf("Enter student name:");
scanf("%s", s.name);

printf("Enter student marke:");
scanf("%f",&s.marke);

printf("Enter phone number:");
scanf("%s", c.phone);

//Writing data into fil
fp=fopen("student.txt", "w");

if(fp== NULL)
{
	printf("Unable to opem file.");
	return 1;
}
fprintf(fp,"Roll Number:%d\n",s.rollno);
fprintf (fp,"Name       :%s\n",s.name);
fprintf(fp, "Marke       :%2f\n",s.marke);
fprintf(fp,"Phone        :%s\n",c.phone);
fclose(fp);
printf("\nStudent details written to file successfully.\n");
//Reading data from file
fp=fopen("student.txt","r");
if(fp==NULL)
{
	printf("Unable to open file.");
	char line[100];
	while (fgets(line,sizeof(line),fp)!=NULL)
	{
		printf("%s", line);
	}
	fclose(fp);
	return 0;
}
}
