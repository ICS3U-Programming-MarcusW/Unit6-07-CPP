// Copyright (c) 2022 Marcus Wehbi All rights reserved.
//
// Created by: Marcus Wehbi
// Created on: December 20 2022
// This program gets a string form the user and then displays
// each word in the string

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

// This function splits the original string into substrings
std::vector<std::string> string_parser(std::string string) {
    // Create a vector to store the list of words
    std::vector<std::string> list_of_words;

    // Create a stringstream object to treat the input string as a stream
    std::stringstream ss(string);

    // Declare a string to store each extracted word
    std::string word;

    // Extract words from the stringstream until it is empty
    while (std::getline(ss, word, ' ')) {
        // Add the extracted word to the list of words
        list_of_words.push_back(word);
    }

    // Return the list of words
    return list_of_words;
}

int main() {
    // Explain the programs purpose
    std::cout << "This program will take in a sentence as input and display";
    std::cout << "each word separately on a new line, without spaces."
    << std::endl;

    // Get a string form the user
    std::string user_string;
    std::cout << "Enter a string: ";
    std::getline(std::cin, user_string);

    // Call a function to split the string
    std::vector<std::string> user_words_list = string_parser(user_string);

    // Display the words in the string separately by going through the list
    std::cout << "\nThe words in your sentence: " << std::endl;
    for (std::string word : user_words_list) {
        std::cout << word << std::endl;
    }
}
