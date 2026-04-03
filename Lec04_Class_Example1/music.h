#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//music class
class music {
private:
	string title;
	string artist;
	string album;
	int year;
public:
	//생성자
	music(string title, string artist, string album, int year) {
		this->title = title;
		this->artist = artist;
		this->album = album;
		this->year = year;

	}
	//getters
	string getTitle() { return title; }
	string getArtist() { return artist; }
	string getAlbum() { return album; }
	int getYear() { return year; }
};

//musicService Class
class MusicStreamingService {
private:
	string serviceName;
	vector<music> musicList;
public:
	MusicStreamingService(string serviceName) {
		this->serviceName = serviceName;
	}
	//Music 객체를 service에 추가 기능
	void addMusic(string title, string artist, string album, int year) {
		music newMusic(title, artist, album, year);
		musicList.push_back(newMusic);
		cout << title << " by " << artist << " added to " << serviceName << endl;

	}
	//Title로 검색
	music* searchByTitle(string title) {
		for (int i = 0; i < musicList.size(); i++) {
			if (musicList[i].getTitle() == title)
				return &musicList[i];
		}
		return NULL;
	}
};