//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "bar-ram",	3,		0},
	{"", "bar-cpu",	3,		0},
	{"", "bar-volume",	1,		0},
	{"", "bar-brightness",	1,		0},
	{"", "bar-battery",	10,		0},
	{"", "bar-date",	10,		0},
	{"", "bar-time",	10,		0},
	{"", "bar-wlan",	1,		0},
  };

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
