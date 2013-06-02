../obj/ggm: ggm.c
	cc -o ../obj/ggm ggm.c

../obj/mytest: mytest.c
	cc -o ../obj/mytest mytest.c

../obj/hello: hello.c
	cc -o ../obj/hello hello.c

../obj/yourtest: yourtest.c
	cc -o ../obj/yourtest yourtest.c

clean:
	rm ../obj/hello
