/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
static const unsigned int alpha = 0xf0;
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Firacode nerd font mono:pixelsize=15.1"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	            /*     fg         bg       */
	[SchemeNorm] = { "#ffffff", "#222222" },
	[SchemeSel]  = { "#eeeeee", "#ba157a" },
	[SchemeOut]  = { "#000000", "#ba157a" },
};

static const unsigned int alphas[SchemeLast][2] = {
	               /*  fg      bg       */
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel]  = { OPAQUE, OPAQUE },
	[SchemeOut]  = { OPAQUE, OPAQUE },
};

/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 1;
static unsigned int columns    = 1;

/* -h option; minimum height of a menu line */
static unsigned int lineheight = 21;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;
