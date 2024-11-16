#ifndef MAZE_H
#define MAZE_H

using namespace std;

class Maze{
  public:
    Maze();
    void printMaze() const;
    bool validMoveLocation() const;
    
  private:
    vector<vector<int>> mazeMap;
    vector<vector<int>> valueMap;
    void generateMaze();
    bool thereIsExit() const;
};

#endif
