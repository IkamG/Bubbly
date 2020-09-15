#include <Bubbly.h>

class Snappy : public bbly::Appl {
public:
	Snappy() {

	}
	~Snappy() {

	}


};

void main() {
	Snappy* snap = new Snappy();
	snap->run();
	delete snap;
}