# This is an example PKGBUILD file. Use this as a start to creating your own,
# and remove these comments. For more information, see 'man PKGBUILD'.
# NOTE: Please fill out the license field for your package! If it is unknown,
# then please put 'unknown'.

# See http://wiki.archlinux.org/index.php/VCS_PKGBUILD_Guidelines
# for more information on packaging from GIT sources.

# Maintainer: Your Name <youremail@domain.com>
pkgname=rdate
pkgver=0.1
pkgrel=1
pkgdesc="A small tool to show the date in an unusual format."
arch=('any')
url="https://github.com/rodarima/rdate"
license=('Public domain')
groups=()
depends=()
makedepends=('git')
provides=()
conflicts=()
replaces=()
backup=()
options=()
install=
source=("$pkgname-$pkgver::git+https://github.com/rodarima/rdate")
noextract=()
md5sums=('SKIP') #generate with 'makepkg -g'


build() {
  cd "$srcdir/$pkgname-$pkgver"
  make
}

package() {
  cd "$srcdir/$pkgname-$pkgver"
  mkdir -p "$pkgdir/usr/bin"
  install rdate "$pkgdir/usr/bin/rdate"

}

# vim:set ts=2 sw=2 et:
