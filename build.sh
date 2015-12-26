#!/bin/bash
DIR=$(cd $(dirname $0) && pwd);
BIN_DIR="${DIR}/bin"

case "$1" in 
	"-pattern_bases" )
		./pattern_bases/make.sh
	;;
	"-memento" )
		./memento/make.sh
	;;
	"-strategy")
		./strategy/make.sh
	;;
	"-all"     )
		./pattern_bases/make.sh
		./memento/make.sh
		./strategy/make.sh
	;;
	*)
	echo "Options:"
	echo "  -pattern_bases  Build the project pattern_bases" 
	echo "  -memento        Build the project memento"
	echo "  -strategy       Build the project strategy"
	echo "  -all            Build all projects"
esac
