//
//  Billboard.h
//  Canabalt
//
//  Copyright Semi Secret Software 2009-2010. All rights reserved.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

@class RepeatBlock;

@interface Billboard : FlxObject
{
  FlxSprite * post;
  FlxSprite * postTop;
  RepeatBlock * bottomEdge;
  RepeatBlock * topEdge;
  RepeatBlock * leftEdge;
  RepeatBlock * rightEdge;
  FlxSprite * center;
  FlxSprite * topRightCorner;
  FlxSprite * topLeftCorner;
  FlxSprite * bottomRightCorner;
  FlxSprite * bottomLeftCorner;
  RepeatBlock * catwalkMiddle;
  FlxSprite * catwalkLeft;
  FlxSprite * catwalkRight;
  FlxSprite * damage;
}
- (id) initWithMaxWidth:(float)maxWidth;
- (void) createWithX:(float)X y:(float)Y width:(float)Width height:(float)Height tileSize:(float)tileSize hallHeight:(int)hallHeight;

@end
