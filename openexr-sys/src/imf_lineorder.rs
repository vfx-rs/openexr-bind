#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;


#[repr(transparent)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub struct Imf_3_0__LineOrder_e(pub u32);
pub const Imf_LineOrder_INCREASING_Y: Imf_3_0__LineOrder_e = Imf_3_0__LineOrder_e(0);
pub const Imf_LineOrder_DECREASING_Y: Imf_3_0__LineOrder_e = Imf_3_0__LineOrder_e(1);
pub const Imf_LineOrder_RANDOM_Y: Imf_3_0__LineOrder_e = Imf_3_0__LineOrder_e(2);
pub const Imf_LineOrder_NUM_LINEORDERS: Imf_3_0__LineOrder_e = Imf_3_0__LineOrder_e(3);

#[repr(u32)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub enum LineOrder {
    IncreasingY = 0,
    DecreasingY = 1,
    RandomY = 2,
    NumLineorders = 3,
}

impl From<Imf_3_0__LineOrder_e> for LineOrder {
    fn from(e: Imf_3_0__LineOrder_e) -> LineOrder {
        match e {
            Imf_LineOrder_INCREASING_Y => LineOrder::IncreasingY,
            Imf_LineOrder_DECREASING_Y => LineOrder::DecreasingY,
            Imf_LineOrder_RANDOM_Y => LineOrder::RandomY,
            Imf_LineOrder_NUM_LINEORDERS => LineOrder::NumLineorders,
            _ => panic!("Invalid value {:?} for LineOrder in conversion", e),
        }
    }
}

impl From<LineOrder> for Imf_3_0__LineOrder_e {
    fn from(e: LineOrder) -> Imf_3_0__LineOrder_e {
        match e {
            LineOrder::IncreasingY => Imf_LineOrder_INCREASING_Y,
            LineOrder::DecreasingY => Imf_LineOrder_DECREASING_Y,
            LineOrder::RandomY => Imf_LineOrder_RANDOM_Y,
            LineOrder::NumLineorders => Imf_LineOrder_NUM_LINEORDERS,
        }
    }
}


extern "C" {


} // extern "C"
