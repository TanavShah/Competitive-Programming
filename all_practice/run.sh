PROG_NAME=$1
g++ -Werror $PROG_NAME
if [[ $? == 0]]; then
    ./a.out < input.txt
fi
