/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:10 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

typedef struct _NSZone* NSZoneRef;

typedef struct shared_ptr<rose::ResponderSuperframeStats> {
	ResponderSuperframeStats __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<rose::ResponderSuperframeStats>;

typedef struct DaemonBackedService {
	NSXPCConnection* _connection;
} DaemonBackedService;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<BtProxData> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<BtProxData> >;

typedef struct _compressed_pair<BtProxData **, std::__1::allocator<BtProxData *> > {
	BtProxData __value_;
} compressed_pair<BtProxData **, std::__1::allocator<BtProxData *> >;

typedef struct _split_buffer<BtProxData *, std::__1::allocator<BtProxData *> > {
	BtProxData __first_;
	BtProxData __begin_;
	BtProxData __end_;
	compressed_pair<BtProxData **, std::__1::allocator<BtProxData *> > __end_cap_;
} split_buffer<BtProxData *, std::__1::allocator<BtProxData *> >;

typedef struct deque<BtProxData, std::__1::allocator<BtProxData> > {
	split_buffer<BtProxData *, std::__1::allocator<BtProxData *> > __map_;
	unsigned long long __start_;
	compressed_pair<unsigned long, std::__1::allocator<BtProxData> > __size_;
} deque<BtProxData, std::__1::allocator<BtProxData> >;

typedef struct _compressed_pair<SingleThresholdProx::Estimator *, std::__1::default_delete<SingleThresholdProx::Estimator> > {
	Estimator __value_;
} compressed_pair<SingleThresholdProx::Estimator *, std::__1::default_delete<SingleThresholdProx::Estimator> >;

typedef struct unique_ptr<SingleThresholdProx::Estimator, std::__1::default_delete<SingleThresholdProx::Estimator> > {
	compressed_pair<SingleThresholdProx::Estimator *, std::__1::default_delete<SingleThresholdProx::Estimator> > __ptr_;
} unique_ptr<SingleThresholdProx::Estimator, std::__1::default_delete<SingleThresholdProx::Estimator> >;

typedef struct _compressed_pair<NeighborMeasurements *, std::__1::allocator<NeighborMeasurements> > {
	NeighborMeasurements __value_;
} compressed_pair<NeighborMeasurements *, std::__1::allocator<NeighborMeasurements> >;

typedef struct vector<NeighborMeasurements, std::__1::allocator<NeighborMeasurements> > {
	NeighborMeasurements __begin_;
	NeighborMeasurements __end_;
	compressed_pair<NeighborMeasurements *, std::__1::allocator<NeighborMeasurements> > __end_cap_;
} vector<NeighborMeasurements, std::__1::allocator<NeighborMeasurements> >;

typedef struct SharingImportanceMeasurements {
	vector<NeighborMeasurements, std::__1::allocator<NeighborMeasurements> > userSharingInput;
} SharingImportanceMeasurements;

typedef struct _compressed_pair<SharingImportanceManager *, std::__1::default_delete<SharingImportanceManager> > {
	SharingImportanceManager __value_;
} compressed_pair<SharingImportanceManager *, std::__1::default_delete<SharingImportanceManager> >;

typedef struct unique_ptr<SharingImportanceManager, std::__1::default_delete<SharingImportanceManager> > {
	compressed_pair<SharingImportanceManager *, std::__1::default_delete<SharingImportanceManager> > __ptr_;
} unique_ptr<SharingImportanceManager, std::__1::default_delete<SharingImportanceManager> >;

