#pragma once
#include <string>
#include <vector>
#include "SportsStatsConstants.h"
#include "Player.h"
class ActivePlayer : public Player
{
	const TeamType _team;
	const int _batting_position;
	const int _field_position;
public:
	//Constructor based on values
	ActivePlayer(
		std::string id_,
		std::string name_,
		int team_, 
		int batting_position_, 
		int field_position_) : Player(id_, name_), 
		_team((TeamType) team_) ,
		_batting_position(batting_position_) ,
        _field_position(field_position_) {}
	
	//Constructor based on starter or sub line parsed
	ActivePlayer(std::vector<std::string> line_parsed) : Player(line_parsed[1], line_parsed[2]),
		_team((TeamType) stoi(line_parsed[3])),
		_batting_position(std::stoi(line_parsed[4])), 
		_field_position(std::stoi(line_parsed[5])) { }
};

