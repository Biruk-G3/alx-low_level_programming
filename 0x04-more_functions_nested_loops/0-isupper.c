#include "main.h"
/**
 * _isupper - checkes for uper case value.
 * @c -the caracter to be checked.
 *
 * Return : 1 if the letter is upper case.
 * 
 * */
int _isupper(int c){
	if(c >= 'A' && c <= 'Z')
		return(1);
	else
		return(0);
}
