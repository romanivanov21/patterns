#ifndef _PROGUCT_H_
#define _PRODUCT_H_

#include <cstring>
#include <list>

#include <iostream>

class product
{
public:
    product( );
    virtual ~product( );

    void add( const std::string &part );
    void show( )const;
private:
    std::list<std::string> *parts_;
};
#endif //_PRODUCT_H_
