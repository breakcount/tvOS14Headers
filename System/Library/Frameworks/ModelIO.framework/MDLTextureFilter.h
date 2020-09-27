/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MDLTextureFilter : NSObject {

	unsigned long long sWrapMode;
	unsigned long long tWrapMode;
	unsigned long long rWrapMode;
	unsigned long long minFilter;
	unsigned long long magFilter;
	unsigned long long mipFilter;

}

@property (assign,nonatomic) unsigned long long sWrapMode; 
@property (assign,nonatomic) unsigned long long tWrapMode; 
@property (assign,nonatomic) unsigned long long rWrapMode; 
@property (assign,nonatomic) unsigned long long minFilter; 
@property (assign,nonatomic) unsigned long long magFilter; 
@property (assign,nonatomic) unsigned long long mipFilter; 
-(id)init;
-(unsigned long long)minFilter;
-(void)setMinFilter:(unsigned long long)arg1 ;
-(unsigned long long)magFilter;
-(void)setMagFilter:(unsigned long long)arg1 ;
-(unsigned long long)mipFilter;
-(void)setMipFilter:(unsigned long long)arg1 ;
-(unsigned long long)sWrapMode;
-(void)setSWrapMode:(unsigned long long)arg1 ;
-(unsigned long long)tWrapMode;
-(void)setTWrapMode:(unsigned long long)arg1 ;
-(unsigned long long)rWrapMode;
-(void)setRWrapMode:(unsigned long long)arg1 ;
@end
