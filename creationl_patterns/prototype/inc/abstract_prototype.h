#ifndef _ABSTRACT_PROTOTYPE_H_
#define _ABSTRACT_PROTORYPE_H_

class abstract_prototype
{
public:
    abstract_prototype(unsigned long id) : id_(id) { }
    virtual ~abstract_prototype() { }

    unsigned long get_id()const { return id_; }
    virtual abstract_prototype* clone() = 0;

    abstract_prototype(const abstract_prototype &value) = delete;
    abstract_prototype& operator=(const abstract_prototype &copy) = delete;

private:
    unsigned long id_;
};
#endif //_ABSTRACT_PROTOTYPE_H_