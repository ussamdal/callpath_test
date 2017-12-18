#include "employee.h"
#include <iostream>
employee::employee(int id):
    employee(id, std::string("employee"))
{
}

employee::employee(int id, std::string name):
    id_(id),
    name_(name)
{
}

employee::~employee()
{
    myPrint(std::string ("employee dis called"));
}

void employee::printDoc(int index = -1)
{
    if(index < -1)
        return;
    if(index == -1)
    {
        for(auto it : this->doc_list_)
            it.printMember();

    }
    else
        this->doc_list_[index].printMember();

}

void employee::printEmp(void)
{
    std::cout << "id : " << this->id_ << std::endl;
    std::cout << "name : " << this->name_ << std::endl;
    for(auto it : this->doc_list_)
        std::cout << "Document : " << it.getDesc() << std::endl;
}

QA::QA(int id):
    employee(id, std::string("QA"))
{
}
QA::~QA()
{
}

Researcher::Researcher(int id):
    employee(id, std::string("Resercher"))
{
}
Researcher::~Researcher()
{
}

PM::PM(int id):
    employee(id, std::string("PM"))
{
}
PM::~PM()
{
}

