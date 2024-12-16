/*
<*GlobalModule.hpp*>
*/
#ifndef GLOBALMODULE_HPP
#define GLOBALMODULE_HPP

class GlobalModule{
public:

 GlobalModule();
 virtual ~GlobalModule();

int g_mModuleModeId;
typedef class<GlobalModule> globalModule;
typedef void AppModule;

bool g_mReset();
bool g_mActive();

   std::string g_mModuleName();
   std::size_t g_mIdSize() = 0;
   std::sharedptr<GlobalModule>g_mModule;

AppModule ResetModule(GlobalModule& modulepreference){
  GlobalModule * global;
   if(modulepreference.g_mReset(modulepreference)){
    global->g_mModuleModeId = 0;
    modulepreference.g_mIdSize = NULL;
   } 
};

AppModule ActiveModule(GlobalModule& gmm, GlobalModule * m){
 if(gmm.g_mActive(gmm) == true){
  m->g_mModuleId = 1;
  gmm.g_mIdSize(gmm) = 1;
 }
};




};

#endif
