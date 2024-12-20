/*
 !*imap.h*!
*/ 
#ifndef IMAP_H
#define IMAP_H

struct IMap{
int __iMapNumber__;

bool Opened();
bool Closed();
bool Saved();

char * MAX_MAP_SIZE[2056];
const char * MapName(IMap);

std::size_t *MapSizeFull(IMap * map){
 if(MapSizeFull >= map->MAX_MAP_SIZE){
   std::cout << "Map Size Invalid\n";
 }
  return map->MAX_MAP_SIZE;
};

};


#endif
