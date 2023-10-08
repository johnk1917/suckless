//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "bar-ram",	1,		0},
	{"", "bar-cpu",	1,		0},
	{"", "bar-volume",	1,		0},
	{"", "bar-brightness",	1,		0},
	{"", "bar-battery",	1,		0},
	{"", "bar-time",	1,		0},
	{"", "bar-wlan",	1,		0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
