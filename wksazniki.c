 int a[] = {1, 2, 3, 5, 7};
 int *ptr;
 ptr = a + 10; /* niezdefiniowane */
 ptr = a - 10; /* niezdefiniowane */
 ptr = a + 5;  /* zdefiniowane (element za ostatnim) */
 *ptr = 10;    /* to ju¿ nie! */
