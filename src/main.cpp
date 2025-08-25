#include <iostream>
#include <string>
#include "../lib/simdjson/simdjson.h"
using namespace simdjson;
int main(void) {
    ondemand::parser parser;
    padded_string json = padded_string::load("./data/sample.json");
    ondemand::document document = parser.iterate(json);
    ondemand::array countries = document["countries"];
    ondemand::array countries_array = countries;

    for (ondemand::value country : countries_array) {
        std::cout << "Country: " << country["name"].get_string() << std::endl;
    }

    
    
}
