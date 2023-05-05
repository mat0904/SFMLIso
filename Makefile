##
## EPITECH PROJECT, 2023
## CSFMIso
## File description:
## Makefile
##

SRC	=	src/array_manipulation/split.c \
		src/file_manipulation/load_file.c \
		src/file_manipulation/get_filesize.c \
		src/manifest/create/create_manifest.c \
		src/manifest/load/load_manifest.c

OBJ	=	$(SRC:.c=.o)

CC	=	gcc
CFLAGS	= -Wall -Wextra
EXE	=	libCSFMIso.a

all:	$(EXE)

%.o:	%.c
		$(CC) -o $@ -c $^ $(CFLAGS)

$(EXE):	$(OBJ)
		ar rc $(EXE) $(OBJ)

clean:
		rm -rf $(OBJ)

fclean:	clean
		rm -rf $(EXE)

re:	fclean all
