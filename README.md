# Push_Swap


push_swap is a sorting algorithm. The goal of the push_swap project is to create a sorting program that takes a list of integers as input and outputs a series of instructions to sort the list using two stacks.

The project involves implementing two stacks, named A and B, and a set of operations to manipulate these stacks. The allowed operations typically include:

sa: swap the first two elements at the top of stack A.
sb: swap the first two elements at the top of stack B.
ss: perform sa and sb simultaneously.
pa: push the first element from stack B to stack A.
pb: push the first element from stack A to stack B.
ra: rotate all elements in stack A (the first element becomes the last).
rb: rotate all elements in stack B.
rr: perform ra and rb simultaneously.
rra: reverse rotate all elements in stack A (the last element becomes the first).
rrb: reverse rotate all elements in stack B.
rrr: perform rra and rrb simultaneously.
The goal is to generate a sequence of these operations that will sort the list in the minimum number of moves. The sorting algorithm should be efficient and use as few instructions as possible.

My Push Swap worst cases:
- 2 numbers => 1 move
- 3 numbers => 2 moves
- 5 numbers => 10 moves
- 100 numbers => less than 715 moves
- 500 numbers => less than 6500 moves

# Preview of my sorting algorithm:
![](https://cdn.discordapp.com/attachments/1067452256686981161/1195010688981139456/ScreenRecording2023-12-26at5.58.37PM-ezgif.com-video-to-gif-converter.gif?ex=65b26f6e&is=659ffa6e&hm=cb999b35b49afae90278b027ef320c438f20549bf8a259e0664c625aa6111fa1&)

Sorting Algorithm ==> Chunks (8 Chunks in less than 300 numbers and 15 Chunks in more than 300 numbers)
