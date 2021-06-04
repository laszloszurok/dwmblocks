//Modify this file to change what commands output to your statusbar, and recompile using the make command.
// │
static const Block blocks[] = {
	/*Icon*/	/*Command*/		        /*Update Interval*/	   /*Update Signal*/
    { "  ",      "~/source/scripts/status/wifinetwork",         0,    15 },
    { "   ",     "~/source/scripts/status/mic",                 0,    12 },
    { "   ",     "~/source/scripts/status/volume",              0,    10 },
    { "   ",     "~/source/scripts/status/battery",            10,    17 },
    { "   ",     "~/source/scripts/status/run_menu",            0,    11 },
    { "   ",     "~/source/scripts/status/kblayout",            0,    14 },
    { "   ",     "~/source/scripts/status/clock",               5,    13 },
    { "  ",      "~/source/scripts/status/power_menu",          0,    16 },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
