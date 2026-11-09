

int *p; // pointer to integar

int *f(int); // Function taking int, returning int pointer

int (*f)(int); // Pointer to function taking int, returning int

int **p; // pointer to pointer int

int *(*f)(int); // Pointer to function taking int, returning int pointer

int (*f[3])(int); // Array of 3 function pointers

int (*(*f)(int))[5]; // Function pointer returning pointer to array of 5 integers

int (*f)(int *); // Function pointer taking int pointer and returning int