/************************************/
/**     COLORSCHEME COMPONENTS      */
/************************************/
#define SIZE_STRING 8

typedef struct {
    char Background[SIZE_STRING];
    char Foreground[SIZE_STRING];
} PrimaryBlock;

typedef struct {
    char Text[SIZE_STRING];
    unsigned int Background;
    unsigned int ReversedBackground;
} CursorBlock;

typedef struct{
    char Black[SIZE_STRING];
    char Red[SIZE_STRING];
    char Green[SIZE_STRING];
    char Yellow[SIZE_STRING];
    char Blue[SIZE_STRING];
    char Magenta[SIZE_STRING];
    char Cyan[SIZE_STRING];
    char White[SIZE_STRING];
} ColorsBlock;

typedef struct {
    PrimaryBlock Primary;
    CursorBlock Cursor;
    ColorsBlock Normal;
    ColorsBlock Bright;
} ColorScheme;


/************************************/
/**         COLORSCHEMES            */
/************************************/
const ColorScheme DoomOne = {
    .Primary = {
        .Background = "#21242b",
        .Foreground = "#bbc2cf"
    },
    .Cursor = {
        .Text = "#000000",
        .Background= 33,
        .ReversedBackground = 33
    },
    .Normal = {
        .Black = "#21242b",
        .Red = "#ff6c6b",
        .Green = "#98be65",
        .Yellow = "#ECBE7B",
        .Blue = "#51afef",
        .Magenta = "#c678dd",
        .Cyan = "#46D9FF",
        .White = "#bbc2cf"
    },
    .Bright = {
        .Black = "gray50",
        .Red = "#ff6c6b",
        .Green = "#98be65",
        .Yellow = "#ECBE7B",
        .Blue = "#51afef",
        .Magenta = "#c678dd",
        .Cyan = "#46D9FF",
        .White = "#bbc2cf"
    }
};

const ColorScheme Ayu = {
    .Primary = {
        .Background = "#0A0B11",
        .Foreground = "#F3F3F6"
    },
    .Cursor = {
        .Text = "#0A0B11",
        .Background = 220,
        .ReversedBackground = 220
    },
    .Normal = {
        .Black = "#0A0B11",
        .Red = "#FF0000",
        .Green = "#00FF00",
        .Yellow = "#FFFF00",
        .Blue = "#36A3D9",
        .Magenta = "#FF00FF",
        .Cyan = "#00FFFF",
        .White = "#F3F3F6"
    },
    .Bright = {
        .Black = "gray50",
        .Red = "red",
        .Green = "green",
        .Yellow = "yellow",
        .Blue = "#36A3D9",
        .Magenta = "magenta",
        .Cyan = "cyan",
        .White = "white"
    }
};

const ColorScheme Gruvbox = {
    .Primary = {
        .Background = "#282828",
        /* .Foreground = "#a89984" */
        .Foreground = "#ebdbb2",
    },
    .Cursor = {
        .Text = "#0A0B11",
        /* .Background = 172, */
        /* .ReversedBackground = 172, */
        .Background = 214,
        .ReversedBackground = 214,
    },
    .Normal = {
        .Black = "#282828",
        .Red = "#cc241d",
        .Green = "#98971a",
        .Yellow = "#d79921",
        .Blue = "#458588",
        .Magenta = "#b16286",
        .Cyan = "#689d6a",
        .White = "#a89984"
    },
    .Bright = {
        .Black = "#928374",
        .Red = "#fb4934",
        .Green = "#b8bb26",
        .Yellow = "#fabd2f",
        .Blue = "#83a598",
        .Magenta = "#d3869b",
        .Cyan = "#8ec07c",
        .White = "#ebdbb2"
    }
};

const ColorScheme MatchaDark= {
    .Primary = {
        .Background = "#222b2e",
        .Foreground = "#bbc2cf"
    },
    .Cursor = {
        .Text = "#000000",
        .Background= 36,
        .ReversedBackground = 36
    },
    .Normal = {
        .Black = "#21242b",
        .Red = "#ff5f5f",
        /* .Green = "#98be65", */
        /* .Green = "#57a775", */
        .Green = "#78bb75",
        .Yellow = "#ECBE7B",
        .Blue = "#388ca1",
        .Magenta = "#af5fd7",
        .Cyan = "#00ffd7",
        .White = "#bbc2cf"
    },
    .Bright = {
        .Black = "gray50",
        .Red = "#ff5f5f",
        /* .Green = "#98be65", */
        /* .Green = "#57a775", */
        .Green = "#78bb75",
        .Yellow = "#ECBE7B",
        .Blue = "#388ca1",
        .Magenta = "#af5fd7",
        .Cyan = "#00ffd7",
        .White = "#bbc2cf"
    }
};

/* const ColorScheme MatchaDark = { */
/*     .Primary = { */
/*         .Background = "#222b2e", */
/*         /1* .Foreground = "#00ffaf", *1/ */
/*         /1* .Foreground = "#bbc2cf" *1/ */
/*         .Foreground = "#16a085", */
/*     }, */
/*     .Cursor = { */
/*         .Text = "#000000", */
/*         .Background= 36, */
/*         .ReversedBackground = 36 */
/*     }, */
/*     .Normal = { */
/*         .Black = "#1b2224", */
/*         .Red = "#ff5f5f", */
/*         .Green = "#16a085", */
/*         .Yellow = "#ECBE7B", */
/*         /1* .Blue = "#00afaf", *1/ */
/*         .Blue = "#51efdd", */
/*         .Magenta = "#af5fd7", */
/*         .Cyan = "#00ffd7", */
/*         .White = "#F3F3F6" */
/*     }, */
/*     .Bright = { */
/*         .Black = "gray50", */
/*         .Red = "#ff5f5f", */
/*         .Green = "#16a085", */
/*         .Yellow = "#ECBE7B", */
/*         /1* .Blue = "#00afaf", *1/ */
/*         .Blue = "#51efdd", */
/*         .Magenta = "#af5fd7", */
/*         .Cyan = "#00ffd7", */
/*         .White = "#F3F3F6" */
/*     } */
/* }; */


const ColorScheme Dracula = {
    .Primary = {
        .Background = "#282a36",
        .Foreground = "#f8f8f2",
    },
    .Cursor = {
        .Text = "#000000",
        .Background = 170,
        .ReversedBackground = 170,
    },
    .Normal = {
        .Black = "#000000",
        .Red = "#ff5555",
        .Green = "#50fa7b",
        .Yellow = "#f1fa8c",
        .Blue = "#bd93f9",
        .Magenta = "#ff79c6",
        .Cyan = "#8be9fd",
        .White = "#bbbbbb"
    },
    .Bright = {
        .Black = "#44475a",
        .Red = "#ff5555",
        .Green = "#50fa7b",
        .Yellow = "#f1fa8c",
        .Blue = "#bd93f9",
        .Magenta = "#ff79c6",
        .Cyan = "#8be9fd",
        .White = "#ffffff"
    }
};

const ColorScheme VSCode = {
    .Primary = {
        .Background = "#1e1e1e",
        .Foreground = "#e5e5e5",
    },
    .Cursor = {
        .Text = "#000000",
        .Background = 36,
        .ReversedBackground = 36,
    },
    .Normal = {
        .Black = "#000000",
        .Red = "#cd3131",
        .Green = "#0dbc79",
        .Yellow = "#e5e510",
        .Blue = "#2472c8",
        .Magenta = "#bc3fbc",
        .Cyan = "#11a8cd",
        .White = "#e5e5e5"
    },
    .Bright = {
        .Black = "#666666",
        .Red = "#f14c4c",
        .Green = "#23d18b",
        .Yellow = "#f5f543",
        .Blue = "#3b8eea",
        .Magenta = "#d670d6",
        .Cyan = "#29b8db",
        .White = "#e5e5e5"
    }
};
/************************************/
/**      CURRENT COLORSCHEME        */
/************************************/
const ColorScheme CurrentColorScheme = DoomOne;

// Cursor colors: https://www.ditig.com/256-colors-cheat-sheet
