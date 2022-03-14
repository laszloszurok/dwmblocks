#define CMDLENGTH 60
#define DELIMITER "    "
#define CLICKABLE_BLOCKS
#define LEADING_DELIMITER

const Block blocks[] = {
    /* cmd, interval, signal */
	BLOCK("~/source/scripts/status/wifinetwork",    30, 1),
	BLOCK("~/source/scripts/status/mic",             0, 2),
	BLOCK("~/source/scripts/status/volume",          0, 3),
	BLOCK("~/source/scripts/status/battery",        45, 4),
	BLOCK("~/source/scripts/status/kblayout",        0, 5),
	BLOCK("~/source/scripts/status/clock",           5, 6),
};
