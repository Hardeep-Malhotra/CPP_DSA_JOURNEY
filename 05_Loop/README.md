# 📘 Loops in C++
Loops in C++ are used when we want to execute a block of code repeatedly instead of writing the same statements again and again.

✅ Real-world uses of loops

printing numbers from 1 to 100

printing multiplication tables

traversing arrays and strings

calculating the sum or product of numbers

menu-driven programs

Loops make code:

✔ shorter
✔ cleaner
✔ faster
✔ easier to maintain


##  🔄 Types of Loops in C++
C++ provides three main looping constructs:

for loop

while loop

do-while loop

Control statements inside loops

break → stops the loop completely

continue → skips current iteration

## ✅ FOR LOOP

The for loop is used when the number of iterations is known in advance.

**📌 Syntax:**

for(initialization; condition; update){
    // loop body
}

| Part            | Description                              |
|-----------------|-------------------------------------------|
| initialization  | Runs once, before loop starts             |
| condition       | Checked before every iteration            |
| update          | Executed after every iteration            |
| body            | Code that runs repeatedly                 |


### 🧠 Practice Questions — for loop

1️⃣ Print numbers from 1 to 100
2️⃣ Print the multiplication table of 2
3️⃣ Find the sum of first 10 natural numbers
4️⃣ Print squares of numbers from 1 to 10
5️⃣ Print only even numbers between 1 and 50


## ✅ WHILE LOOP
while loop is used when the number of iterations is NOT known beforehand.

Example situations:

take user input until user enters 0

read file until end of file

menu until exit choice


**📌 Syntax:**

while(condition){
    // loop body
}

**✔ Example — Print 1 to 5**

int i = 1;
while(i <= 5){
    cout << i << " ";
    i++;
}

**Important notes:**
if condition is false initially, loop will not execute
make sure to update the variable, otherwise infinite loop occurs

### 🧠 Practice Questions — while loop

1️⃣ Print reverse counting from 10 to 1
2️⃣ Find the sum of digits of a number
3️⃣ Count number of digits in a number
4️⃣ Print numbers divisible by 3 between 1 and 50
5️⃣ Find factorial of a number using while loop


## ✅ DO–WHILE LOOP
In do-while, the loop body executes first, then the condition is checked.

👉 This guarantees at least one execution, even if the condition is false.

**📌 Syntax**
do{
    // loop body
}while(condition);

**✔ Example — Print 1 to 5**
int i = 1;

do{
    cout << i << " ";
    i++;
}while(i <= 5);

### 🧠 Practice Questions — do-while loop

1️⃣ Keep asking for numbers until user enters 0
2️⃣ Create a menu-driven program
3️⃣ Keep asking user to guess a number until correct
4️⃣ Print numbers from 1 to 10
5️⃣ Keep summing inputs until a negative number is entered


## 🛑 BREAK Statement

The break keyword is used to:

immediately terminate the loop

transfer control outside the loop

**✔ Example — Stop when number reaches 5**
for(int i = 1; i <= 10; i++){
    if(i == 5)
        break;

    cout << i << " ";
}

**Output**
1 2 3 4

### 🧠 Practice Questions — break

1️⃣ Print numbers from 1 to 100 but stop at 37
2️⃣ Stop loop when user enters negative number
3️⃣ Stop printing when first multiple of 7 appears


## 🔁 CONTINUE Statement

The continue keyword:

skips the current iteration

continues with the next iteration

**✔ Example**
for(int i = 1; i <= 10; i++){
    if(i == 5)
        continue;

    cout << i << " ";
}

**Output**
1 2 3 4 6 7 8 9 10

### 🧠 Practice Questions — continue

1️⃣ Print only odd numbers from 1 to 50
2️⃣ Print numbers from 1 to 100 but skip multiples of 3
3️⃣ Print 1 to 20 but skip 13
4️⃣ Print all numbers except a number entered by the user



| Loop Type | Key Use                      |
|-----------|------------------------------|
| for       | fixed number of iterations   |
| while     | unknown number of iterations |
| do-while  | execute at least once        |
| break     | exit loop                    |
| continue  | skip current iteration       |



**👨‍💻 Author**
Maintained by Hardeep Singh for mastering C++ fundamentals.

🚀 Happy Coding!