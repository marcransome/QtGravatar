# QtGravatar

## Overview
**QtGravatar** is a simple [Qt](http://qt.nokia.com/products/)-based example command-line tool for generating [Gravatar](http://www.gravatar.com) URLs from email addresses.

It uses the [official method](http://en.gravatar.com/site/implement/hash/) of creating a valid hash by trimming leading and trailing whitespace characters, forcing all characters to lowercase, creating an [MD5](http://en.wikipedia.org/wiki/MD5) hash from the resulting string and appending this to the Gravatar top-level domain name.

### Installation
QtGravatar can be built using the [Qt SDK](http://qt.nokia.com/products/qt-sdk).  A project file (QtGravatar.pro) is provided for convenience.

Once compiled, the program can be executed directly from the command-line (with suitable execute permissions) using `./QtGravatar <email address>` from the build directory (replacing _\<email address\>_ with a valid email address), or the executable can be added to your $PATH environment variable and executed using `QtGravatar <email address>`.

### Usage
A single command-line argument is required comprising a valid email address.

Basic usage example:  

	[host:~]% QtGravatar doesnotexist@nowhere.com
	
Would generate the following output:

	Profile URL: http://www.gravatar.com/ec19c19358811b5c1dd800990a514187
	Avatar URL: http://www.gravatar.com/avatar/ec19c19358811b5c1dd800990a514187

### License
QtGravatar is licensed under the [GNU General Public License v3.0](http://www.gnu.org/licenses/gpl.html).

### Comments or suggestions?
Feel free to contact me with bug reports, feature requests and general comments by emailing [marc.ransome@fidgetbox.co.uk](mailto:marc.ransome@fidgetbox.co.uk).
