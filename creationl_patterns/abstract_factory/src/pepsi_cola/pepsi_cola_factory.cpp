#include "abstract_water.h"#include "abstract_bottle.h"#include "pepsi_cola_factory.h"pepsi_cola_factory::pepsi_cola_factory( ) {	water_ = new pepsi_cola_water( );	bottle_ = new pepsi_cola_bottle( );}pepsi_cola_factory::~pepsi_cola_factory( ){	delete water_;	delete bottle_;}abstract_water  *pepsi_cola_factory::create_water ( ) { return water_;  }abstract_bottle *pepsi_cola_factory::create_bottle( ) { return bottle_; }