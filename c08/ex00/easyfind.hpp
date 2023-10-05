#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

template <typename C>
typename C::iterator easyfind(C haystack, int needle)
{
	return (find(haystack.begin(),haystack.end(), needle));
}

#endif
