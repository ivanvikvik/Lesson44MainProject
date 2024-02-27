// O(N^2)
bool is_the_same_values(int* vector, int size) {
	for (int i = 0; i < size - 1; i++)
	{
		int element = *(vector + i);

		for (int j = i + 1; j < size; j++)
		{
			if (element == *(vector + j)) {
				return true;
			}
		}
	}

	return false;
}

bool is_different_values(int* vector, int size) {
	return !is_the_same_values(vector, size);
}

//0  1 2 3 4 5  6  7
//15 34 6 8 5 34 23 1
//
//15 --> 34 6 8 5 34 23 8
//
//34 --> 6 8 5 31 23 8
//
//6 --> 8 5 34 23 8
//
//8 -- > 5 34 23 8 --> return true


