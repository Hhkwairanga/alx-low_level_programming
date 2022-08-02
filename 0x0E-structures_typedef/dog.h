 #ifndef DOG_H
  2 #define DOG_H
  3
  4 /**
  5  * struct dog - structure definition of a dog
  6  * @name: character string
  7  * @age: integer
  8  * @owner: character string
  9  */
 10 typedef struct dog
 11 {
 12         char *name;
 13         float age;
 14         char *owner;
 15 } dog_t;
 16
 17 void init_dog(struct dog *d, char *name, float     age, char *owner);
 18 void print_dog(struct dog *d);
 19 dog_t *new_dog(char *name, float age, char *own    er);
 20 void free_dog(dog_t *d);
 21 #endif
