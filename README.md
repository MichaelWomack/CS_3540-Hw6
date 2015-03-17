# CS_3540-Hw6
Systems Proramming w/ Linux and C

Does the UNIX System have a fundamental limitation on the depth of a directory tree?
To find out, write a program that creates a directory and then changes to that directory,
in a loop. Make certain that the length of the absolute pathname of the leaf of this
directory is greater than your system's PATH_MAX limit. Can you call getcwd to fetch the
directory's pathname? How do the standard UNIX System tools deal with this long
pathname? Can you archive the directory using either tar or cpio?
