// NIM - Name
// NIM - Name

#include "StudentDormitory.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student_t create_student(char *_id, char *_name, char *_year, char *_study_program, enum gender_t _gender)
{
  struct student_t std;

  strcpy(std.id, _id);
  strcpy(std.name, _name);
  strcpy(std.year, _year);
  strcpy(std.study_program, _study_program);
  std.gender = _gender;

  return std;
}

struct dorm_t create_dorm(char *_dormitory_name, unsigned short _capacity, enum status_t _status, enum type_t _type)
{
  struct dorm_t dorm_;

  strcpy(dorm_.dormitory_name, _dormitory_name);
  dorm_.capacity = _capacity;
  dorm_.status = _status;
  dorm_.type = _type;

  return dorm_;
}

void print_students(struct student_t *_students, int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%s#%s#%s#%s#%i\n", _students[i].id, _students[i].name, _students[i].year, _students[i].study_program, _students[i].gender);
  }
}

void print_dorms(struct dorm_t *_dorm, int size)
{

  // CODE
}

void print_students_dorm(struct student_dormitory_t *students_dorms, int students_size, struct dorm_t *dorms, int droms_size)
{
  int lk;
  int pr;
  printf("\n");
  for (int i = 0; i < droms_size; i++)
  {
    printf("%s#%i#", dorms[i].dormitory_name, dorms[i].capacity);
    if (dorms[i].status == 0)
    {
      printf("Available#");
    }
    else if (dorms[i].status == 1)
    {
      printf("Not Available#");
    }
    if (dorms[i].type == 0)
    {
      printf("For Male\n");
    }
    else if (dorms[i].type == 1)
    {
      printf("For Female\n");
    }
  }
}

/*------------------------------------------------*/

void assign_students(struct student_dormitory_t *students_dorms, struct dorm_t *dorms, struct student_t *students, int size_dorms, int size_students)
{
  printf("Students:\n");
  for (int i = 0; i < size_students; i++)
  {
    printf("%s#%s#%s#%s#", students[i].id, students[i].name, students[i].year, students[i].study_program);
    if (students[i].gender == 0)
    {
      printf("MALE\n");
    }
    else if (students[i].gender == 1)
    {
      printf("FEMALE\n");
    }
  }
  printf("\nDorms:\n");
  for (int i = 0; i < size_dorms; i++)
  {
    printf("%s#%i#", dorms[i].dormitory_name, dorms[i].capacity);
    if (dorms[i].status == 0)
    {
      printf("Available#");
    }
    else if (dorms[i].status == 1)
    {
      printf("Not Available#");
    }
    if (dorms[i].type == 0)
    {
      printf("For Male\n");
    }
    else if (dorms[i].type == 1)
    {
      printf("For Female\n");
    }
  }
  int lk = 0;
  int pr = 0;
  for (int i = 0; i < size_students; i++)
  {
    if (students[i].gender == 0)
    {
      dorms[1].capacity--;
      lk++;
    }
    else if (students[i].gender == 1)
    {
      dorms[0].capacity--;
      pr++;
    }
  }
}

struct dorm_t check_dorm(struct dorm_t *dorms, int size, enum type_t gender)
{
  struct dorm_t temp;

  // CODE

  return temp;
}