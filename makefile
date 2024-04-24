default:
	gcc -Wall -o prog main.c input.c stackElem.c queueElem.c listElem.c mapElem.c stackArrayList.c queueLinkedList.c listArrayList.c mapArrayList.c
debug:
	gcc -Wall -o prog -g main.c input.c stackElem.c queueElem.c listElem.c mapElem.c  stackArrayList.c queueLinkedList.c listArrayList.c mapArrayList.c
clean:
	rm -f prog
