# XML ID Checker
[![Build status](https://ci.appveyor.com/api/projects/status/82l3fe9x00imh2tm?svg=true)](https://ci.appveyor.com/project/Iswenzz/xml-id-checker-a4pii)
[![codecov](https://codecov.io/gh/Iswenzz/XML-ID-Checker/branch/master/graph/badge.svg)](https://codecov.io/gh/Iswenzz/XML-ID-Checker)
[![CodeFactor](https://www.codefactor.io/repository/github/iswenzz/xml-id-checker/badge)](https://www.codefactor.io/repository/github/iswenzz/xml-id-checker)
[![License: GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](https://www.gnu.org/licenses/gpl-3.0)

This application serves as a way to quickly check available values for both individual attributes and entire elements. This application provides both a graphical user interface and command line interface, usage information and further explanation of this piece of software can be found below.

## GUI

![GUI Preview](https://i.imgur.com/pXiWuyZ.png)

## Console Usage
```c
// XML ID Checker.exe <path> <method:name> <min range:max range>
XML ID Checker.exe "C:/file.xml" attr:npc_id 100:200
```
