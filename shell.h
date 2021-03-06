/* Copyright (C) 2010 by Diego Candido < diego.luca.candido@gmail.com >

  This file is part of Shell-arduino

  Shell-Arduino is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.
  
  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
  
  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
  

 */

#ifndef SHELL_HPP
#define SHELL_HPP
#include <string.h>
#include <WProgram.h> 




class ArduinoShell {
  struct cmd{ 
  char* com;
    void (*cmd)(int,int,int) ;
};
  int bauds;
  cmd commands[7];
 public:
  ArduinoShell(int);
  
  int getChoice();
 private:
  int dispatch(char[]);
  
};
#endif
