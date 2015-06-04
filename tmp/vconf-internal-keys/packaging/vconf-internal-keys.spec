Name:       vconf-internal-keys
Summary:    Internal shared keys for vconf
Version:    0.0.24
Release:    0
Group:      Development/Headers
License:    Apache License, Version 2.0
Source0:    %{name}-%{version}.tar.gz
BuildRequires:  cmake

%description
configuration internal shared keys

%package devel
Summary:    vconf internal keys (devel)
Group:      Development/Headers

%description devel
Vconf internal key header files (devel)

%prep
%setup -q -n %{name}-%{version}

%build
cmake . -DCMAKE_INSTALL_PREFIX=%{_prefix}

make %{?jobs:-j%jobs}

%install
rm -rf %{buildroot}
%make_install

%post

%postun

%files devel
%defattr(-,root,root,-)
%{_includedir}/vconf/*
%{_libdir}/pkgconfig/*.pc

