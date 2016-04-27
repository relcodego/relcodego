
#!/bin/sh
echo "a=3,b=4"
a=3 
b=4
if [ $a -eq 3 ] && [ $b -gt $a ]
then 
echo "hhh"
fi
if [ $a -gt $b ] || [ $a != 4 ]
then 
echo "32232"
fi
