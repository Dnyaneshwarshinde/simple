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

int main()
{
	// struct emp is a user defined data type
	struct emp e1={1};
	struct emp *ptr=&e1;

	// e1 variable(object) of user define data type struct emp;
	printf("\n size of e1=%d",sizeof(e1));
	printf("\n size of ptr=%d",sizeof(ptr));
	printf("\n size of struct emp=%d",sizeof(struct emp));

	printf("\n Enter EmpNo :: ");
	scanf("%d", &e1.empno);

	printf("\n Enter Name :: ");
	scanf("%s", e1.name);

	printf("\n Enter salary ::");
	scanf("%f", &e1.sal);

	printf("\n EmpNo  name   Salary using structure variable e1 \n");
	printf("%-8d%-10s%-8.2f", e1.empno, e1.name, e1.sal);
	//printf("\n%8d%10s%8.2f", e1.empno, e1.name, e1.sal);

	printf("\n EmpNo  name   Salary using pointer ptr \n");
	printf("%-8d%-10s%-8.2f", ptr->empno, ptr->name, ptr->sal);

	printf("\n &e1=%u &e1+1=%u", &e1, &e1+1);
	printf("\n ptr=%u ptr+1=%u", ptr, ptr+1);
	printf("\n ptr=%p ptr+1=%p", ptr, ptr+1);

	return 0;
}
