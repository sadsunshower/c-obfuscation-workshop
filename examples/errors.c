big_struct_t * initialise()
{
  big_struct_t * new = malloc(sizeof(big_struct_t));
  if (new == NULL)
    goto error;

  // More initialisation which might fail...

  return new;

error:
  fprintf(stderr, "Could not create big_struct_t\n");

  // More complex error handling...

  return NULL;
}
