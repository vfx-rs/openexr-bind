# Description

Fixes #<!-- Issue number -->.

<!-- Insert short description of pull request -->

# CPPMM Checklist

Cppmm is our bindings generator. There are some tools in it to aid in creating safe and stable APIs.

- [ ] Use `CPPMM_RENAME(ctor)` for the "main" type constructor.
- [ ] Add `CPPMM_THROWS` for any code that may throw an exception in C++.

# FFI Safety Checklist

The [Rustonomicon](https://doc.rust-lang.org/nomicon/) provides useful guides to prevent soundness errors in Rust. The [FFI section](https://doc.rust-lang.org/nomicon/ffi.html) of the document provides the source for these checklist items.

- [ ] Null pointers are properly handled
- [ ] Panics in Rust never cross FFI boundary
- [ ] Exceptions in C/C++ never cross FFI boundary
- [ ] Types implement drop trait for C/C++ destructors
- [ ] Concurrency is properly managed between Rust and C/C++
- [ ] C style strings are converted to `CStr` or `CString`
- [ ] Wrap non-trivially movable types in a `Box`

# Rust API Guidelines Checklist

The checklist is heavily inspired by [The Rust API Guidelines](https://rust-lang.github.io/api-guidelines/checklist.html). Please check each item that applies, or note if an item is intentionally skipped (either partially or fully) with the reason.

- **Naming** *(crate aligns with Rust naming conventions)*
  - [ ] Casing conforms to RFC 430 ([C-CASE])
  - [ ] Ad-hoc conversions follow `as_`, `to_`, `into_` conventions ([C-CONV])
  - [ ] Getter names follow Rust convention ([C-GETTER])
  - [ ] Methods on collections that produce iterators follow `iter`, `iter_mut`, `into_iter` ([C-ITER])
  - [ ] Iterator type names match the methods that produce them ([C-ITER-TY])
  - [ ] Feature names are free of placeholder words ([C-FEATURE])
  - [ ] Names use a consistent word order ([C-WORD-ORDER])
- **Interoperability** *(crate interacts nicely with other library functionality)*
  - [ ] Types eagerly implement common traits ([C-COMMON-TRAITS])
    - `Copy`, `Clone`, `Eq`, `PartialEq`, `Ord`, `PartialOrd`, `Hash`, `Debug`,
      `Display`, `Default`
  - [ ] Conversions use the standard traits `From`, `AsRef`, `AsMut` ([C-CONV-TRAITS])
  - [ ] Collections implement `FromIterator` and `Extend` ([C-COLLECT])
  - [ ] Data structures implement Serde's `Serialize`, `Deserialize` ([C-SERDE])
  - [ ] Types are `Send` and `Sync` where possible ([C-SEND-SYNC])
  - [ ] Error types are meaningful and well-behaved ([C-GOOD-ERR])
  - [ ] Binary number types provide `Hex`, `Octal`, `Binary` formatting ([C-NUM-FMT])
  - [ ] Generic reader/writer functions take `R: Read` and `W: Write` by value ([C-RW-VALUE])
- **Macros** *(crate presents well-behaved macros)*
  - [ ] Input syntax is evocative of the output ([C-EVOCATIVE])
  - [ ] Macros compose well with attributes ([C-MACRO-ATTR])
  - [ ] Item macros work anywhere that items are allowed ([C-ANYWHERE])
  - [ ] Item macros support visibility specifiers ([C-MACRO-VIS])
  - [ ] Type fragments are flexible ([C-MACRO-TY])
- **Documentation** *(crate is abundantly documented)*
  - [ ] Crate level docs are thorough and include examples ([C-CRATE-DOC])
  - [ ] All items have a rustdoc example ([C-EXAMPLE])
  - [ ] Examples use `?`, not `try!`, not `unwrap` ([C-QUESTION-MARK])
  - [ ] Function docs include error, panic, and safety considerations ([C-FAILURE])
  - [ ] Prose contains hyperlinks to relevant things ([C-LINK])
  - [ ] Cargo.toml includes all common metadata ([C-METADATA])
    - authors, description, license, homepage, documentation, repository,
      readme, keywords, categories
  - [ ] Crate sets html_root_url attribute "https://docs.rs/CRATE/X.Y.Z" ([C-HTML-ROOT])
  - [ ] Release notes document all significant changes ([C-RELNOTES])
  - [ ] Rustdoc does not show unhelpful implementation details ([C-HIDDEN])
- **Predictability** *(crate enables legible code that acts how it looks)*
  - [ ] Smart pointers do not add inherent methods ([C-SMART-PTR])
  - [ ] Conversions live on the most specific type involved ([C-CONV-SPECIFIC])
  - [ ] Functions with a clear receiver are methods ([C-METHOD])
  - [ ] Functions do not take out-parameters ([C-NO-OUT])
  - [ ] Operator overloads are unsurprising ([C-OVERLOAD])
  - [ ] Only smart pointers implement `Deref` and `DerefMut` ([C-DEREF])
  - [ ] Constructors are static, inherent methods ([C-CTOR])
- **Flexibility** *(crate supports diverse real-world use cases)*
  - [ ] Functions expose intermediate results to avoid duplicate work ([C-INTERMEDIATE])
  - [ ] Caller decides where to copy and place data ([C-CALLER-CONTROL])
  - [ ] Functions minimize assumptions about parameters by using generics ([C-GENERIC])
  - [ ] Traits are object-safe if they may be useful as a trait object ([C-OBJECT])
- **Type safety** *(crate leverages the type system effectively)*
  - [ ] Newtypes provide static distinctions ([C-NEWTYPE])
  - [ ] Arguments convey meaning through types, not `bool` or `Option` ([C-CUSTOM-TYPE])
  - [ ] Types for a set of flags are `bitflags`, not enums ([C-BITFLAG])
  - [ ] Builders enable construction of complex values ([C-BUILDER])
- **Dependability** *(crate is unlikely to do the wrong thing)*
  - [ ] Functions validate their arguments ([C-VALIDATE])
  - [ ] Destructors never fail ([C-DTOR-FAIL])
  - [ ] Destructors that may block have alternatives ([C-DTOR-BLOCK])
- **Debuggability** *(crate is conducive to easy debugging)*
  - [ ] All public types implement `Debug` ([C-DEBUG])
  - [ ] `Debug` representation is never empty ([C-DEBUG-NONEMPTY])
- **Future proofing** *(crate is free to improve without breaking users' code)*
  - [ ] Sealed traits protect against downstream implementations ([C-SEALED])
  - [ ] Structs have private fields ([C-STRUCT-PRIVATE])
  - [ ] Newtypes encapsulate implementation details ([C-NEWTYPE-HIDE])
  - [ ] Data structures do not duplicate derived trait bounds ([C-STRUCT-BOUNDS])
- **Necessities** *(to whom they matter, they really matter)*
  - [ ] Public dependencies of a stable crate are stable ([C-STABLE])
  - [ ] Crate and its dependencies have a permissive license ([C-PERMISSIVE])

# Testing Checklist

The tests are meant to validate that the wrappers are sound and work as expected. Tests that are designed to exercise code for the wrapped library and not the bindings should be added to the wrapped library instead.

- [ ] `unsafe {}` code is properly sanitized
- [ ] All functions are called at least once in tests
- [ ] Functions that can round trip data (for example, readers and writers, getters and setters, etc) are verified so that the input and output data are the same (if applicable).


[C-CASE]: https://rust-lang.github.io/api-guidelines/naming.html#c-case
[C-CONV]: https://rust-lang.github.io/api-guidelines/naming.html#c-conv
[C-GETTER]: https://rust-lang.github.io/api-guidelines/naming.html#c-getter
[C-ITER]: https://rust-lang.github.io/api-guidelines/naming.html#c-iter
[C-ITER-TY]: https://rust-lang.github.io/api-guidelines/naming.html#c-iter-ty
[C-FEATURE]: https://rust-lang.github.io/api-guidelines/naming.html#c-feature
[C-WORD-ORDER]: https://rust-lang.github.io/api-guidelines/naming.html#c-word-order

[C-COMMON-TRAITS]: https://rust-lang.github.io/api-guidelines/interoperability.html#c-common-traits
[C-CONV-TRAITS]: https://rust-lang.github.io/api-guidelines/interoperability.html#c-conv-traits
[C-COLLECT]: https://rust-lang.github.io/api-guidelines/interoperability.html#c-collect
[C-SERDE]: https://rust-lang.github.io/api-guidelines/interoperability.html#c-serde
[C-SEND-SYNC]: https://rust-lang.github.io/api-guidelines/interoperability.html#c-send-sync
[C-GOOD-ERR]: https://rust-lang.github.io/api-guidelines/interoperability.html#c-good-err
[C-NUM-FMT]: https://rust-lang.github.io/api-guidelines/interoperability.html#c-num-fmt
[C-RW-VALUE]: https://rust-lang.github.io/api-guidelines/interoperability.html#c-rw-value

[C-EVOCATIVE]: https://rust-lang.github.io/api-guidelines/macros.html#c-evocative
[C-MACRO-ATTR]: https://rust-lang.github.io/api-guidelines/macros.html#c-macro-attr
[C-ANYWHERE]: https://rust-lang.github.io/api-guidelines/macros.html#c-anywhere
[C-MACRO-VIS]: https://rust-lang.github.io/api-guidelines/macros.html#c-macro-vis
[C-MACRO-TY]: https://rust-lang.github.io/api-guidelines/macros.html#c-macro-ty

[C-CRATE-DOC]: https://rust-lang.github.io/api-guidelines/documentation.html#c-crate-doc
[C-EXAMPLE]: https://rust-lang.github.io/api-guidelines/documentation.html#c-example
[C-QUESTION-MARK]: https://rust-lang.github.io/api-guidelines/documentation.html#c-question-mark
[C-FAILURE]: https://rust-lang.github.io/api-guidelines/documentation.html#c-failure
[C-LINK]: https://rust-lang.github.io/api-guidelines/documentation.html#c-link
[C-METADATA]: https://rust-lang.github.io/api-guidelines/documentation.html#c-metadata
[C-HTML-ROOT]: https://rust-lang.github.io/api-guidelines/documentation.html#https://rust-lang.github.io/api-guidelines/c-html-root
[C-RELNOTES]: https://rust-lang.github.io/api-guidelines/documentation.html#c-relnotes
[C-HIDDEN]: https://rust-lang.github.io/api-guidelines/documentation.html#c-hidden

[C-SMART-PTR]: https://rust-lang.github.io/api-guidelines/predictability.html#c-smart-ptr
[C-CONV-SPECIFIC]: https://rust-lang.github.io/api-guidelines/predictability.html#c-conv-specific
[C-METHOD]: https://rust-lang.github.io/api-guidelines/predictability.html#c-method
[C-NO-OUT]: https://rust-lang.github.io/api-guidelines/predictability.html#c-no-out
[C-OVERLOAD]: https://rust-lang.github.io/api-guidelines/predictability.html#c-overload
[C-DEREF]: https://rust-lang.github.io/api-guidelines/predictability.html#c-deref
[C-CTOR]: https://rust-lang.github.io/api-guidelines/predictability.html#c-ctor

[C-INTERMEDIATE]: https://rust-lang.github.io/api-guidelines/flexibility.html#c-intermediate
[C-CALLER-CONTROL]: https://rust-lang.github.io/api-guidelines/flexibility.html#c-caller-control
[C-GENERIC]: https://rust-lang.github.io/api-guidelines/flexibility.html#c-generic
[C-OBJECT]: https://rust-lang.github.io/api-guidelines/flexibility.html#c-object

[C-NEWTYPE]: type-https://rust-lang.github.io/api-guidelines/safety.html#c-newtype
[C-CUSTOM-TYPE]: type-https://rust-lang.github.io/api-guidelines/safety.html#c-custom-type
[C-BITFLAG]: type-https://rust-lang.github.io/api-guidelines/safety.html#c-bitflag
[C-BUILDER]: type-https://rust-lang.github.io/api-guidelines/safety.html#c-builder

[C-VALIDATE]: https://rust-lang.github.io/api-guidelines/dependability.html#c-validate
[C-DTOR-FAIL]: https://rust-lang.github.io/api-guidelines/dependability.html#c-dtor-fail
[C-DTOR-BLOCK]: https://rust-lang.github.io/api-guidelines/dependability.html#c-dtor-block

[C-DEBUG]: https://rust-lang.github.io/api-guidelines/debuggability.html#c-debug
[C-DEBUG-NONEMPTY]: https://rust-lang.github.io/api-guidelines/debuggability.html#c-debug-nonempty

[C-SEALED]: future-https://rust-lang.github.io/api-guidelines/proofing.html#c-sealed
[C-STRUCT-PRIVATE]: future-https://rust-lang.github.io/api-guidelines/proofing.html#c-struct-private
[C-NEWTYPE-HIDE]: future-https://rust-lang.github.io/api-guidelines/proofing.html#c-newtype-hide
[C-STRUCT-BOUNDS]: future-https://rust-lang.github.io/api-guidelines/proofing.html#c-struct-bounds

[C-STABLE]: https://rust-lang.github.io/api-guidelines/necessities.html#c-stable
[C-PERMISSIVE]: https://rust-lang.github.io/api-guidelines/necessities.html#c-permissive
