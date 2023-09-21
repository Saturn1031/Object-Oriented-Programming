#ifndef OVAL_H
#define OVAL_H

class Oval {
private:
	int width, height;
public:
	Oval(int w, int h);
	Oval();
	~Oval();
	int getWidth();
	int getHeight();
	void set(int w, int h);
	void show();
};

#endif
