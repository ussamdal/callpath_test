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
#if 0
void employee::addDoc(void)
{
}
#endif
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

void employee::printEmp(bool docFlag)
{
    std::cout << "id : " << this->id_ << " name : " << this->name_ << std::endl;
    if(docFlag)
    {
        for(auto it : this->doc_list_)
           std::cout << "Document : " << it.getDesc() << std::endl;
    }
}

QA::QA(int id):
    employee(id, std::string("QA"))
{
    std::cout << "QA cons called, idx : " << id << std::endl;
}
QA::~QA()
{
    std::cout << "QA dis called, idx : " << this->getID() << std::endl;
}

Researcher::Researcher(int id):
    employee(id, std::string("Resercher"))
{
    std::cout << "Res cons called, idx : " << id << std::endl;
}
Researcher::~Researcher()
{
    std::cout << "Res dis called, idx : " << this->getID() << std::endl;
}

PM::PM(int id):
    employee(id, std::string("PM"))
{
    std::cout << "PM cons called, idx : " << id << std::endl;
}
PM::~PM()
{
    std::cout << "PM dis called, idx : " << this->getID() << std::endl;
}

