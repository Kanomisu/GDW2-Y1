#pragma once

class levels
{
public:
	void level1();
	void fileRoute();
	void level2();
	void level3();
	//void updatelevelPriv();
	void control();

private:
	bool finishLevel1 = false;
	bool finishLevel2 = false;
	bool finishLevel3 = false;
};
