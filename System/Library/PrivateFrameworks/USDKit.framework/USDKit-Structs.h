/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:49:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct type {
	unsigned char __lx[8];
} type;

typedef struct TfPointerAndBits<const pxrInternal_v0_20__pxrReserved__usdkit__::VtValue::_TypeInfo> {
	_TypeInfo _ptrAndBits;
} TfPointerAndBits<const pxrInternal_v0_20__pxrReserved__usdkit__::VtValue::_TypeInfo>;

typedef struct VtValue {
	type _storage;
	TfPointerAndBits<const pxrInternal_v0_20__pxrReserved__usdkit__::VtValue::_TypeInfo> _info;
} VtValue;

typedef struct {
	[4 field1];
} SCD_Struct_US3;

typedef struct TfPointerAndBits<const pxrInternal_v0_20__pxrReserved__usdkit__::TfToken::_Rep> {
	_Rep _ptrAndBits;
} TfPointerAndBits<const pxrInternal_v0_20__pxrReserved__usdkit__::TfToken::_Rep>;

typedef struct TfToken {
	TfPointerAndBits<const pxrInternal_v0_20__pxrReserved__usdkit__::TfToken::_Rep> _rep;
} TfToken;

typedef struct Handle {
	unsigned value;
} Handle;

typedef struct Sdf_PathNodeHandleImpl<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathNode> {
	Handle _poolHandle;
} Sdf_PathNodeHandleImpl<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathNode>;

typedef struct Sdf_PathNodeHandleImpl<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathNode> {
	Handle _poolHandle;
} Sdf_PathNodeHandleImpl<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathNode>;

typedef struct SdfPath {
	Sdf_PathNodeHandleImpl<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathNode> _primPart;
	Sdf_PathNodeHandleImpl<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathNode> _propPart;
} SdfPath;

typedef struct TfRefPtr<pxrInternal_v0_20__pxrReserved__usdkit__::UsdStage> {
	TfRefBase _refBase;
} TfRefPtr<pxrInternal_v0_20__pxrReserved__usdkit__::UsdStage>;

typedef struct intrusive_ptr<const pxrInternal_v0_20__pxrReserved__usdkit__::Usd_PrimData> {
	Usd_PrimData px;
} intrusive_ptr<const pxrInternal_v0_20__pxrReserved__usdkit__::Usd_PrimData>;

typedef struct Usd_PrimDataHandle {
	intrusive_ptr<const pxrInternal_v0_20__pxrReserved__usdkit__::Usd_PrimData> _p;
} Usd_PrimDataHandle;

typedef struct UsdProperty {
	int _type;
	Usd_PrimDataHandle _prim;
	SdfPath _proxyPrimPath;
	TfToken _propName;
} UsdProperty;

typedef struct UsdPrim {
	int _type;
	Usd_PrimDataHandle _prim;
	SdfPath _proxyPrimPath;
	TfToken _propName;
} UsdPrim;

typedef struct bitset<13> {
	unsigned long long __first_;
} bitset<13>;

typedef struct Usd_PrimFlagsPredicate {
	bitset<13> _mask;
	bitset<13> _values;
	BOOL _negate;
} Usd_PrimFlagsPredicate;

typedef struct UsdPrimSiblingIterator {
	Usd_PrimData m_iterator;
	SdfPath _proxyPrimPath;
	Usd_PrimFlagsPredicate _predicate;
} UsdPrimSiblingIterator;

typedef struct iterator_range<pxrInternal_v0_20__pxrReserved__usdkit__::UsdPrimSiblingIterator> {
	UsdPrimSiblingIterator m_Begin;
	UsdPrimSiblingIterator m_End;
} iterator_range<pxrInternal_v0_20__pxrReserved__usdkit__::UsdPrimSiblingIterator>;

typedef struct UsdPrimRange {
	Usd_PrimData _begin;
	Usd_PrimData _end;
	SdfPath _initProxyPrimPath;
	Usd_PrimFlagsPredicate _predicate;
	unsigned _initDepth;
	BOOL _postOrder;
} UsdPrimRange;

typedef struct iterator {
	Usd_PrimData m_iterator;
	UsdPrimRange _range;
	SdfPath _proxyPrimPath;
	unsigned _depth;
	BOOL _pruneChildrenFlag;
	BOOL _isPost;
} iterator;

typedef struct _NSZone* NSZoneRef;

typedef struct _compressed_pair<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty *, std::__1::allocator<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty> > {
	UsdProperty __value_;
} compressed_pair<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty *, std::__1::allocator<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty> >;

typedef struct vector<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty, std::__1::allocator<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty> > {
	UsdProperty __begin_;
	UsdProperty __end_;
	compressed_pair<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty *, std::__1::allocator<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty> > __end_cap_;
} vector<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty, std::__1::allocator<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty> >;

typedef struct _wrap_iter<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty *> {
	UsdProperty __i;
} wrap_iter<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty *>;

