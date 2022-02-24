#include "Week1Header.h"
int Sum(int a, int b) { return a + b; }
int Dif(int a, int b) { return a - b; }
int Mul(int a, int b) { return a * b; }
int Div(int a, int b) { return a / b; }

void ParseSources()
{
	char input[38] = "---H***E+++L+++L///O---P+++O/+-**O---";
	func Operatori[4] = {Sum, Dif, Mul, Div};
	int S=0, V;
	Content x;
	x.p1 = 0;
	x.p2 = 0;
	int idx;

	for (int i = 0; i < strlen(input); i++)
	{
		switch (input[i] - 42)
		{
			case INMULTIRE:
				idx = 2;
				x.p1 = 3;
				x.p2 = 3;
				break;
			case SUMA:
				idx = 0;
				x.p1 = 7;
				x.p2 = 5;
				break;
			case DIFERENTA:
				idx = 1;
				x.p1 = 10;
				x.p2 = 1;
				break;
			case IMPARTIRE:
				idx = 3;
				x.p1 = 8;
				x.p2 = 4;
				break;
		}

		S = S + Operatori[idx](x.p1, x.p2);
	}

	//S=337
	printf("S = %d\n", S);
}

// Week 1 - using C API 
//fopen, fscanf, fclose
void ReadTopScore()
{
    // open file "UserScores.txt"

    // read line by line: Name Points

    // print the name with biggest points

    // close file

	FILE* f;
	char name[200], name_max[200];
	int score, score_max;
	int i;
	f = fopen("UsersScores.txt", "r");
	fscanf(f, "%s", &name);
	fscanf(f, "%d", &score);
	for (i = 0; i < strlen(name); i++)
		name_max[i] = name[i];
	score_max = score;
	while (!feof(f))
	{
		if (score > score_max)
		{
			for (i = 0; i < strlen(name); i++)
				name_max[i] = ' ';
			score_max = score;
			for (i = 0; i < strlen(name); i++)
				name_max[i] = name[i];
		}
		fscanf(f, "%s", &name);
		fscanf(f, "%d", &score);
	}

	fclose(f);
	printf("%s", name_max);
	//cout << endl;
	printf("%d", score_max);
}