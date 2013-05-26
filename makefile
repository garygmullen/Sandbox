../obj/mytest: mytest.c
	cc -o ../obj/mytest mytest.c

../obj/hello: hello.c
	cc -o ../obj/hello hello.c

clean:
	rm ../obj/hello
