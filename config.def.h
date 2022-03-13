/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static char font[] = "monospace:size=11";
static const char *fonts[] = {
	font,
	"monospace:size=10",
};


static char png_prompt[]      = "";      /* -p  option; prompt to the left of input field */
static char *prompt      = png_prompt;      /* -p  option; prompt to the left of input field */

static char normfgcolor[] = "#bbbbbb";
static char normbgcolor[] = "#222222";
static char selfgcolor[]  = "#eeeeee";
static char selbgcolor[]  = "#005577";
static char highlight[]  = "#ffc978";
static char *colors[SchemeLast][2] = {

	[SchemeNorm] = { normfgcolor, normbgcolor },
	[SchemeSel]  = { selfgcolor,  selbgcolor  },
	[SchemeSelHighlight] = { highlight, selbgcolor},
	[SchemeNormHighlight] = { highlight, normbgcolor},
	[SchemeOut]  = { "#000000",   "#00ffff" },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 20;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 5;
static int center = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 600;                    /* minimum width when centered */

/* -h option; minimum height of a menu line */
static unsigned int lineheight = 100;
static unsigned int min_lineheight = 10;

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "font",			 STRING, &font },
	{ "dmenu.topbar",     	 INTEGER, &topbar },
	{ "dmenu.center",     	 INTEGER, &center },
	{ "dmenu.min_width",  	 INTEGER, &min_width },
	{ "dmenu.lineheight",  	 INTEGER, &lineheight },
	{ "dmenu.lines",		 INTEGER, &lines },
	{ "dmenu.prompt",     	 STRING, &png_prompt },
	{ "dmenu.highlight",   	 STRING, &highlight },
	{ "dmenu.border_width",  INTEGER, &border_width },
	{ "dwm.normfgcolor",	 STRING, &normfgcolor },
	{ "dwm.normbgcolor",	 STRING, &normbgcolor },
	{ "dwm.selfgcolor", 	 STRING, &selfgcolor },
	{ "dwm.selbgcolor", 	 STRING, &selbgcolor },
};
