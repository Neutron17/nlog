# NLog
Asynchronous logger for c

## Usage

```c
#include <nlog/log.h>

int main() {
	loginit(
		// what to print to stdout, L_WARN would only print warnings and errors
		// there are: L_ALL, L_INFO, L_WARN, L_ERR and L_NONE
		L_ALL,
		// what to print to the logfile
		// in this case don't print anything to the file
		L_NONE
	);
	LOG(L_INFO, "program started");
	int x = 69;
	// printf like syntax
	LOGF(L_WARN, "x is %d", x);

	logdestroy();
	return 0;
}
```
compile with ```-lnlog```

## Installation

```
sudo make install
```

## Contribution

anyone can create pull requests, fork the project, etc as long as it doesn't violate the
license (GNU GPL 3.0)

### Old version

the old version is [clogger](https://github.com/Neutron17/clogger)
it was archived because I stoped it's development and moved onto this

It allowed multiple loggers at the same time, if you want that you can check it out
but it lacks a lot of features

