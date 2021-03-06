//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_nw_path_evaluator;

@interface NRBabelInstance : NSObject
{
    unsigned short _nodeSeqno;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    unsigned long long _routerID;	// 24 = 0x18
    NSMutableArray *_interfaces;	// 32 = 0x20
    NSMutableArray *_neighbors;	// 40 = 0x28
    NSMutableArray *_sources;	// 48 = 0x30
    NSMutableArray *_routes;	// 56 = 0x38
    NSMutableArray *_posrs;	// 64 = 0x40
    NSObject<OS_nw_path_evaluator> *_ifBringupPathEvaluator;	// 72 = 0x48
    struct NEVirtualInterface_s *_nevi;	// 80 = 0x50
    NSString *_addrStr;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000010007d1d4
@property(retain, nonatomic) NSString *addrStr; // @synthesize addrStr=_addrStr;
@property(nonatomic) struct NEVirtualInterface_s *nevi; // @synthesize nevi=_nevi;
@property(retain, nonatomic) NSObject<OS_nw_path_evaluator> *ifBringupPathEvaluator; // @synthesize ifBringupPathEvaluator=_ifBringupPathEvaluator;
@property(retain, nonatomic) NSMutableArray *posrs; // @synthesize posrs=_posrs;
@property(retain, nonatomic) NSMutableArray *routes; // @synthesize routes=_routes;
@property(retain, nonatomic) NSMutableArray *sources; // @synthesize sources=_sources;
@property(retain, nonatomic) NSMutableArray *neighbors; // @synthesize neighbors=_neighbors;
@property(retain, nonatomic) NSMutableArray *interfaces; // @synthesize interfaces=_interfaces;
@property(nonatomic) unsigned long long routerID; // @synthesize routerID=_routerID;
@property(nonatomic) unsigned short nodeSeqno; // @synthesize nodeSeqno=_nodeSeqno;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)copyRouteString;	// IMP=0x000000010007cdac
- (id)description;	// IMP=0x000000010007cccc
- (void)handlePacket:(const char *)arg1 length:(unsigned int)arg2 remoteAddr:(const struct in6_addr *)arg3 localAddr:(const struct in6_addr *)arg4 babelInterface:(id)arg5 dtls:(_Bool)arg6;	// IMP=0x000000010007b820
- (void)sendImmediateRouteUpdateToAllNeighbors;	// IMP=0x000000010007b810
- (void)sendImmediateRouteUpdateToNeighbor:(id)arg1;	// IMP=0x000000010007b588
- (id)createUpdateTLVs;	// IMP=0x000000010007b578
- (id)createUpdateTLVsWithInterval:(unsigned short)arg1;	// IMP=0x000000010007b564
- (id)createUpdateTLVsForPrefix:(id)arg1;	// IMP=0x000000010007b554
- (id)createUpdateTLVsForPrefix:(id)arg1 interval:(unsigned short)arg2;	// IMP=0x000000010007b4e4
- (id)createUpdateTLVsForRoutes:(id)arg1;	// IMP=0x000000010007b4d4
- (id)createUpdateTLVsForRoutes:(id)arg1 interval:(unsigned short)arg2;	// IMP=0x000000010007b0ec
- (void)updateFeasabilityDistanceForRoute:(id)arg1;	// IMP=0x000000010007af28
- (id)createSelectedRoutesArrayForPrefix:(id)arg1;	// IMP=0x000000010007ac64
- (void)addUpdateForRoute:(id)arg1 interval:(unsigned short)arg2 toTLVs:(id)arg3;	// IMP=0x000000010007aacc
- (void)addRouterID:(unsigned long long)arg1 toTLVs:(id)arg2;	// IMP=0x000000010007aa48
- (void)updateRoutes;	// IMP=0x000000010007a290
- (void)handleSeqnoReqFromAddr:(const struct in6_addr *)arg1 babelInterface:(id)arg2 ForPrefix:(const struct in6_addr *)arg3 plen:(unsigned char)arg4 routerID:(unsigned long long)arg5 seqno:(unsigned short)arg6 hopCount:(unsigned char)arg7;	// IMP=0x0000000100079974
- (void)sendSeqnoReqIfNecessaryTo:(id)arg1 forPrefix:(id)arg2 routerID:(unsigned long long)arg3 seqno:(unsigned short)arg4 hopCount:(unsigned char)arg5 originator:(id)arg6;	// IMP=0x0000000100079764
- (void)handleRouteReqFromAddr:(const struct in6_addr *)arg1 babelInterface:(id)arg2 ForPrefix:(const struct in6_addr *)arg3 plen:(unsigned char)arg4;	// IMP=0x000000010007967c
- (_Bool)handleUpdateFromAddr:(const struct in6_addr *)arg1 ForPrefix:(const struct in6_addr *)arg2 plen:(unsigned char)arg3 nextHop:(const struct in6_addr *)arg4 babelInterface:(id)arg5 routerID:(unsigned long long)arg6 seqno:(unsigned short)arg7 interval:(unsigned short)arg8 metric:(unsigned short)arg9 ae:(unsigned char)arg10;	// IMP=0x0000000100078e0c
- (_Bool)purgeInterface:(id)arg1;	// IMP=0x0000000100078c70
- (_Bool)purgeAllRoutesFromNeighbor:(id)arg1;	// IMP=0x0000000100078aa4
- (void)handleIHUFromAddr:(const struct in6_addr *)arg1 babelInterface:(id)arg2 rxcost:(unsigned short)arg3 interval:(unsigned short)arg4;	// IMP=0x00000001000789b8
- (void)handleHelloFromAddr:(const struct in6_addr *)arg1 babelInterface:(id)arg2 seqno:(unsigned short)arg3 interval:(unsigned short)arg4 personal:(_Bool)arg5;	// IMP=0x000000010007887c
- (void)handleAckReqFromAddr:(const struct in6_addr *)arg1 babelInterface:(id)arg2 nonce:(unsigned short)arg3 interval:(unsigned short)arg4;	// IMP=0x00000001000787dc
- (id)copyPendingOutgoingSeqnoReqWithPrefix:(id)arg1 routerID:(unsigned long long)arg2 isNewPOSR:(_Bool *)arg3;	// IMP=0x00000001000785ec
- (id)copyRouteWithPrefix:(id)arg1 neighbor:(id)arg2;	// IMP=0x000000010007847c
- (_Bool)isNewDistanceUnfeasibleForPrefix:(id)arg1 routerID:(unsigned long long)arg2 seqno:(unsigned short)arg3 metric:(unsigned short)arg4;	// IMP=0x0000000100078420
- (id)copySourceWithPrefix:(id)arg1 routerID:(unsigned long long)arg2;	// IMP=0x00000001000782c4
- (id)copyNeighborWithAddr:(const struct in6_addr *)arg1 babelInterface:(id)arg2 isNewNeighbor:(_Bool *)arg3;	// IMP=0x00000001000780d0
- (id)init;	// IMP=0x0000000100077cd0
- (void)dealloc;	// IMP=0x0000000100077c84
- (void)setupAddress:(struct in6_addr *)arg1;	// IMP=0x0000000100077b48
- (void)setupInterfaces;	// IMP=0x00000001000774ec
- (void)handleIfBringupPathUpdate:(id)arg1;	// IMP=0x00000001000773b0

@end

