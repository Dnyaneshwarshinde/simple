#include<stdio.h>
// decl of structure
#pragma pack(1) //-- make struct member alligement as 1 byte
struct emp
{
	// variable or data members
	int empno;
	char name[10];
	float sal;
};//end of emp structure
void AcceptEmpInfo(struct emp *e); // call by address
void DisplayEmpInfo(struct emp e); // call by value
int main()
{
	// struct emp is a user defined data type
	//struct emp e1={1};
	struct emp e1;

	printf("\n Enter Employee Info :: \n");
	AcceptEmpInfo(&e1);

	printf("\n Employee info ::in main correct output \n");
	DisplayEmpInfo(e1);

	return 0;
}
void AcceptEmpInfo(struct emp *e)
{
	printf("\n Enter EmpNo :: ");
	scanf("%d", &e->empno);

	printf("\n Enter Name :: ");
	scanf("%s", e->name);

	printf("\n Enter salary ::");
	scanf("%f", &e->sal);

	//printf("\n print emp info from AcceptEmpInfo function \n");
//	DisplayEmpInfo(*e);

	return;
}
void DisplayEmpInfo(struct emp e)
{
	printf("\n EmpNo  name   Salary \n");
	printf("%-8d%-10s%-8.2f", e.empno, e.name, e.sal);
	return;
}
