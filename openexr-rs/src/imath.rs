pub use half::f16;

pub trait Vec2<T>
where
    Self: Sized,
{
    fn from_slice(slice: &[T; 2]) -> Self;
    fn as_slice(&self) -> &[T; 2];
    fn as_ptr(&self) -> *const T;
}

impl<T> Vec2<T> for [T; 2]
where
    T: Copy,
{
    fn from_slice(slice: &[T; 2]) -> [T; 2] {
        slice.clone()
    }

    fn as_slice(&self) -> &[T; 2] {
        self
    }

    fn as_ptr(&self) -> *const T {
        self as *const T
    }
}

pub trait Vec3<T>
where
    Self: Sized,
{
    fn from_slice(slice: &[T; 3]) -> Self;
    fn as_slice(&self) -> &[T; 3];
    fn as_ptr(&self) -> *const T;
}

impl<T> Vec3<T> for [T; 3]
where
    T: Copy,
{
    fn from_slice(slice: &[T; 3]) -> Self {
        slice.clone()
    }

    fn as_slice(&self) -> &[T; 3] {
        self
    }

    fn as_ptr(&self) -> *const T {
        self as *const T
    }
}

pub trait Vec4<T>
where
    Self: Sized,
{
    fn from_slice(slice: &[T; 4]) -> Self;
    fn as_slice(&self) -> &[T; 4];
    fn as_ptr(&self) -> *const T;
}

impl<T> Vec4<T> for [T; 4]
where
    T: Copy,
{
    fn from_slice(slice: &[T; 4]) -> Self {
        slice.clone()
    }

    fn as_slice(&self) -> &[T; 4] {
        self
    }

    fn as_ptr(&self) -> *const T {
        self as *const T
    }
}

pub trait Box2<T>
where
    Self: Sized,
{
    fn from_slice(slice: &[T; 4]) -> Self;
    fn as_slice(&self) -> &[T; 4];
    fn as_ptr(&self) -> *const T;
}

impl<T> Box2<T> for [T; 4]
where
    T: Copy,
{
    fn from_slice(slice: &[T; 4]) -> Self {
        slice.clone()
    }

    fn as_slice(&self) -> &[T; 4] {
        self
    }

    fn as_ptr(&self) -> *const T {
        self as *const T
    }
}

pub trait Box3<T>
where
    Self: Sized,
{
    fn from_slice(slice: &[T; 6]) -> Self;
    fn as_slice(&self) -> &[T; 6];
    fn as_ptr(&self) -> *const T;
}

impl<T> Box3<T> for [T; 6]
where
    T: Copy,
{
    fn from_slice(slice: &[T; 6]) -> Self {
        slice.clone()
    }

    fn as_slice(&self) -> &[T; 6] {
        self
    }

    fn as_ptr(&self) -> *const T {
        self as *const T
    }
}
