/*
!*gamepath.h*!
*/
#ifndef GAMEPATH_H
#define GAMEPATH_H

struct g_bGamePath{
//stuff
char cpath[0, 'n', "path\n"];
#define g_bDividePath(c, p) ( c[0] / p[0] )
bool Flush(g_bGamePath * c_pathGame);
/*---PathSize---*/
std::size_t * PathSize(g_bGamePath * path){
  PathSize >= path->cpath;
   return path->MAX_PATH_SIZE;
};
/*---MaxPathSize---*/
usigned long char * MAX_PATH_SIZE[2056];

void * getPath(g_bGamePath * path, const char * g_bGamePathDirectory);

};

#endif
