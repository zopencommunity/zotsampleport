# zotsampleport
z/OS Open Tools Sample Port for education
 
This repository provides a concrete example of porting repository packaged in
the ZOSOpenTools set of porting repositories.

If you want to add a new Open-Source tool to the ZOSOpenTools set of repositories,
this is a great place to start. We recommend you begin by 'taking the defaults'
as much as possible. This will make it easier for others to understand as they 
begin to work on the port as well. 

To get started with the ZOSOpenTools initiative in general, 
read [ZOSOpenTools docs](https://zosopentools.github.io/meta)

# modifying zotsampleport

Note that if you make a change to port, you _must_ ensure it does not break _metaport_
which uses zotsampleport as part of it's 'zopen build' testing.
To do so:
- push your code into a zotsampleport BRANCH on github.com
- `git clone git@github.com:ZOSOpenTools/zotsampleport.git`
- `cd metaport`
- `export ZOPEN_ZOT_SAMPLEPORT_BRANCH=<your branch>`
- `zopen build`
- Validate that the `zopen_check_build` step still works and that your branch was used
