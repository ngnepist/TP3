#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <cstdlib>
#include "vibes.h"
#include "Path.h"
#include "Cell.h"

#define protected public

using namespace std;

struct Maze
{
	Cell *c0, *cf;
};

TEST_CASE("Labyrinthe")
{
	SECTION("Ajout de cellule")
	{
    	Maze maze = create_8x8_maze();
    	for(int i = 0 ; i < 8 ; i++)
    	{
    		for(int j = 0 ; j < 8 ; j++)
    		{
    			CHECK(a[i][j].m_x == i);
    			CHECK(a[i][j].m_y == j);
    		}
    	}
    }
}


    	