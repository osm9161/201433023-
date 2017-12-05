package fifo;

import java.util.LinkedList;
import java.util.Queue;
 
public class QueueExam {
 
    public static void main(String[] args) {
        Queue<Message> queue = new LinkedList<Message>();
 
        queue.offer(new Message("sendMail", "Jack"));
        queue.offer(new Message("sendSMS", "Maggie"));
        queue.offer(new Message("sendKakaotalk", "Blue"));
        queue.offer(new Message("sendLine", "Jack"));
 
        while (!queue.isEmpty()) {
            Message msg = queue.poll();
 
            switch (msg.command) {
            case "sendMail":
                System.out.println(msg.to + " ¥‘≤≤ ∏ﬁ¿œ¿ª ∫∏≥¿¥œ¥Ÿ");
                break;
 
            case "sendSMS":
                System.out.println(msg.to + " ¥‘≤≤ πÆ¿⁄∏¶ ∫∏≥¿¥œ¥Ÿ");
                break;
 
            case "sendKakaotalk":
                System.out.println(msg.to + " ¥‘≤≤ ƒ´≈Â¿ª ∫∏≥¿¥œ¥Ÿ");
                break;
 
            case "sendLine":
                System.out.println(msg.to + " ¥‘≤≤ ∂Û¿Œ¿ª ∫∏≥¿¥œ¥Ÿ");
                break;
            }
        }
    }
 
}
 