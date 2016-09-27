all: rdate.c
	$(CC) -o rdate rdate.c

clean:
	rm -f rdate

install: rdate
	install rdate /usr/bin/rdate
