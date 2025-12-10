#include <stdio.h>       // Standard I/O
#include <stdlib.h>      // General utilities
#include <unistd.h>     // POSIX API
#include <string.h>
#include <stdint.h>

typedef struct {
  const char *key;
  int value;
} NGram;

// NGram unigram[] = {
// {'A', 1},
// {'B', 4},
// ...
// }
//
// NGram bigram[] = {
// {"AB", 1},
// {"BC", 24}
// ...
// }

int read_file(FILE **file) {
  const char *filename = "input.txt";
  *file = fopen(filename, "r");

  if (*file == NULL) {
    perror("Error opening file");
    return 0;
  }

  return 1;
}

void count_ngram(){}

int parse_file(char *word_list) {
  FILE *input = NULL;
  if (!read_file(&input)) {
    perror("Failed to read file");
    return 0; // exit on failed to read file
  } 

  char buffer[10000];
  while (fgets(buffer, sizeof buffer, input) != NULL) {
  }
  fclose(input);
  return 1;
}

int main() {
  #define MAX_WORDLE 13000
  char all_words[MAX_WORDLE][5] = {0};
  if (parse_file(all_words)) return EXIT_SUCCESS;

  return EXIT_FAILURE;
}
