//
//  setImpl.h
//  SkipList
//
//  Jean Goulet 2017
//
//  Devoir fait par
//     Coéquipier 1 :
//     Coéquipier 2 :
//

/////////////////////////////////////////////////////////////////
// copieur et destructeur de liste

template <typename TYPE>
ensemble<TYPE>::ensemble(const ensemble<TYPE>& src)
    : ensemble()
{
    // compl?ter
    for (iterator it =src.begin() ; it != src.end(); ++it ) {
        insert(*(it.m_pointeur->m_contenu));
    }
}

template <typename TYPE>
ensemble<TYPE>::~ensemble()
{
    // compl?ter
}

/////////////////////////////////////////////////////////////////
// find
// localise un ?l?ment, retourne la fin si absent

template <typename TYPE>
typename ensemble<TYPE>::iterator ensemble<TYPE>::find(const TYPE& x) const
{
    // compl?ter
}

// lower_bound
// localise la premiere position ou l'element n'est
// pas plus petit que celui recu en parametre

template <typename TYPE>
typename ensemble<TYPE>::iterator ensemble<TYPE>::lower_bound(const TYPE& t) const
{
    // compl?ter

    cellule *c = m_avant;
    cellule *apres = m_avant->m_prec[0];
    while(c->m_suiv[0] != apres)
        if(*c->m_suiv[0]->m_contenu < t)
            c = c->m_suiv[0];
        else
            break;
    return iterator(c->m_suiv[0]);
}

template <typename TYPE>
typename ensemble<TYPE>::iterator ensemble<TYPE>::upper_bound(const TYPE& x) const
{
}

/////////////////////////////////////////////////////////////////
// erase(VAL)
// elimine VAL de l'ensemble, si present

template <typename TYPE>
size_t ensemble<TYPE>::erase(const TYPE& VAL)
{
    // compl?ter
}

// erase(it)
// elimine de l'ensemble l'element en position it

template <typename TYPE>
typename ensemble<TYPE>::iterator ensemble<TYPE>::erase(iterator it)
{
    // compl?ter
}