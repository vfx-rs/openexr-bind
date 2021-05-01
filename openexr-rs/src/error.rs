#[derive(Debug, Clone, PartialEq, thiserror::Error)]
pub enum Error {
    #[error("Arguments were out of range")]
    OutOfRange,
}
