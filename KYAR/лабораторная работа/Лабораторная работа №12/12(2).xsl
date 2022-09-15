<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
	<xsl:template match="/">
		<html>
			<head>
				<title>lab12.2</title>
			</head>
			<body>
				<h2>Аттестация:</h2>
				<table border="1">
					<tr>
						<th>Имя</th>
						<th>Балл</th>
					</tr>
					<xsl:for-each select="attestation/student">
						<tr>
							<td><xsl:value-of select="name" /></td>
							<xsl:choose>
                               	<xsl:when test="mark &gt; 8">
                                   	<td bgcolor="green">
                                       	<xsl:value-of select="mark" />
                                   	</td>
                               	</xsl:when>
                               	<xsl:when test="mark &lt; 4">
                                   	<td bgcolor="red">
                                       	<xsl:value-of select="mark" />
                                   	</td>
                               	</xsl:when>
                               	<xsl:otherwise>
                                   	<td>
                                       	<xsl:value-of select="mark" />
                                   	</td>
                                </xsl:otherwise>
                            </xsl:choose>
						</tr>
					</xsl:for-each>
				</table>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>