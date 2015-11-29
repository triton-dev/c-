#include <iostream>
#include <string>

using namespace std;

struct node {
	node *next;
	int x;
};

int main() {

	node *root;
	node *conductor;

	root = new node;
	root->next = 0;
	root->x = 12;
	conductor = root;
	if(conductor != 0) {
		cout << conductor << "\t";
		cout << conductor->x << endl;
		conductor = conductor->next;
	}


// main vége
	return 0;
}
