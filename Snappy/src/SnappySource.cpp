#include <Bubbly.h>

class Snappy : public bbly::Appl {
public:
	Snappy() {

	}
	~Snappy() {

	}


};

bbly::Appl* bbly::CreateApplication() {
	return new Snappy();
}