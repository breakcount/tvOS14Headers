/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:43 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TextRecognition/TextRecognition-Structs.h>
@interface CRCtcTimeSample : NSObject {

	CRCtcCandidate _blank;
	CRCTCPriorityQueue=priority_queue<CRCtcCandidate, std::__1::vector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate> >, CRCTCPriorityQueue::QueueComparison>=vector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate> >=CRCtcCandidate}CRCtcCandidate}compressed_pair<CRCtcCandidate *, std::__1::allocator<CRCtcCandidate> >=CRCtcCandidate}}}QueueComparison}Bvector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate> >=CRCtcCandidate}CRCtcCandidate}compressed_pair<CRCtcCandidate *, std::__1::allocator<CRCtcCandidate> >=CRCtcCandidate}}}}Ref _sample;

}

@property (assign) CRCTCPriorityQueue* sample;              //@synthesize sample=_sample - In the implementation block
@property (assign) CRCtcCandidate blank;                    //@synthesize blank=_blank - In the implementation block
-(id)init;
-(void)dealloc;
-(void)addCandidate:(CRCtcCandidate)arg1 ;
-(const vector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate> >*)candidates;
-(void)setSample:(CRCTCPriorityQueue*)arg1 ;
-(CRCTCPriorityQueue*)sample;
-(CRCtcCandidate)topCandidate;
-(CRCtcCandidate)blank;
-(void)trimCandidates;
-(void)setBlank:(CRCtcCandidate)arg1 ;
@end

