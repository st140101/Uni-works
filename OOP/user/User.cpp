#include "User.hpp"
#include <cstring>
#pragma warning(disable : 4996)

User::User() {
	username = new char[1];
	strcpy(username, "");
	
	email = new char[1];
	strcpy(email, "");
}

User::User(const char* email) {
	const int length = strlen(email);
	
	this->email = new char[length + 1];
	this->username = new char[length + 1];
	
	strcpy(this->email, email);
	strcpy(username, email);
}

User::User(const char* email, const char* username) {
	const int emailLen = strlen(email), usernameLen = strlen(username);
	
	this->email = new char[emailLen + 1];
	this->username = new char[usernameLen + 1];
	
	strcpy(this->email, email);
	strcpy(this->username, username);
}

User::User(const User& rhs) {
	email = new char[strlen(rhs.email) + 1];
	strcpy(email, rhs.email);

	username = new char[strlen(rhs.username) + 1];
	strcpy(username, rhs.username);
}

User::~User() {
	delete[] email;
	delete[] username;
}

const char* User::getUsername() const {
	return username;
}

const char* User::getEmail() const {
	return email;
}

void User::setUsername(const char* newUsername) {
	delete[] username;
	
	const int length = strlen(newUsername);
	username = new char[length +1];
	strcpy(username, newUsername);
}