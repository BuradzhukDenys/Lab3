#include <iostream>
#include <string>

using namespace std;

void replaceIntToLong(string& text)
{
	for (int i = 0; i < text.size(); i++)
	{
		if (i + 3 < text.size() && text[i] == 'i' && text[i + 1] == 'n' && text[i + 2] == 't' && text[i + 3] == ' ')
		{
			text[i] = 'l';
			text[i + 1] = 'o';
			text[i + 2] = 'n';
			text[i + 3] = 'g';
			text.insert(i + 4, " ");
			i += 4;
		}
		else if (text[i] == 'i' && text[i + 1] == 'n' && text[i + 2] == 't' && i + 3 == text.length())
		{
			text.resize(text.size() + 1);
			text[i] = 'l';
			text[i + 1] = 'o';
			text[i + 2] = 'n';
			text[i + 3] = 'g';
			i += 3;
		}
	}
}

int main()
{
	string Ctext;
	getline(cin, Ctext);

	cout << Ctext << endl;
	replaceIntToLong(Ctext);

	cout << Ctext << endl;
}