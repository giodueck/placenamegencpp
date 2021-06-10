#ifndef PLACENAMEGENERATOR_H
#define PLACENAMEGENERATOR_H

#include <string>

#define FIRSTCOUNT 54
#define DOUBLESCOUNT 38
#define POSTDOUBLESCOUNT 3
#define MIDCOUNT 14
#define LASTCOUNT 52

const std::string first[] = {"Chelm", "Elm", "El", "Bur", "En", "Eg", "Pem", "Pen", "Edg", "Sud", "Sod", "Hors", "Dur", "Sun", "Nort", "Brad", "Farn", "Barn", "Dart", "Hart", "South", "Shaft", "Blan", "Rock", "Alf", "Wy", "Marl", "Staf", "Wet", "Cas", "Stain", "Whit", "Stap", "Brom", "Wych", "Watch", "Win", "Horn", "Mel", "Cook", "Hurst", "Ald", "Shriv", "Kings", "Clere", "Maiden", "Leather", "Brack","Brain", "Walt", "Prest", "Wen", "Flit", "Ash"};
const std::string doubles[] = {"Bass", "Chipp", "Sodd", "Sudd", "Ell", "Burr", "Egg", "Emm", "Hamm", "Hann", "Cann", "Camm", "Camb", "Sund", "Pend", "End", "Warr", "Worr", "Hamp", "Roth", "Both", "Sir", "Cir", "Redd", "Wolv", "Mill", "Kett", "Ribb", "Dribb", "Fald", "Skell", "Chedd", "Chill", "Tipp", "Full", "Todd", "Abb", "Booth"};
const std::string postdoubles[] = {"ing", "en", "er"};
const std::string mid[] = {"bas", "ber", "stan", "ring", "den", "-under-", " on ", "en", "re", "rens", "comp", "mer", "sey", "mans"};
const std::string last[] = {"ford", "stoke", "ley", "ney",  "don", "den", "ton", "bury", "well", "beck", "ham", "borough", "side", "wick", "hampton", "wich", "cester", "chester", "ling", "moor", "wood", "brook", "port", "wold", "mere", "castle", "hall", "bridge", "combe", "smith", "field", "ditch", "wang", "over", "worth", "by", "brough", "low", "grove", "avon", "sted", "bourne", "borne", "thorne", "lake", "shot", "bage", "head", "ey", "nell", "tree", "down"};

std::string getPlaceName();

#endif // PLACENAMEGENERATOR_H