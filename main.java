import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class main extends HttpServlet {
    private String message;

    public void init() throws ServeletException {
        message = "HELLO WORLD";
    }

    public void doGet(HttpServeletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        response.setContentType("text/html");
        PrintWriter out = response.getWriter();
        out.println("<h1>" + message + "</h1>");
    }

    public void destroy() {
        // do nothing.
    }
}

