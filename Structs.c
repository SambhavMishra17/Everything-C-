// Structs are used to combine data field about something under one umbrella. 
/* Defining a struct 
Struct City {
    char *name;
    double lat;
    double lon; 
}; 
*/

/* Initializing a struct 
Struct City a { 
.name = "Delhi",
.lat = 69,
.lon = 420, 
}; 
*/

/* accessing data in a struct 
Struct City a {
pritf(" name of city is : %s" \n , a.name);
printf("lat of the city is : %d" \n , a.lat); 
}; 
*/

/*
Using typedef in structs 

struct car {      // struct car -> old type
char engine [50]; 
char fuel_type[10];
int fuel_tank_cap; 
int seating_cap; 
float city_mileage; 
}; 
int main(){
struct car c1;      // struct car -> old type 
}

- - - - - - - - - - 

typedef struct car {   // struct car -> old type
char engine [50]; 
char fuel_type[10];
int fuel_tank_cap; 
int seating_cap; 
float city_mileage;
} car ;                // car -> new type 

int main(){
car c1; }           // car -> new data type
*/

/* using sizeof operator to get memory of a struct 
struct MyStruct {
    int a;     // 4 bytes
    char b;    // 1 byte
    double c;  // 8 bytes
};
int main() {
    printf("Size of MyStruct: %zu\n", sizeof(struct MyStruct));
    return 0;
}
*/

/* Struct padding : C compiler will store data in chunks of 8 bytes 
 to keep it uniform for fast access. so int will only use 4, rest will
 be part of padding. same for char, it will have 7 bytes for padding
order should be from small to big char -> int -> double to min. padding
 */