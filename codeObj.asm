TITLE : TP.asm

DATA SEGMENT
A	DW ?
B	DW ?
D	DB ?
array	DW ?
t3	DB ?
t2	DB ?
X	DW ?
H	DW ?
G	DW ?
DATA ENDS
CODE SEGMENT
MAIN
ASSUME CS: CODE, DS: DATA, SS: PILE
	 MOV AX,DATA
	 MOV DS,AX

 Quadruplet 0
MOV AX, 1
MOV BX, 54
MOV , AX

 Quadruplet 1
MOV AX, array
MOV BX, 
MOV , AX

 Quadruplet 2
MOV AX, B
MOV BX, 
MOV array[D], AX

 Quadruplet 3
MOV AX, 4
MOV BX, t2
MUL BX
MOV T1, AX

 Quadruplet 4
MOV AX, T1
MOV BX, 
MOV t3, AX

 Quadruplet 5
MOV AX, A
MOV BX, 
MOV array[10], AX

 Quadruplet 6
MOV AX, 1
MOV BX, 12.66
ADD AX, BX
MOV T2, AX

 Quadruplet 7
MOV AX, T2
MOV BX, 
MOV G, AX

 Quadruplet 8
MOV AX, 12
MOV BX, 13.29
SUB AX, BX
MOV T3, AX

 Quadruplet 9
MOV AX, T3
MOV BX, 
MOV H, AX

 Quadruplet 10
MOV AX, 2
MOV BX, 2.4
DIV BX
MOV T4, AX

 Quadruplet 11
MOV AX, T4
MOV BX, 3
MUL BX
MOV T5, AX

 Quadruplet 12
MOV AX, T5
MOV BX, 
MOV X, AX

 Quadruplet 13
MOV AX, array[A]
MOV BX, array[2]
ADD AX, BX
MOV T6, AX

 Quadruplet 14
MOV AX, T6
MOV BX, 
MOV array[10], AX

 Quadruplet 15
MOV AX, 15
MOV BX, 3
DIV BX
MOV T7, AX

 Quadruplet 16
MOV AX, T7
MOV BX, B
ADD AX, BX
MOV T8, AX

 Quadruplet 17
MOV AX, B
MOV BX, 10
SUB AX, BX
MOV T9, AX

 Quadruplet 18
MOV AX, T9
MOV BX, B
DIV BX
MOV T10, AX

 Quadruplet 19
MOV AX, T8
MOV BX, T10
MUL BX
MOV T11, AX

 Quadruplet 20
MOV AX, B
MOV BX, 2
DIV BX
MOV T12, AX

 Quadruplet 21
MOV AX, T11
MOV BX, T12
ADD AX, BX
MOV T13, AX

 Quadruplet 22
MOV AX, T13
MOV BX, 
MOV A, AX

 Quadruplet 23
MOV AX, 32
MOV BX, temp_cond
MOV , AX

 Quadruplet 24
MOV AX, 0
MOV BX, 1
ADD AX, BX
MOV temp_cond, AX

 Quadruplet 25
MOV AX, 31
MOV BX, temp_cond
CMP , 1
JG 1
MOV D, AX

 Quadruplet 26
MOV AX, D
MOV BX, A
MUL BX
MOV T14, AX

 Quadruplet 27
MOV AX, T14
MOV BX, 
MOV A, AX

 Quadruplet 28
MOV AX, 26
MOV BX, 
JMP 1
MOV , AX

 Quadruplet 29
MOV AX, 38
MOV BX, 
JMP 1
MOV , AX

 Quadruplet 30
MOV AX, 40
MOV BX, temp_cond
MOV , AX

 Quadruplet 31
MOV AX, 38
MOV BX, temp_cond
MOV , AX

 Quadruplet 32
MOV AX, B
MOV BX, D
SUB AX, BX
MOV T15, AX

 Quadruplet 33
MOV AX, 38
MOV BX, temp_cond
MOV , AX

 Quadruplet 34
MOV AX, 2.10
MOV BX, 
MOV B, AX

 Quadruplet 35
MOV AX, 39
MOV BX, 
JMP 1
MOV , AX

 Quadruplet 36
MOV AX, 32
MOV BX, 
JMP 1
MOV , AX

 Quadruplet 37
MOV AX, 1.30
MOV BX, 1
ADD AX, BX
MOV T16, AX

 Quadruplet 38
MOV AX, T16
MOV BX, 
MOV A, AX

 Quadruplet 39
MOV AX, 0
MOV BX, 2
ADD AX, BX
MOV temp_cond, AX

 Quadruplet 40
MOV AX, 47
MOV BX, temp_cond
CMP , 1
JG 1
MOV n, AX

 Quadruplet 41
MOV AX, 3.23
MOV BX, 
MOV array[D], AX

 Quadruplet 42
MOV AX, 43
MOV BX, 
JMP 1
MOV , AX

MOV AH, 4Ch
INT 21h
MAIN ENDS
END MAIN
