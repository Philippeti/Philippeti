##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## makefile
##

BINARY	= 106bombyx

FILE	=	main.py \
			main.py

all:	$(BINARY)

$(BINARY): $(FILE)
	cat $(FILE) > $(BINARY)
	chmod +x $(BINARY)

clean:
	rm -f *~
	rm -f *~
	rm -f *#

fclean:	clean
	rm -f $(BINARY)

re:	fclean all
