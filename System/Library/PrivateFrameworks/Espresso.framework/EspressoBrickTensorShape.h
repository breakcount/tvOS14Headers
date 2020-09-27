/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EspressoBrickTensorShape : NSObject {

	int _width;
	int _height;
	int _channels;
	int _batch;
	int _sequence;
	int _rank;

}

@property (assign) int width;                 //@synthesize width=_width - In the implementation block
@property (assign) int height;                //@synthesize height=_height - In the implementation block
@property (assign) int channels;              //@synthesize channels=_channels - In the implementation block
@property (assign) int batch;                 //@synthesize batch=_batch - In the implementation block
@property (assign) int sequence;              //@synthesize sequence=_sequence - In the implementation block
@property (assign) int rank;                  //@synthesize rank=_rank - In the implementation block
-(void)setSequence:(int)arg1 ;
-(int)sequence;
-(int)width;
-(int)height;
-(void)setWidth:(int)arg1 ;
-(void)setHeight:(int)arg1 ;
-(void)setRank:(int)arg1 ;
-(int)rank;
-(int)channels;
-(int)batch;
-(void)setBatch:(int)arg1 ;
-(void)setChannels:(int)arg1 ;
@end

