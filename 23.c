#include <stdio.h>

void print_full_pyramid(int n);
void print_half_pyramid(int n);
void print_inverted_pyramid(int n);
void print_left_aligned_pyramid(int n);
void print_combined_half_pyramids(int n);

int main() {
  int n, choice;

  printf("Enter the number of rows: ");
  scanf("%d", &n);

  printf("Choose a pyramid pattern:\n");
  printf("1. Full pyramid\n");
  printf("2. Half pyramid\n");
  printf("3. Inverted pyramid\n");
  printf("4. Left-aligned pyramid\n");
  printf("5. Combined half pyramids\n");
  printf("Enter your choice: ");
  scanf("%d", &choice);

  switch (choice)
  {
    case 1:
      print_full_pyramid(n);
      break;
    case 2:
      print_half_pyramid(n);
      break;
    case 3:
      print_inverted_pyramid(n);
      break;
    case 4:
      print_left_aligned_pyramid(n);
      break;
    case 5:
      print_combined_half_pyramids(n);
      break;
    default:
      printf("Error: Invalid choice\n");
      break;
  }

  return 0;
}

void print_full_pyramid(int n) {
  int i, j, space;

  for (i = 1; i <= n; i++)
  {
    for (space = 1; space <= n - i; space++)
    {
      printf(" ");
    }

    for (j = 1; j <= 2 * i - 1; j++)
    {
      printf("*");
    }

    printf("\n");
  }
}

void print_half_pyramid(int n) 
{
  int i, j;

  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf("*");
    }

    printf("\n");
  }
}

void print_inverted_pyramid(int n)
{
  int i, j, space;

  for (i = n; i >= 1; i--) 
  {
    for (space = 1; space <= n - i; space++)
    {
      printf(" ");
    }

    for (j = 1; j <= 2 * i - 1; j++) 
    {
      printf("*");
    }

    printf("\n");
  }
}

void print_left_aligned_pyramid(int n)
{
  int i, j;

  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf("*");
    }

    printf("\n");
  }

  for (i = n - 1; i >= 1; i--) 
  {
    for (j = 1; j <= i; j++)
    {
      printf("*");
    }

    printf("\n");
  }
}

void print_combined_half_pyramids(int n) 
{
  int i, j;

  for (i = 1; i <= n; i++) 
  {
    for (j = 1; j <= i; j++)
    {
      printf("*");
    }

    printf("\n");
  }

  for (i = n - 1; i >= 1; i--)
  {
    for (j = 1; j <= i; j++)
    {
      printf("*");
    }

    printf("\n");
  }
}

