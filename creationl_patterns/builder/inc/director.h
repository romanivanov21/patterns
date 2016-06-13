#ifndef _DIRECTOR_H
#define _DIRECTOR_H

#include "abstract_builder.h"

class director
{
public:
    void construct( abstract_builder *builder );
};

#endif //_DIRECTOR_H
