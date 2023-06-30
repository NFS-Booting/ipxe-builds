# packages for custom iPXE

This repo contains CI configuration to download, build and compile
[ipxe](https://github.com/ipxe/ipxe.git) with a bit of customization.

## Making a new release

If there is a new upstream release or you want to change the commit version,
update the variables `IPXE_VERSION` and `IPXE_COMMIT` and set `PACKAGE_VERSION`
to `1` in `.github/workflows/build-and-package.yml`.
If you just change the commit, increase `PACKAGE_VERSION` by 1.

If you change something in the build process or similar, just bump `PACKAGE_VERSION`.

After you push the changes and the build process runs through, you can then test
the changes by downloading the artifacts from the workflow run.

## Secureboot SBAT

If there is ever a secureboot vulnerability on our side, not caused by iPXE
directly, or another security problem why we want older builds to not be usable
anymore, invalidate the current SBAT generation using `dbx` and increment
`PRODUCT_SBAT_GENERATION` inside `src/branding.h`
