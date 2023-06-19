# C - Structures, Typedef  
This project provides an overview of C structures `(structs)` and `typedef`, covering their purpose, usage, and benefits in programming.  
## Structures
In C, structures `(structs)` are used to define custom data types that can hold multiple variables of different types. A struct is a collection of related data elements grouped together under a single name. It allows you to create more complex data structures by combining different data types into a single entity.  
```
/* Define a struct */
struct Person {
    char name[50];
    int age;
    float height;
};
/* Declare and use a struct variable */
struct Person person1;
strcpy(person1.name, "John");
person1.age = 25;
person1.height = 1.8;
```
In this example, a struct called Person is defined with variables for `name`, `age`, and `height`. multiple instances of this struct can be created, such as person1, and assign values to its members.  
`Structs` are useful when you want to group related data together, such as representing a person's information with `name`, `age`, and `height`. They enhance code organization and improve readability by providing a logical structure to store and access data.  
## Typedef
The `typedef` keyword in C is used to create aliases (alternative names) for existing data types. It allows you to define custom names for complex data types, including `structs`, making your code more concise and readable.  
```
/* Define a typedef for struct Person */
typedef struct {
    char name[50];
    int age;
    float height;
} Person;

/* Declare and use a typedef struct variable */
Person person1;
strcpy(person1.name, "John");
person1.age = 25;
person1.height = 1.8;
```
In this example, the typedef keyword is used to create an alias Person for the struct definition. Now, we can declare variables of type Person without using the struct keyword explicitly.   
`Typedef` simplifies the usage of complex data types, improves code maintainability, and makes it easier to change the underlying implementation of a data type without modifying the code that uses it.
