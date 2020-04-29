#ifndef TOKEN_H
#define TOKEN_H

struct Token
{
  bool _isValueToken;
  char  _opSymbol;
  float _value;
  Token( char c ) : _isValueToken(false), _opSymbol(c), _value(0) {}
  Token( float value ) :_isValueToken(true), _opSymbol(0), _value(value) {}
  Token() {}
};



#endif // TOKEN_H
