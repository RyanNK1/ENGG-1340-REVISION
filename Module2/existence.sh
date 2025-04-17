if [ -e hello.cpp ]
then
	echo "hello.cpp exists"
	g++ hello.cpp -o hello 2> error.txt
	if [ -e hello ]
	then
		./hello
	else
		echo "Compilation Failed"
		echo "Here are the error messages"
		cat error.txt
	fi
else
	echo "hello.cpp not found!"
fi
