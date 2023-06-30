#include <stdio.h>
#include "main.h"
void test_print_int(int num) {
	    printf("Testing print_int with number: %d\n", num);
	        int printed_chars = _printf("Number: %d\n", num);
		    printf("Printed %d characters\n\n", printed_chars);
}
int main() {
	    // Test cases for print_int
	    test_print_int(12345);
	        test_print_int(-6789);
		    test_print_int(0);
		        test_print_int(987654321);

			    return 0;
}

