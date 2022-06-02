@echo off

:: ----------------------------------------------------------------------------
:: INITIALIZE MSVC ENV
:: ----------------------------------------------------------------------------
:CHECK_MSVC

if not defined INCLUDE goto :MSVC_INIT
goto :START

:MSVC_INIT
echo Not running on MSVC prompt, searching for one...

:: Find vswhere
if exist "%ProgramFiles(x86)%\Microsoft Visual Studio\Installer\vswhere.exe" (
	set VSWHERE_PATH="%ProgramFiles(x86)%\Microsoft Visual Studio\Installer\vswhere.exe"
) else ( if exist "%ProgramFiles%\Microsoft Visual Studio\Installer\vswhere.exe" (
	set VSWHERE_PATH="%ProgramFiles%\Microsoft Visual Studio\Installer\vswhere.exe"
) else (
	echo Can't find vswhere.exe
	goto :NO_VS_PROMPT
))

:: Get the VC installation path
%VSWHERE_PATH% -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 -latest -property installationPath > _path_temp.txt
set /p VSWHERE_PATH= < _path_temp.txt
del _path_temp.txt
if not exist "%VSWHERE_PATH%" (
	echo Error: can't find VisualStudio installation directory
	goto :NO_VS_PROMPT
)

echo Found at - %VSWHERE_PATH%

:: Initialize VC for X86_64
call "%VSWHERE_PATH%\VC\Auxiliary\Build\vcvars64.bat"
if errorlevel 1 goto :NO_VS_PROMPT
echo Initialized MSVC x86_64
goto :START

:NO_VS_PROMPT
echo You must open a "Visual Studio .NET Command Prompt" to run this script
goto :END


:: ----------------------------------------------------------------------------
:: START COMPILATION
:: ----------------------------------------------------------------------------
:START

if not exist bin/ (
  mkdir bin
)

cl /LD /MD /DEBUG:FULL /Febin/raylib.dll ^
   src/bindings.c src/manual.c ^
   thirdparty/pocketlang-0.1.0/pknative.c ^
   /Ithirdparty/pocketlang-0.1.0/ ^
   /Ithirdparty/raylib-4.0.0/include/ ^
   thirdparty/raylib-4.0.0/lib/raylib_win64_msvc16.lib ^
   Winmm.lib user32.lib gdi32.lib shell32.lib

rm *.obj
rm bin/*.exp
rm bin/*.lib

:END

