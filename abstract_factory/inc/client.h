#ifndef _CLIENT_H_
#define _CLIENT_H_

class client
{
	public:
		explicit client( const abstract_factory *factory );
		void run( void );
	private:
		abstarct_watter *water_;
		abstarct_botle *bottle_;
};

#endif //_CLIENT_H_