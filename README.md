<h1 align="center">
	<img alt="badge libft" src="./gnl_dark.svg" />
</h1>

<div align="center">

[![NPM](https://img.shields.io/npm/l/react)](https://github.com/nandajfa/get_next_line/blob/main/LICENSE)

</div>

  ## 🗣️ About

> _The aim of this project is to make you code a function that returns a line, read from a file descriptor._

### Functions from Standard

- [x] [`get_next_line`](https://github.com/nandajfa/get_next_line/blob/main/get_next_line.c)				- all non-libft functions that's necessary to run the GNL.
- [x] [`get_next_line_utils`](https://github.com/nandajfa/get_next_line/blob/main/get_next_line_utils.c)	-  all functions from libft that's necessary to run the GNL.
- [x] [`get_next_line header`](https://github.com/nandajfa/get_next_line/blob/main/get_next_line.h)			- the header of the GNL.


## Getting started
**Follow the steps below**
```bash
# Clone the project and access the folder
git clone https://github.com/nandajfa/get_next_line.git && cd get_next_line/

# Create a main file
touch main.c
```

```c
#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int main(void)
{
	char	*temp;
	int	fd;

	fd = open("file.txt", O_RDONLY);

	while(1)
	{
		temp = get_next_line(fd);
		if (!temp)
		break ;
		printf("%s", temp);
		free(temp);
	}
	return (0);
}
```

```bash
# Compile the files, example:
clang get_next_line.c get_next_line.h get_next_line_utils.c main.c

# Execute your program
./a.out

# Well done!
```

## :computer: Technologies

* [C](https://devdocs.io/)
* [Makefile](https://www.gnu.org/software/make/manual/make.html)
* [Shell](https://unixguide.readthedocs.io/en/latest/unixcheatsheet/)
* [gcc](https://terminaldeinformacao.com/2015/10/08/como-instalar-e-configurar-o-gcc-no-windows-mingw/)

## Author

 | [<img src="https://avatars.githubusercontent.com/u/80687429?v=4" width=115><br><sub>Jessica Fernanda</sub>](https://github.com/nandajfa) |
 | :---: |
 
 [![Linkedin Badge](https://img.shields.io/badge/-Jessica-blue?style=flat-square&logo=Linkedin&logoColor=white&link=https://[https://www.linkedin.com/in/jessica-fernanda-programadora/](https://www.linkedin.com/in/jessica-fernanda-programadora/))](https://www.linkedin.com/in/jessica-fernanda-programadora/)
[![Gmail Badge](https://img.shields.io/badge/-nanda.jfa@gmail.com-c14438?style=flat-square&logo=Gmail&logoColor=white&link=mailto:nanda.jfa@gmail.com)](mailto:nanda.jfa@gmail.com)
