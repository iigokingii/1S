<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
  <xsl:template match="/">
      <html>
        <body>
          <xsl:for-each select="note/animal">
              
              <h2><xsl:value-of select="name"/></h2>
              <p style="color:red;"><xsl:value-of select="about"/></p>
          </xsl:for-each>
        </body>
      </html>
  </xsl:template>
</xsl:stylesheet>
  