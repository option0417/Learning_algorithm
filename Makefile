
# Setup Variable
MAIN_DIR=/home/option0417/Dev/workspace/learning_ds_and_alg


# Main phase
Main: stack.o
	gcc -o main main.c stack.o

stack.o: 
	gcc -o stack.o -c stack/stack_string.c


# Clean phase
clean:
	echo "Clean..."
	rm $MAIN_DIR/*.o
    echo "Done"


