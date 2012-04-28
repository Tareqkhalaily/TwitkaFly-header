//TwitkaFly

#import <Foundation/Foundation.h>

@interface LibTwitkaFly : NSObject

+ (id) sharetareq;
- (BOOL) showSheetWithInitialText:(NSString *)text andInitialImage:(UIImage *)image;
- (BOOL) hideSheet;

@end