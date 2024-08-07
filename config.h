/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;	   /* -b  option; if 0, dmenu appears at bottom     */
static int draw_input = 1; /* -noi option; if 0, the input will not be drawn by default */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"HackNerdFont:size=18"};
static const unsigned int bgalpha = 0xe0;
static const unsigned int fgalpha = OPAQUE;
static const char *prompt = NULL; /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = {"#bbbbbb", "#222222"},
	[SchemeSel] = {"#eeeeee", "#005577"},
	[SchemeOut] = {"#000000", "#00ffff"},
};
static const unsigned int alphas[SchemeLast][2] = {
	/*		fgalpha		bgalphga	*/
	[SchemeNorm] = {fgalpha, bgalpha},
	[SchemeSel] = {fgalpha, bgalpha},
	[SchemeOut] = {fgalpha, bgalpha},
};

/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines = 10;
static unsigned int columns = 1;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the border */
static const unsigned int border_width = 0;
