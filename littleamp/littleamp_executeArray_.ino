

const int walkBw[]  = {
4,0,0,0,0,
300,1500,1500,1500,1500,
300,1500,1450,1500,1500,
300,1500,1420,1500,1500,
300,1500,1400,1500,1500
};

const int walkFw[] = {
4,0,0,0,0,
300,1500,1500,1500,1500,
300,1500,1500,1450,1500,
300,1500,1500,1420,1500,
300,1500,1500,1400,1500
};

const int walkEnd[] = {
2,0,0,0,0,
300,1500,1450,1500,1150,
300,1500,1600,1500,1300};

//const int standSt[] = {
//1,0,0,0,0,
//300,1500,1300,1500,1300};

//const int walkBw[]  = {
//8,0,0,0,0,
//300,1500,1450,1500,1150,
//300,1350,1450,1350,1150,
//300,1350,1600,1350,1300,
//300,1350,1750,1350,1450,
//300,1500,1750,1500,1450,
//300,1650,1750,1650,1450,
//300,1650,1600,1650,1300,
//300,1650,1450,1650,1150};

const int turnLF[] = {
2,0,0,0,0,
500,1500,1450,1500,1300,
500,1500,1600,1500,1300};

const int turnRF[] = {
2,0,0,0,0,
500,1500,1600,1500,1450,
500,1500,1600,1500,1300};

const int turnL[] = {
6,0,0,0,0,
300,1500,1450,1500,1150,
300,1650,1450,1350,1150,
300,1650,1600,1350,1300,
300,1650,1750,1350,1450,
300,1500,1750,1500,1450,
300,1500,1600,1500,1300};

const int turnR[] = {
6,0,0,0,0,
300,1500,1750,1500,1450,
300,1650,1750,1350,1450,
300,1650,1600,1350,1300,
300,1650,1450,1350,1150,
300,1500,1450,1500,1150,
300,1500,1600,1500,1300};

const int shakeLL[] ={
12,0,0,0,0,
300,1500,1750,1500,1450,
100,1650,1750,1500,1450,
100,1500,1750,1500,1450,
100,1350,1750,1500,1450,
100,1500,1750,1500,1450,
100,1650,1750,1500,1450,
100,1500,1750,1500,1450,
100,1350,1750,1500,1450,
100,1500,1750,1500,1450,
100,1650,1750,1500,1450,
100,1500,1750,1500,1450,
300,1500,1600,1500,1300};

const int shakeRL[] ={
12,0,0,0,0,
300,1500,1450,1500,1150,
100,1500,1450,1350,1150,
100,1500,1450,1500,1150,
100,1500,1450,1650,1150,
100,1500,1450,1500,1150,
100,1500,1450,1350,1150,
100,1500,1450,1500,1150,
100,1500,1450,1650,1150,
100,1500,1450,1500,1150,
100,1500,1450,1350,1150,
100,1500,1450,1500,1150,
300,1500,1600,1500,1300};

const int onlyleg[] ={
19,0,0,0,0,
300,1500,1600,1500,1300,
500,1500,1900,1500,1000,
300,1500,1900,1500,1300,
300,1500,1900,1500,1600,
300,1500,1600,1500,1600,
150,1300,1600,1500,1600,
150,1300,1600,1500,1600,
150,1300,1600,1500,1600,
150,1300,1600,1500,1600,
1000,1500,1600,1500,1300,
500,1500,1900,1500,1000,
300,1500,1600,1500,1000,
300,1500,1300,1500,1000,
300,1500,1300,1500,1300,
150,1500,1300,1300,1300,
150,1500,1300,1700,1300,
150,1500,1300,1300,1300,
150,1500,1300,1700,1300,
1000,1500,1600,1500,1300};

const int shakeH[] ={
4,0,0,0,0,
150,1350,1600,1350,1300,
150,1500,1600,1500,1300,
150,1650,1600,1650,1300,
150,1500,1600,1500,1300};

const int shakeL[] ={
14,0,0,0,0,
300,1500,1450,1500,1150,
100,1500,1450,1350,1150,
100,1500,1450,1500,1150,
100,1500,1450,1650,1150,
100,1500,1450,1500,1150,
100,1500,1450,1350,1150,
100,1500,1450,1500,1150,
300,1500,1600,1500,1300,
300,1500,1750,1500,1450,
100,1650,1750,1500,1450,
100,1500,1750,1500,1450,
100,1350,1750,1500,1450,
100,1500,1750,1500,1450,
300,1500,1600,1500,1300};

const int taiSky[] ={
7,0,0,0,0,
100,1500,1600,1500,1300,
300,1500,1750,1500,1300,
100,1500,1850,1500,1300,
200,1500,1850,1500,1100,
100,1500,1750,1500,1000,
300,1500,1450,1500,1000,
500,1500,1600,1500,1400};

const int tapBw[] ={
4,0,0,0,0,
200,1600,1750,1400,1150,
200,1600,1600,1400,1300,
200,1500,1600,1500,1300,
500,1500,1600,1500,1300};

const int tapFeet[] ={
2,0,0,0,0,
500,1500,1450,1500,1450,
500,1500,1600,1500,1300};

const int upSleg[] ={
12,0,0,0,0,
500,1500,1950,1500,900,
150,1350,1950,1350,900,
150,1500,1950,1500,900,
150,1650,1950,1650,900,
150,1500,1950,1500,900,
150,1350,1950,1350,900,
150,1500,1950,1500,900,
150,1650,1950,1650,900,
150,1500,1950,1500,900,
150,1500,1950,1500,900,
500,1500,1600,1500,1300,
500,1500,1600,1500,1300};

const int wobble[] ={
4,0,0,0,0,
300,1500,1450,1500,1150,
300,1500,1600,1500,1300,
300,1500,1750,1500,1450,
300,1500,1600,1500,1300};

const int wobbleL[] ={
2,0,0,0,0,
300,1500,1450,1500,1150,
300,1500,1600,1500,1300};

const int wobbleR[] ={
2,0,0,0,0,
300,1500,1750,1500,1450,
300,1500,1600,1500,1300};

const int bothBo[] ={
10,0,0,0,0,
300,1500,1850,1500,1400,
500,1300,1850,1300,1400,
300,1300,1850,1300,1000,
300,1500,1850,1500,1000,
500,1700,1850,1700,1400,
500,1500,1450,1500,1400,
500,1500,1450,1500,1400,
300,1500,1750,1500,1400,
300,1300,1750,1700,1400,
300,1300,1450,1700,1400};

const int bounce[] ={
2,0,0,0,0,
500,1500,1900,1500,1000,
500,1500,1600,1500,1300};
const int tapLF[] ={
2,0,0,0,0,
500,1500,1450,1500,1300,
500,1500,1600,1500,1300};
const int tapRF[] ={
  2,0,0,0,0,
500,1500,1600,1500,1450,
500,1500,1600,1500,1300
};




