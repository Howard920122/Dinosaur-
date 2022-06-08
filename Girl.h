#ifndef Girl_H
#define Girl_H
class Girl {
public:
	Girl();
	Girl(int);
	void setFelling(int);
	int getFelling();
	void add(int);
	void sub(int);
private:
	int felling;
};
#endif