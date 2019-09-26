#include<stdio.h>
// decl of structure
#pragma pack(1) //-- make struct member alligement as 1 byte
struct emp
{
	private:
		// variable or data members or fields
		int empno;
		char name[10];
		float sal;
	public:
	//member functions or methods
		void AcceptEmpInfo()
		{
			printf("\n Enter EmpNo :: ");
			scanf("%d", &empno);

			printf("\n Enter Name :: ");
			scanf("%s", name);

			printf("\n Enter salary ::");
			scanf("%f", &sal);

			return;
		}
		void DisplayEmpInfo()
		{
			printf("\n EmpNo  name   Salary \n");
			printf("%-8d%-10s%-8.2f", empno, name, sal);
			return;
		}
		void SetSalary(float newsal)
		{
			sal=newsal;
			return;
		}
		float GetSalary()
		{
			return sal;
		}

};//end of emp structure


int main()
{
	// struct emp is a user defined data type
	//struct emp e1={1};
	emp e1;//	struct emp e1;
	float newsal;

	printf("\n Enter Employee Info :: \n");
	e1.AcceptEmpInfo(); //AcceptEmpInfo(&e1);

	printf("\n Employee info ::in main correct output \n");
	e1.DisplayEmpInfo(); //DisplayEmpInfo(&e1);

	printf("\n Enter New Salary  :: ");
	scanf("%f", &newsal);
	 e1.SetSalary(newsal); //SetSalary(&e1, newsal);

	printf("\n updated salary :: ");
	e1.DisplayEmpInfo(); //DisplayEmpInfo(&e1);


	newsal= e1.GetSalary(); //newsal= GetSalary(&e1);
	printf("\n newsal =%.2f", newsal);
	printf("\n\n\n\n");
	return 0;
}
