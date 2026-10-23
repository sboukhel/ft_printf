<div align="center">

<img src="https://capsule-render.vercel.app/api?type=venom&color=0:000000,50:0a0a0a,100:111111&height=200&section=header&text=ft_printf&fontSize=90&fontFamily=JetBrains%20Mono&fontColor=ffffff" />

[![typing](https://readme-typing-svg.demolab.com?font=JetBrains+Mono&weight=500&size=16&duration=3000&pause=800&color=1D9E75&center=true&vCenter=true&multiline=false&width=580&lines=A+custom+printf+implementation)](https://github.com/sboukhel/ft_printf)

<p align="center">
  <img src="https://res.cloudinary.com/dpwnvpf63/image/upload/v1749674109/UM6P_1337_hqcnme.jpg" alt="1337 Logo" width="160" style="border-radius: 15%;" />
  &nbsp;&nbsp;&nbsp;
  <img src="https://res.cloudinary.com/dpwnvpf63/image/upload/v1749675535/42_network_logo.jpg" alt="42 Network Logo" width="160" style="border-radius: 15%;" />
</p>

---

# school badges
<a href="https://1337.ma"><img src="https://img.shields.io/badge/1337-000000?style=for-the-badge&logo=42&logoColor=1D9E75&labelColor=0d0d0d"/></a>
<a href="https://42network.org"><img src="https://img.shields.io/badge/-Network-000000?style=for-the-badge&logo=42&logoColor=ffffff&labelColor=0d0d0d"/></a>
<img src="https://img.shields.io/badge/language-000000?style=for-the-badge&logo=c&logoColor=5577aa&labelColor=0d0d0d"/>
<img src="https://img.shields.io/badge/status-active-000000?style=for-the-badge&logo=github&logoColor=1D9E75&labelColor=0d0d0d"/>

---

# live repo stats

<img src="https://img.shields.io/github/stars/sboukhel/ft_printf?style=for-the-badge&label=%E2%98%85%20stars&labelColor=0d0d0d&color=111111&logoColor=ffffff"/>
<img src="https://img.shields.io/github/forks/sboukhel/ft_printf?style=for-the-badge&label=%E2%80%A6%20forks&labelColor=0d0d0d&color=111111"/>
<img src="https://img.shields.io/github/last-commit/sboukhel/ft_printf?style=for-the-badge&label=%E2%86%91%20pushed&labelColor=0d0d0d&color=111111&logo=git&logoColor=1D9E75"/>
<img src="https://img.shields.io/github/repo-size/sboukhel/ft_printf?style=for-the-badge&label=%E2%96%A6%20size&labelColor=0d0d0d&color=111111"/>

</div>

<br/>

---

## 📝 Description

**ft_printf** is a custom implementation of the C standard library function `printf`, developed as part of the 42 School curriculum.

The project recreates a subset of the original `printf` behavior, handling multiple conversion specifiers and type-specific formatting while following the strict rules of the 42 programming standards.

This project is a key exercise in understanding variadic functions, formatting logic, and low-level output handling.

---

## 🎯 Supported Conversions

- `%c` — character
- `%s` — string
- `%p` — pointer address
- `%d` — signed decimal integer
- `%i` — signed integer
- `%u` — unsigned integer
- `%x` — lowercase hexadecimal
- `%X` — uppercase hexadecimal
- `%%` — percent sign

---

## ⚙️ Installation & Usage

### Clone the repository
```bash
git clone https://github.com/sboukhel/ft_printf.git
cd ft_printf
```

### Build the library
```bash
make
```

This generates a static library:

```bash
libftprintf.a
```

### Clean up
```bash
make clean
make fclean
make re
```

- `make clean` removes object files
- `make fclean` removes objects and the library
- `make re` rebuilds everything

### Use it in your project
Include the header:

```c
#include "printf.h"
```

Then call:

```c
int main(void)
{
    ft_printf("Hello %s! Number: %d\n", "world", 42);
    ft_printf("Hex: %x\n", 255);
    ft_printf("Pointer: %p\n", (void *)main);
    return (0);
}
```

Compile your program with:

```bash
gcc main.c -I./printf -L. -lftprintf -o test_program
```

---

## 📁 Project Structure

```text
ft_printf/
├── Makefile
├── README.md
├── en.subject.pdf
├── printf/
│   ├── printf.h
│   ├── printf.c
│   ├── ft_putchar.c
│   ├── ft_putstr.c
│   ├── ft_strlen.c
│   ├── ft_putnbr.c
│   ├── addr_hex.c
│   ├── hexa.c
│   └── ...
├── test/
│   ├── main.c
│   ├── main1.c
│   ├── main2.c
│   ├── main3.c
│   └── ...
└── libftprintf.a
```

---

## 🧪 Testing

The repository includes several verification programs in the `test/` directory to compare the custom implementation against the standard library `printf`.

Example:

```bash
cc test/main.c -I./printf -L. -lftprintf -o test_program
./test_program
```

---

## 📏 Project Rules

42 enforces a strict coding standard called **Norminette**. This project follows those rules, including:

- no forbidden functions
- no global variables
- functions must stay simple and readable
- careful memory handling
- no leaks or undefined behavior

---

## 👤 Author

<div align="center">

**sboukhel**

Student at [1337](https://1337.ma) — part of the [42 Network](https://42network.org)

<a href="https://github.com/sboukhel"><img src="https://img.shields.io/badge/GitHub-000000?style=for-the-badge&logo=github&logoColor=1D9E75&labelColor=0d0d0d"/></a>

</div>
