#ifndef _CLIENT_H_
#define _CLIENT_H_

#include "abstract_water.h"
#include "abstract_bottle.h"

class client
{
public:

	explicit client( abstract_factory *factory );
	~client() { }

	void run( void );

private:
	abstract_water  *water_;
	abstract_bottle *bottle_;
};
#endif //_CLIENT_H_
