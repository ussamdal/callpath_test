#include <string>
#include <iostream>
class document
{
public:
    document() {};
    virtual ~document() {};
    void setName(std::string& name) {this->name_ = name;};
    std::string getName(void) {return this->name_;};
    void setDesc(std::string& desc) {this->desc_ = desc;};
    std::string getDesc(void) {return this->desc_;};

    void setID(int id) {this->id_ = id;};
    int getID(void) {return this->id_;};

    void printMember(void)
    {
        std::cout << "id : " << this->id_ << std::endl;
        std::cout << "name : " << this->name_ << std::endl;
        std::cout << "description : " << this->desc_ << std::endl;
    };


private:
    int id_;
    std::string name_;
    std::string desc_;

};
