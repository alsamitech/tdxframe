# Alsami Technologies Foundation
## ALS.TDX Framework Rewrite

**I think we all know what happend:**
	als.tdx was originally meant to be a framework that would make the development of C++ Applications Easy and Save Development time.
	*However, that's not how it went down*
	I, and the other contributors lost focus and started adding bloated and uncecessary features, and did not use C features like pointers.

**So I decided to rewrite this framework**
	The new als.tdx will have a few features that would make als.tdx a usable framework and a powerful one at that.
	What we should focus on:
* Adding networking support and abstracting away the C socket interface.
* Decoupling the framework form the library and making it it's own process. There will be an app-side library for communicating with the daemon.
* We have given up on support for any non-POSIX complaint proprietary Operating System. They won't give us free and open-source software, so we won't support thier platform with it.	
* This framework will also abstract thread handling.
