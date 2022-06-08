#include"Girl.h"
Girl::Girl() {
	felling = 0;
}
Girl::Girl(int newFelling) {
	felling = newFelling;
}
void Girl::setFelling(int newFelling) {
	felling = newFelling;
}
int Girl::getFelling() {
	return felling;
}
void Girl::add(int a) {
	felling += a;
}
void Girl::sub(int b) {
	felling -= b;
}