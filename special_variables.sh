#/bin/bash

echo Current script name: $0
echo First argument: $1
echo Number of arguments: $#
echo All arguments: $*
echo All arguments: $@
echo Exit status of last command: $?
echo Current shell PID: $$
echo Last background command PID: $!

echo Iterating arguments:
for TOKEN in $*
do
	echo $TOKEN
done
