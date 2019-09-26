#include<stdio.h>
#pragma pack(1)
// decl of class
class emp
{
	private:
		// variable or data members or fields
		int empno;
		char name[10];
		float sal;
	public:
		// member fun or methods
		//void AcceptEmpInfo(className * const this)
		//void AcceptEmpInfo(className * const this)
		//void  AcceptEmpInfo(emp * const this )

		//e1.AcceptEmpInfo() --->>  emp * const this=&e1;
		void AcceptEmpInfo()
		{
			printf("\n Enter EmpNo :: ");
			scanf("%d", &this->empno);

			printf("\n Enter Name :: ");
			scanf("%s", this->name);

			printf("\n Enter salary ::");
			scanf("%f", &this->sal);

			return;
		}
		//void DisplayEmpInfo( emp * const this)
		void DisplayEmpInfo()
		{
			printf("\n EmpNo  name   Salary \n");
			printf("%-8d%-10s%-8.2f", this->empno, this->name, this->sal);
			return;
		}
		//void SetSalary( emp * const this ,float sal)
		void SetSalary(float sal)
		{ // data member = localvariable
			this->sal=sal;
			return;
		}
		//float GetSalary( emp *const this)
		float GetSalary()
		{
			return this->sal;
		}

};//end of emp class

int main()
{
	emp e1;//	class emp e1;
	float newsal;

	printf("\n Enter Employee Info :: \n");
	e1.AcceptEmpInfo(); //AcceptEmpInfo(&e1);
	// this=&e1;

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
