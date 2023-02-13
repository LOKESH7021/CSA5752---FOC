echo "STUDENT MARKSHEET"
echo "enter OS marks:"
read os
echo "enter c++ marks:"
read cpp
echo "enter JAVA marks:"
read java
total=`expr $os + $cpp + $java`
echo "Total marks: $total"
percentage=`expr $total / 3`
echo "Percentage :$percentage %"
if [$percentage -ge 60 ]
then
	echo "class:fisrt class in distinction"
elif [ $percentage -ge 50 ]
then
	echo "class:first class"
elif [ $percentage -ge 40 ]
then
	echo "class:second class"
else
	echo "Fail"
fi


