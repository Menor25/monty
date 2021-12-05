#include "monty.h"
/**
 * open_and_read -main entry.
 *Description:Function that open, read and execute.
 * @argv: arguments received by parameter
 * Return: void
 **/

 char open_and_read(char **argv)
 {
     char *filename = argv[1];
/* prototype from struct instructions */
	void (*p_function)(stack_t **, unsigned int);
	FILE *fp;
	char *buf = NULL, *token = NULL, command[1024];
	size_t len = 0;
	ssize_t line_size;
	unsigned int line_counter = 1;
	stack_t *top = NULL;

	fp = fopen(filename, "r");
	if (fp == NULL)
        open_err(argv);

    /* Loop line by line till we get to the end of the file (EOF) */
	while ((line_size = getline(&buf, &len, fp)) != EOF)
	{
		token = strtok(buf, "\n\t\r ");
		if (token == '\0')
			continue;
		strcpy(command, token);
		if (is_comment(token, line_counter) == 1)
			continue;
        /* String compare, if the string are equal it returns zero */
		if (strcmp(token, "push") == 0)
		{
			token = strtok(NULL, "\n\t\r ");
			if (token == NULL || is_number(token) == -1)
				not_int_err(line_counter);
            /* If it is not an integer then lets convert it to an integer using the atoi() function */
			number = atoi(token);
        /*p_function will receive the function to execute*/
			p_function = get_op_code(command, line_counter);
     	/* p_function takes the place of the function to execute: push, pall, etc*/
			p_function(&top, line_counter);
		}
		else
		{
			p_function = get_op_code(token, line_counter);
			p_function(&top, line_counter);
		}
		line_counter++;
	}
	fclose(fp);
	if (buf != NULL)
		free(buf);
	free_stack(top);
 }
