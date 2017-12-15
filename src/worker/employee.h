#include <string>
#include <vector>
#include "document.h"


static void myPrint(std::string des);

class employee
{
public:
    employee(int id);
    employee(int id, std::string name);
    virtual ~employee();
    void setName(std::string& name) {this->name_ = name;};
    std::string getName(void) {return this->name_;};

    void setID(int id) {this->id_ = id;};
    int getID(void) {return this->id_;};

    void addDocument(document& doc) {this->doc_list_.push_back(doc);};
    void removeDocument(int index) 
        {this->doc_list_.erase(doc_list_.begin()+index);};
    std::vector<document> getDocument(void) {return this->doc_list_;};
    void printEmp(void);
    void printDoc(int index);

private:
    int id_;
    std::vector <document> doc_list_;
    std::string name_;

};


class QA final : public employee
{
public:
    QA(int id);
    ~QA();

private:


};
class Resercher final : public employee
{
public:
    Resercher(int id);
    ~Resercher();

private:


};
class PM final : public employee
{
public:
    PM(int id);
    ~PM();

private:


};
