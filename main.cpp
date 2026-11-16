#include <iostream>

using namespace std;

int main()
{
    cout<<"GAUTENG CITY COLLEGE -PAYROLL SYSTEM"<<endl;
    int num Employees;
    cout<<"How many employees do you want to process?";
    cin>>num Employees;
    //4.FOR Loop-Process multiple employees one after another
    for(int i=1;i<=num Employees;i++)
    {
        cout<<"\n-- Employee"<<i<<"---"<<endl;
        int emplyeeID;
        string employeeName;
        double basicSalary;
        int deptChoice;
        int performanceRating;
        int yearOfService;

        cout<<"Enter Employee ID:"
        cin>>employeeID;

        cout<<"Enter Employee Name:";
        cin>>employeeName;

        cout<<"Enter Basic Salary:";
        cin>>basicSalary;
        //5.HANDLE INVALID INPUT: Negtive Salary
        if(basicSalary<0)
    {
        cout<<"Invalid!!Salary cannot be negative. Set to 0."<<endl;
        basicSalary =0;
    }

    cout<<"\nSelect Department:"<<endl;
    cout<<"1.Sales"<<endl;
    cout<<"2.IT"<<endl;
    cout<<"3.Finance"<<endl;
    cout<<"4.HR"<<endl;
    cout<<"5.Operations"<<endl;
    cout<<"Enter choice(1-5):";
    cin>>deptChoice;

    cout<<"Enter Performance Rating(1-5):";
    cin>>performaceRating;

    cout<<"Enter Year of Service:";
    cin>>yearsOfService;

    //---CALCULATE BONUS---

    double performanceBonus =0;
    //2. IF/Else if: performance Rating(Condition 1)
    if(performanceRating ==5)
    {
        performanceBonus=basicSalary*0.20;//20%
    }
    else if(performanceRating ==4)
    {
        performanceBonus= basicSalary*0.15;//15%
    }
    else if(performanceRating ==3)
    {
        performanceBonus= basicSalary*0.10;//10%
    }
    else if(performanceRating ==2)
    {
        performanceBonus= basicSalary*0.05;//5%
    }
    else if(performanceRating ==1)
    {
        performanceBonus=0;
    }
    else
    {
        //5.HANDLE INVALID INPUT: Out-of-range rating
        cout<<"Invalid rating!!Must be 1-5.No performance bonus
        performanceBonus=0;
    }

    double departmentBonus =0;
    string departmentName;
    //SWICH:Department(Conditions 2)
    {
    case 1:
        departmentName="Sales";
        departmentBonus=1000;
        break;
    case 2:
        departmentName="IT";
        departmentBonus=800;
        break;
    case 3:
        departmentName="Finance";
        departmentBonus=500;
        break;
    case 4:
        departmentName="HR";
        departmentBonus=300;
        break;
    case 5:
        departmentName="Opertions";
        departmentBouns=300;
        break;
    default:
        departmentName="Unknown";
        cout<<"Invalid department!!No department bonus."<<endl;
        departmentBonus=0;
        break;
    }

    double loyaltyBonus=0;
    //IF/Else IF:Years of Service(Condition 3)
    if(yearsOfService>=10)
    {
        loyaltyBonus=1500;
    }
    else if(yearOfService>=5)
    {
        loyaltyBonus=750;
    }

    //3. CALCULATE Bonus Amount and total pay
    double bonusAmount = performanceBonus  + departmentBonus + loyaltyBonus;
    double totalPay= basicSalary + bonusAmount;

    //3.DISPLAY neatly,clearly labelled
    cout<<"\n----PAYSLIP-----"<<endl;
    cout<<"Employee ID:"<<employeeID<<endl;
    cout<<"Employee Name:"<<employeeName<<endl;
    cout<<"Department:"<<departmentName<<endl;
    cout<<"Basic Salary:R"<<basicSalary<<endl;
    cout<<"Performance Bonus:R"<<performanceBonus<<endl;
    cout<<"Department Bonus:R"<<departmentBonus<<endl;
    cout<<"Loyaty Bonus:R"<<departmentBonus<<endl;
    cout<<"Bonus Amount:R"<<bonusAmount<<endl;
    cout<<"Total Pay:R"<<totalPay<<endl;
    }
    cout<<"\nAll employees processed. Thank you!!"<<endl;
    return 0;
}
