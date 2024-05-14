/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:45:41 by nettalha          #+#    #+#             */
/*   Updated: 2023/11/26 12:14:38 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// int main(void)
// {
//     std::cout << "tests for float" << std::endl;
//     float arr[] = {12.123, 1.15, 45.42, 6.01, 12.0f};
//     ::iter<float>(arr, 5, ::displayElement);

//     std::cout << "tests for string" << std::endl;
//     std::string str = "1337Futureisloading!";
// 	iter<const char>(str.c_str(), str.length(), ::displayElement);
//     return 0;
// }


// class Awsome{

// public:
//     Awsome(void): _n(42) {return;}
//     int get(void)const {return this->_n;}
// private:
//     int _n;
// };

// std::ostream &operator<<(std::ostream &o, Awsome const &rhs) {o<<rhs.get(); return o;}

// template <typename T>
// void print(T const &x){std::cout << x << std::endl; return;}

// int main(){
//     int tab[] = {0,1,2,3,4};
//     Awsome tab2[5];

//     iter(tab, 5, print);
//     iter(tab2, 5, print);
// }


class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print(const T &x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
  Awesome tab2[5];

  iter( tab, 5, print<const int> );
  iter( tab2, 5, print<Awesome> );

  return 0;
}