 #ifndef _HEADER_
  2 #define _HEADER_
  3
  4 /**
  5   * struct dog - Dog attributes
  6   * @name: The name of the dog.
  7   * @age: The age of the dog.
  8   * @owner: The owner of the dog.
  9   *
 10   * Description: The attributes of     a dog.
 11   */
 12 struct dog
 13 {
 	char *name;
 15     float age;
 16     char *owner;
 17 };
 18
 19 /**
 20  * dog_t - Typedef for dog structur    e
 21  */
 22 typedef struct dog dog_t;
 23
 24 void init_dog(struct dog *d, char *    name, float age, char *owner);
 25 void print_dog(struct dog *d);
 26 dog_t *new_dog(char *name, float ag    e, char *owner);
 27 void free_dog(dog_t *d);
 28 #endif

