# beverages

## Introduction
This project goes through the main features of Object Oriented Programming in C++. The main concept of the program revolves around various beverages (i.e. drinks), and playing around with their features (i.e. added sugar, company name etc.).

### Inheritance
“Beverages” class represents the base class from which “energyDrinks”,” fruit Juice” and (through
multiple inheritance) “carbonatedDrinks” inherit from. The inheritance happens by adding “public
Beverages”, next to the class declaration of the children. This means that children classes are
allowed to access private/public/protected states and methods of the parent class. Also, overriding
of methods is allowed through the usage of the word “virtual” in front of the method declaration.
Another consequence of inheritance is that inside the child constructor, the parent constructor must
also be initialized.

However, one should note that in the case of multiple inheritance, the “Diamond Problem” causes
issues. This means that there would be two sets of states from the base class inherited by the
children, which does not represent an ideal case. To go around this problem, one needs to use the
keyword “virtual” whenever the base class is being inherited by a child, so that only one set of states
is created.

The class “carbonatedDrinks” class inherits from both “energyDrinks” and “fruitJuice”, which inherit
from the “Beverages” class. Therefore, the “carbonatedDrinks” constructor will have to implement
the states from “Beverages”, “energyDrinks” and “fruitJuice” as well as the other states from its own
implementation. Also, access to the states/methods from all those classes is provided to
“carbonatedDrinks”. However, the key here is that only one set of states from “Beverages” is
created.

### Separate compilation
Separation of the cpp and h files happens for every single class created in this assignment. If this was
to be a project with hundreds of software engineers, one would need to separate the classes as
stated above, because this allows only parts of the code to be compiled again if there was to be
changes made (compared to compiling the whole project).

### One abstract class
Abstract classes are caused by the declaration of “pure virtual” methods that require inherited
classes to implement these specific methods. The abstract class in the base class “Beverages” from
which all children inherit from, is an example of abstract classes. This class is of abstract nature
because of the declaration of the pure virtual class “display”. The “display” class is supposed to print
the constructed states of each inherited object of “Beverages” type. Note, that “Beverages”
becomes virtual due to this, meaning that it has methods/states, but there is at least one member
method that is missing implementation (i.e. “display”).

### Access specifiers
Public methods/states are part of the “implementation”, so that means that the user can see/access
them. A good example of “public” method is the “display” method situated in every class. However,
states are generally never declared as “public”, as that will allow the user to call them outside of the
class (i.e. defeats the purpose of encapsulation).

Private methods/states are only accessible to the functions within the class itself. Note, that private
methods/states are not accessible to inherited classes. Examples of private variables are the states
of most classes in this assignment (e.g. in “fruitJuiceClass.h”, “vitamins” represents a state of the
class and it private, meaning that it can only be used by the “fruitJuiceClass.h/cpp”.

Protected methods/states are like the private ones, but the distinct difference is that these are
allowed to be accessed by inherited classes as well. For example, if one looks at the
“BeveragesClass.h”, the states are declared as protected, which means that all the children of this
class would be able to access these variables. Inside “fruitJuiceClass.h”, there is a declaration of a
method called “changeSugarGrams”, which is defined in “fruitJuiceClass.cpp”. In the definition, the
variable “sugarGrams” (i.e. declared in “BeveragesClass”) is being modified/updated by a new value.

### Passing an object
Pass by value passes the value of the object to a method. In “energyDrinkClass.h” the method
“brandChange” is declared, which takes as parameter an object of type “energyDrinks” and a
variable that will be used to update the “brand” state in “energyDrinksClass.cpp” definition. When
calling this method on the object in “assignment_1” test code, one can see that the “brand” will not
update (the “brand” will be updated locally in the method, but this new change will not carry out of
the method). This is a consequence of the “pass by value” method, which only passes the value of
the object and not its address.

Pass by reference passes the address of the variable. Again, in “energyDrinkClass.h” there is a
method “caffeineChange” declared, which takes in an object of “energyDrinks” type and a new
string that updates the “caffeine” state in “energyDrinksClass.cpp” definition. In this case, if one
looks at the test code in “assingment_1”, the “caffeine” variable will update successfully, because
the address of the object has been passed instead of its value (so the value updated in the method
can be carried outside).

### Constant Qualifier and Constant Reference
Constant Qualifier has been implemented in the “fruitJuice” class, more specifically in the method
“getVitamins”. This method takes no parameters and returns the “vitamins” value to the screen. To
make it constant (i.e. initialized value stays constant/helps programmers to not modify variables that
are not supposed to be modified), the keyword “const” was added at the end of the declaration in
“fruitJuiceClass.h” and at start of the definition in “fruitJuiceClass.cpp”. Looking at the test code in
“assignment_1”, one can clearly see the construction of object “e”, and the usage of “const” to
make it constant. Therefore, calling “.a method” on this object will result in the return of the
“vitamins” state.

Constant Reference (i.e. makes usage of references) was shown using the same object “e”, but with
a different method. The method in question, is declared in “fruitJuiceClass.h” as “getFlavour” and
defined in “fruitJuice.cpp”. This method takes one constant reference parameter of type “fruitJuice”
and the output is expected to be the current “flavour” of the object “e”.
Note that above points are const safe because one uses “const” at the end of the definition/start of
the declaration. This is used to indicate that the called object will not be modified by the method.

### New and delete keywords
The keywords “new” and “delete” are used for manual allocation/deallocation of memory. To make
use of this, pointers must be used to manage storage that is manually allocated. The reason for this
is that sometimes programmers do not know how much memory is needed, so they manually
allocated/deallocate memory.

In “assignment_1”, one object of “energyDrinks” type is dynamically created using the keyword
“new” and assigned to the pointer “a”. Then, one calls the “display” method on the object to check if
the object has been successfully created. At the end of the test code, the keyword “delete” is used
on the pointer, to deallocate the memory. If this step was to be omitted, then that would have
resulted in a memory leak.

### Array of pointers
In the “assignment_1” file, there is an array of pointers “o[3]” of “fruitJuice” type. Each pointer is
dynamically allocated using “new” and the constructor of “fruitJuice”. Note, that in this case, there is
no “delete”, so a “memory leak” will be created. The last part of this test code is the call on the
method “process”, that takes in the array of pointers and the size of the array (i.e. overall size of the
array in bytes divided by one member size in bytes = number of variables in the array).

A new friend method “process” has been declared in “fruitJuiceClass.h” and defined in
“fruitJuice.cpp”. This new method takes in an array of pointers and the size of the array. The
implementation is simple, as there is a for loop which goes through each member of the array of
pointers and calls on the “display” function.

### Destructor
The destructor is being called once by creating an “energyDrinks” object in “assignment_1” file. To
show that this is the case, a print has been added in the implementation of the destructor method in
“energyDrinks.cpp”. This print will simply indicate that an object is about to get destroyed.

The second time the destructor is called by creating a “carbonatedDrinks” object, which required an
“energyDrinks” object to be also constructed/destructed (i.e. Inheritance). Therefore, when the
destruction of this “carbonatedDrinks” object happens, the destructor of the “energyDrinks” will be
also called. The test code can be seen in “assignment_1”.

Note, the destructor does not delete the object, it’s just being called before the actual deletion
happens.

### Dynamic Binding
One can look in “assignment_1” and see how two pointers of “energyDrinks” and
“carbonatedDrinks” are declared and defined. Notice, how both pointers are allowed to call the
method “display”. This is because we have declared the “display” method as a virtual method, which
enables polymorphism/overriding. If the virtual keyword was to not be present, then, overriding
would not have been possible.

Allocating the value stored in Pointer F (parent) to Pointer G (child), does not work (i.e. pntG = pntF).
This is because the child might have methods unknown to the parent. However, the other way
around (i.e. allocating value stored in pointer child to pointer parent) is going to work, as an
assignment L=R is legal only if the (static) type R is the same or derived type of the (static) type L.

Calling the “display” method, before and after the allocation of pointers, proves the point of
dynamic binding. Both “energyDrinks” and “carbonatedDrinks” have different “display” methods,
and these are called on the dynamic type (not the static type) of the pointers. Therefore, the
dynamic type determines which “display” method is called.

### Overload + and == operators
Operator overloading is used to overload operators, which can be used by objects of various classes
to perform things like addition/subtraction/comparison etc.

Overloading of operators “+” and “==” happens in “energyDrinkClass.h” (i.e. declaration) and
“energyDrinks.cpp” (i.e. definition). For the “+” operator, a method that is returning “energyDrinks”
type and takes in an argument of the same type has been created. To perform overloading
specifically on “+”, a special notation had to be used i.e. “operator +”, after the data type. Inside the
method, one takes in the “sugarGrams” of the passed object (i.e. parameter) and add it to the object
the method has been called on. The result should be the addition of the two values, and test code is
being provided in “assignment_1”.

Overloading of the “==” operator happens in a similar manner, but this time the return value is of
“bool” type. One passes in an object of type “energyDrinks” and checks if the “caffeine” level is
equal to the object the method has been called on. If the values are the same, the method will
return “true”, otherwise it will return “false”. Note, that the overloading happens in
“energyDrinks.h” (i.e. declaration), “energyDrinkClass.cpp” (i.e. definition) and “assignment_1” (i.e.
test code.

### Overload the assignment operator
Again, operator overloading allows one to use various operators in the context of objects of various
class types. Method that overloads the “=” operator, taking in a const “energyDrinks” reference and
returning a “energyDrinks” reference. It is declared in “energyDrinksClass.h” and defined in
“energyDrinks.cpp”.

Inside the definition, there is an if statement making sure that “this”/the object the method is being
called on, is not equal to the reference to the object passed in. This will prevent the object from
copying itself. If that is the case, then the “healthRisk” value of the passed object will be assigned to
the “healthRisk” of the object on which the method has been called on. At the end of the definition,
the dereferenced value of the object the method has been called on is returned (i.e. as “this” is a
pointer).

The test code in “assignment_1”, shows the creation of 3 objects, which call the method “display”.
After displaying each value, the objects are being assigned one to another by chain operation (note
that, a reference to the value assigned is being returned). Then, another series of displays are used
for each object. The expected result should be that the “healthRisk” of the third object to be copied
into the second object’s “healthRisk”, which will be copied into the first object’s “healthRisk”.

### Object passing itself (this operator)
Function “setVitamins” is declared as a “friend” in the “fruitJuiceClass.h” and implemented in
“fruitJuice.cpp”. Note, that “friend” keyword allows outside methods to modify states of classes. The
method takes in a pointer to an object of class “fruitJuice” and a string “newVitamins”. Inside the
definition, the “newVitamins” string updates the “vitamins” state of the constructed “fruitJuice”
object.

A new method “new_vitamins_display”, declared in “fruitJuiceClass.h”/defined in “fruitJuice.cpp”,
gives the pointer “this” (i.e. pass itself) and “Vitamin C” string as inputs to the function
“setVitamins”. Therefore, whenever the method “new_vitamins_display” is called on an object, this
object will pass itself to the method “setVitamins” and set its “vitamins” state to “Vitamin C”. At the
end of “new_vitamins_display”, another method “vitamins_display” is called to display the newly
updated value of the “vitamins” state.

The test code in “assignment_1”, shows the creation of object “c”, which calls the method
“new_vitamins_display”.

### Modified copy constructor
Copy constructors allows copies of objects to be made, and each class has one by default.
“Modified” copy constructor refers to the modification of the default copy constructor, so that new
features can be implemented.

The modified copy constructor that uses pass by value was declared in “energyDrinkClass.h” as
“energyDrinks (const energyDrinks &)”, where the value received can be used, but it cannot be
mutated. The definition of this copy constructor is in “energyDrinks.cpp”, and one only initializes the
states of copy constructor using the const “s” reference (i.e. constant means that we cannot modify
the variable, and the reference is there because objects are references to classes). Inside the
definition, there is an attempt to modify the “caffeine” state, but this does not produce any results
because the method is constant (i.e. therefore this modification of states is commented out).

The test code in “assignment_1”, shows how an object “h” of type “energyDrinks” is created and
copy constructed into a difference object “a”. Using the “display” function, one can clearly see that
all the other states have been copied into this object.

If one was to consider the pass by reference case (i.e. passing the address), then the “s” reference
must be changed to a pointer type (also the “const” has to be removed as the value will be
modified). The declaration of this copy constructor is in “fruitJuiceClass.h” and it has an input pointer
of “fruitJuice” type. In the definition of this modified copy constructor, that is situated in
“fruitJuice.cpp”, the states of the object are initialized using the pointer “s” (note the usage of “->”
instead of “.”), and the implementation shows how the “vitamins” variable is updated with “No
vitamins”. It is very important to note that “vitamins” is used (i.e. modifies the value in the new
object) instead of “s->vitamins” (i.e. modified the value of the original object).

The test code in “assignment_1” for this point creates an object “c” of “fruitJuice” type, which is
then passed by reference (i.e. &c) to new object “a”. Both values are displayed using “display”, so
that the difference in states can be seen.

### Explicit style casts
Static casting is the one of the safest methods of casting, and an example of this cast is in
“assignment_1”. This cast can be used whenever one needs to “downcast” a variable (i.e. non-
polymorphic), automatic conversions and narrow conversion. In the given example, a variable of
“long” time is declared and down casted to a variable “x” of int time (i.e. narrow conversion). The
syntax “static_cast<int>” is used to perform the static cast.

Dynamic casting is another safe method of casting (i.e. safer than static casting), and example of this
can be seen in “assignment_1”. This type of casting is usually used when one wants to down cast an
object of virtual type (i.e. base) to an inherited object type (i.e. child). In the given example, a
pointer “a” of “Beverages” type is down casted to an a pointer “d” of “energyDrinks” type using
dynamic casting. The syntax “dynamic_cast<energyDrinks*> is used to perform the dynamic cast.

### Static states and methods
Static variables allow us to share a variable between each instance of a class, and one can think of
them as being part of the class instead of the object. In “energyDrinkClass.h”, one defines the
integer static variable “addPrice”. This value is initiallised in “energyDrinkClass.cpp” to 1. To prove
that each object of the class contains one instance of this static variable, one can use the void
method “increasePrice”, which adds +1 to the “price” state whenever a new object of
“energyDrinks” type is cosntructed. This method will be called in the constructor of the
“energyDrinksClass”, so that the “price” state can be incremented. In “assignment_1”, one creates
two objects of “energyDrinks” type, and call the method “display” on them, which will display all the
states of the class (including the increased “price” state).

In the case of static methods, one can look at the “printCurrentPrice” method, which is declared
static using the “static” keyword. This method will simply print the value of the “addPrice” static
variable whenever an object uses it (i.e. check “assignment_1”). It’s important to note that static
methods can only access static states (i.e. non-static variables cannot be used).

### Non-member operator – NOT Implemented
Non-member operators are declared outside of the class, and they are used to implement complex
operation overloading. For example, one would like to add a state of an object of “energyDrinks”
type to an integer and then assign the result back into the object. This would work fine with normal
operator overloading. However, if one wants to add the integer to the state of the objects, and then
assign the result back into the object, this will cause issues as this implementation does not exist (i.e.
so far only energyDrinks = energyDrinks + integer has been introduced, but energyDrinks = integer +
energyDrinks does not have an implementation). Therefore, a non-member operator that overloads
(in this case) the operator “+” will be required.

### Vector container
In “assignment_1” test code, there is a vector container of “fruitJuice” type called “vect”. Note, that
vectors require the usage of “vector” library declared before main. Vectors are a much easier and
preferable way of storing data because one can easily remove/add/sort etc. when compared with
arrays. To add items to the vector the method “push_back” is used, which will add objects at the end
of the vector. After adding objects to the vector, various algorithms (with specific outputs) can be
performed on them.

### Algorithm on the container
The implemented algorithms were “sort” and “for_each”. The sorting algorithm will sort vector
values based on specific criteria. In the example given in “assignment_1” test code, the “sort”
algorithm is called on a vector that contains “fruitJuice” objects. However, to sort these objects, one
needs to (at least) overload the symbol “<”. The operator “<” overloading is declared in
“fruitJuiceClass.h” as a Boolean that takes in a constant of “fruitJuice” type (i.e. constant because we
wish to analyse its contents only, not to modify them). The definition of the overloaded operator
happens in “fruitJuiceClass.cpp”, in which the “sugarGrams” variable is compared between the
object of “this” class and the object passed to the method. The higher the variable “sugarGrams” is,
the higher the position of the object in the vector will be.

In the same manner, the algorithm “for_each” represents a condensed for loop that can be written
in one single line. This algorithm complements well with the “sort” algorithm because it allows one
to iterate through the vector. Note, that “for_each” takes in as parameters the start/end of the
vector, but also a method named “outputFunction”, which is a method declared before the main in
“assignment_1”. This method prints the output of the “display” method called on an object of class
“fruitJuice”.

Combining these two algorithms, results will result in the sorting of “fruitJuice” objects based on the
“sugarGrams” variable.

### Smart pointer
Smart pointers provide a structured way to manage memory, something that regular pointers lack.
To show their functionality, I have used a unique pointer, which means that it can never be copied.
Note, that smart pointers require the “memory” library. To define the unique pointer, the syntax
“unique_ptr<class>” must be used. In “assignment_1” test code, an unique pointer of class
“energyDrinks” is defined. Then, to prove its functionalities, the following methods were called on
the pointer:
- reset() = destroys the current object and replaces it with a new one
- move() = changes the pointer that points to the object (i.e. assigns new pointer)
- release() = release the object from memory without calling the destructor.
Therefore, one can see the benefits of smart pointers.
