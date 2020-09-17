<p align="center">
        <img src="https://scontent.feoh1-1.fna.fbcdn.net/v/t1.0-9/103982154_620515611898089_4319415249622431892_n.jpg?_nc_cat=103&_nc_sid=174925&_nc_ohc=JVE7CBrzfT8AX8Eio9R&_nc_oc=AQk5oc-AHzG1u1uqQIBmQQS2hD7avYuqWieRYW7xPsqo3tULk4JSz8G87QoKfIulLX8&_nc_ht=scontent.feoh1-1.fna&oh=757e86ff1fa3d8c04431d137a4751910&oe=5F89FB30" width="280"/>
        </p>
<p align="center">
     <p align="center">
          <img src="https://www.holbertonschool.com/holberton-logo.png" width="360"/>
     </p>
     
  <h1 align="center">0x19. C - Stacks, Queues - LIFO, FIFO</h1>

# Monty

Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

# Monty byte code files

Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument:

```
 push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$

```

Monty byte code files can contain blank lines (empty or made of spaces only, and any additional text after the opcode or its required argument is not taken into account:

```
push 0 Push 0 onto the stack$
push 1 Push 1 onto the stack$
$
push 2$
  push 3$
                   pall    $
$
$
                           $
push 4$
$
    push 5    $
      push    6        $
$
pall This is the end of our program. Monty is awesome!$

```

# Usage

All the files are compiled in the following form:

```
 gcc -Wall -Werror -Wextra -pedantic *.c -o monty.

```

To Run the program:

```
 ./monty bytecode_file
```

Available Operation Codes:

| Opcode | Description |
|---------------- | -----------|
|push   | Pushes an element to the stack. e.g (push 1 # pushes 1 into the stack)|
|pall   | Prints all the values on the stack, starting from the to of the stack.|
|pint   | Prints the value at the top of the stack.|
|pop    | Removes the to element of the stack. |
|swap   | Swaps the top to elements of the stack.|
|add    | Adds the top two elements of the stack. The result is then stored in the second node, and the first node is removed.|
|nop    | This opcode does not do anything.|

### :file_folder: Files / Directories 

#|File|Description
---|---|---
1|[README.md](./README.md)|...
