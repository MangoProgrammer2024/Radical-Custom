/*
 !*---m_bcaulk.h---*!
*/
#ifndef MBCAULK_H
#define MBCAULK_H

class m_bCaulk{
public:

 m_bCaulk& m_bCaulk();
 /*!*caulk shader stuff*!*/
 char c[0,'/n','path/n'];
 const char * const m_bCaulkName("Caulk.png") = '/n';
 typedef class<m_bCaulk>&caulk; 
 const int m_bCaulkId;

 void * getCaulk(m_bCaulk * caulk, const int m_bId, const char * const m_bName);

};


#endif
