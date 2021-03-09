#pragma once

class User {
private:
	char* username;
	char* email;
public:
	User();
	User(const char*);
	User(const char*, const char*);
	User(const User&); // for copying
	~User();

	const char* getUsername() const;
	const char* getEmail() const;
	void setUsername(const char*);
};