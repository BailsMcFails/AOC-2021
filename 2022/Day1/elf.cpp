#include "elf.h"

Elf::Elf(*int[] items) {
	calories = items;
}

int Elf::getCalories() {
	int count = 0;
	for (int item : calories) {
		count += item;
	}
	return count;
}