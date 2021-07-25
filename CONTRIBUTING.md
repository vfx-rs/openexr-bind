Overview
========

Hello, and welcome to the openexr-bind project. We are happy that you are
interested in participating in the project, and we hope that we can get you up
and running quickly.

Also, this is a project from the Academy Software Foundation (ASWF) Rust Working
Group. The project is designed to have its ownership transferred to the OpenEXR
project once it has reached a mature stage. As such, the contribution
requirements may become more strict in the future (including code sign off,
filling out CLAs, etc).

Goals
-----

The goal for the openexr-bind project is as follows:

1. To create an example project for other Rust bindings of VFX libraries that
   (hopefully) showcases how to successfully create bindings for a VFX library.
2. To create an example of the best of what Rust can offer to the VFX industry.
3. To create a solid and the de-facto Rust bindings for OpenEXR.

Communication
=============

The main ways to communicate with the openexr-binding project are as follow:

- [ASWF Slack](https://slack.aswf.io/) under the `#rust` channel.
- [Rust Working Group mailing list](wg-rust@lists.aswf.io)
- [GitHub issues](https://github.com/vfx-rs/openexr-bind/issues)

The ASWF Slack channel is not archived, so any important conversations may be
lost. It is recommended to move them to the mailing list, or to create an issue
in GitHub.

Help Request
------------

If you are having issues with building or using the project, it is recommended
to use the [mailing list](wg-rust@lists.aswf.io) to ask. The Slack channel can
also work, but the communication can easily be lost due to the nature of real
time chats.

How to Report a Bug
-------------------

openexr-bind uses
[GitHub's issue tracking system](https://github.com/vfx-rs/openexr-bind/issues)
for bugs and enhancements. When submitting a bug, it is important to try to
figure out if the bug is an issue in the wrapped C++ library, or in the binding
itself. For example, if a C++ example that uses the same APIs as the Rust
binding, but produces a different result, then the issue is likely with the
bindings. However, if the bug is with the OpenEXR library, then please
[submit an issue with the OpenEXR project](https://github.com/AcademySoftwareFoundation/openexr/issues).

Also, when submitting a report, please state the version of the bindings used,
operating system, Rust version, and any other information that describes what
you did, what happened, and what you expected to happen.

How to Request a Change
-----------------------

Open a GitHub issue: https://github.com/vfx-rs/openexr-bind/issues

Describe the change request as clearly, and with as much detail as possible. The
change request will likely crease a discussion, and possibly a pull request (or
several) addressing the created issue.

How to Report a Security Vulnerability
--------------------------------------

There currently is not an official security vulnerability policy, but please
raise an issue on the mailing list or the ASWF Rust Slack channel and we  will
work with you to have the vulnerability resolved as quickly as possible.

How to Contribute a Bug Fix or Change
-------------------------------------

It is requested that a Pull Request in GitHub is attached to an issue. As much
as possible, issues should represent a problem (bug or feature request), and the
pull request represents a potential fix for the issue. This isn't a strict
requirement, but is helpful in keeping the discussions organized.

To contribute code to the project, you would need the following:

- An understanding of Git and the Git workflow.
- A fork of this repository.
- An understanding of the project's development workflow.
- The legal authority that you can contribute to the project.

Legal Requirements
==================

License
-------

The openexr-bind project is licensed under the [BSD 3 clause license](LICENSE).
Contributions to the library should abide by that standard license.

Getting Started
===============

Repository Structure
--------------------

The repository is broken down into 3 main parts:

- `bind/`: Contains the cppmm binding files to describe how to bind a C++
  interface to C and Rust. See the [cppmm project](https://github.com/vfx-rs/cppmm)
  for more information.
- `build/`: This is automatically generated via cppmm. Inside it is the `ast`
  folder containing json files that describe the C++ interfaces without the need
  for a C++ parser, `openexr-c` folder that contains the C interface for the
  wrapped library, and `openexr-sys` folder that is the unsafe Rust bindings.
- `openexr-rs/`: Contains the safe Rust bindings.

Development and Pull Requests
-----------------------------

Development is done on the main branch. The version branches track major and
minor changes based on the wrapped library. The version of the `openexr-rs`,
`openexr-sys`, `openexr-c`, and the wrapped OpenEXR projects should match the
major and minor version. For example, if OpenEXR releases version 3.1.0, then
the other projects should also have that version. If OpenEXR releases version
3.1.10, then the other projects may not have a version that matches due to the
assumption that the patch release does not affect the API.

Pull requests should be done from the main branch. It is recommended to name the
branch with the related GitHub issue and a short description (e.g.,
`123-fix-widget`). The pull request template has a checklist of things to
complete before the pull request is accepted to make sure that the contribution
meets a high quality standard. However, there are cases where the checklist does
not make sense (including documentation, update to the pull request template,
etc). However, it is recommended to always link the pull request to the issue.
See [GitHub's documents on linking pull requests for more information](https://docs.github.com/en/issues/tracking-your-work-with-issues/creating-issues/linking-a-pull-request-to-an-issue).

Coding Standards
----------------

As much as possible, we try to conform to the Rust
[style guide](https://doc.rust-lang.org/1.12.0/style/) and
[API guidelines](https://rust-lang.github.io/api-guidelines/).

Otherwise, we try to match the C++ interfaces where it makes sense to reduce
friction between languages.

Test Policy
-----------

All functionality in the `openexr-rs` crate must have associated tests. The
tests should only cover the extent needed to validate the wrapper. It is the
responsibility of the wrapped library to validate the function behaves as
expected, while it is the responsibility of the Rust bindings to validate that
the bindings behave as the wrapped library behaves. `cargo test` must pass for a
pull request to be accepted.

Versioning Policy
-----------------

The C, Rust unsafe, and Rust safe bindings should have the same major and minor
version as the OpenEXR version it is bound against. The patch version is free to
change as needed when the OpenEXR library patches issues, or when the bindings
patch issues.

Creating a Release
------------------

To create a new release from the master branch:

1. Update the release notes in ``CHANGES.md``.

   Write a high-level summary of the features and
   improvements. Include the summary in ``CHANGES.md`` and also in the
   Release comments.

   Include the log of all changes since the last release, via:

        git log v2.2.1...v2.3.0 --date=short --pretty=format:"[%s](https://github.com/vfx-rs/openexr-bind/commit/%H) ([%an](@%ae) %ad)"

   Include diff status via:

        git diff --stat v2.2.1

2. Create a new release on the GitHub Releases page.

3. Tag the release with name beginning with '``v``', e.g. '``v2.3.0``'.

4. Download and sign the release tarball, as described
[here](https://wiki.debian.org/Creating%20signed%20GitHub%20releases),

5. Attach the detached ``.asc`` signature file to the GitHub release as a
binary file.
