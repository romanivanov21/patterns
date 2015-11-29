#!/bin/bash
DIR=$(cd $(dirname $0) && pwd);
BIN_DIR="${DIR}/bin"

case "$1" in 
	"-memento" )
		./memento/make.sh
	;;
	"-strategy")
		./strategy/make.sh
	;;
	"-all"     )
		./memento/make.sh
		./strategy/make.sh
	;;
	*)
	echo "Options:" 
	echo "  -memento        Build the project memento"
	echo "  -strategy       Build the project strategy"
	echo "  -all            Build all projects"
esac
