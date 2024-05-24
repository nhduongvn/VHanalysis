#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dPhi_WW_DHZfirst_16_logY()
{
//=========Macro generated from canvas: Z_dPhi_WW_DHZfirst_16/Z_dPhi_WW_DHZfirst_16
//=========  (Thu May 23 20:48:48 2024) by ROOT version 6.28/10
   TCanvas *Z_dPhi_WW_DHZfirst_16 = new TCanvas("Z_dPhi_WW_DHZfirst_16", "Z_dPhi_WW_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dPhi_WW_DHZfirst_16->SetHighLightColor(2);
   Z_dPhi_WW_DHZfirst_16->Range(-0.8,-1.811226,4.533333,-0.2389114);
   Z_dPhi_WW_DHZfirst_16->SetFillColor(0);
   Z_dPhi_WW_DHZfirst_16->SetFillStyle(4000);
   Z_dPhi_WW_DHZfirst_16->SetBorderMode(0);
   Z_dPhi_WW_DHZfirst_16->SetBorderSize(2);
   Z_dPhi_WW_DHZfirst_16->SetLogy();
   Z_dPhi_WW_DHZfirst_16->SetLeftMargin(0.15);
   Z_dPhi_WW_DHZfirst_16->SetFrameFillStyle(1000);
   Z_dPhi_WW_DHZfirst_16->SetFrameBorderMode(0);
   Z_dPhi_WW_DHZfirst_16->SetFrameFillStyle(1000);
   Z_dPhi_WW_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dPhi__1642 = new TH1D("VH_DHZfirst_Z_dPhi__1642","",120,0,4);
   VH_DHZfirst_Z_dPhi__1642->SetBinContent(0,3.542318);
   VH_DHZfirst_Z_dPhi__1642->SetBinContent(1,0.0875332);
   VH_DHZfirst_Z_dPhi__1642->SetBinContent(3,0.1055527);
   VH_DHZfirst_Z_dPhi__1642->SetBinContent(4,0.1579972);
   VH_DHZfirst_Z_dPhi__1642->SetBinContent(6,0.1279518);
   VH_DHZfirst_Z_dPhi__1642->SetBinContent(10,0.1372332);
   VH_DHZfirst_Z_dPhi__1642->SetBinContent(11,0.08571826);
   VH_DHZfirst_Z_dPhi__1642->SetBinContent(12,0.1162515);
   VH_DHZfirst_Z_dPhi__1642->SetBinContent(14,0.2065091);
   VH_DHZfirst_Z_dPhi__1642->SetBinContent(17,0.1036831);
   VH_DHZfirst_Z_dPhi__1642->SetBinContent(19,0.2119865);
   VH_DHZfirst_Z_dPhi__1642->SetBinContent(24,0.07443615);
   VH_DHZfirst_Z_dPhi__1642->SetBinContent(25,0.06869593);
   VH_DHZfirst_Z_dPhi__1642->SetBinContent(28,0.09786616);
   VH_DHZfirst_Z_dPhi__1642->SetBinContent(30,0.1305371);
   VH_DHZfirst_Z_dPhi__1642->SetBinContent(31,0.1009224);
   VH_DHZfirst_Z_dPhi__1642->SetBinContent(33,0.2100194);
   VH_DHZfirst_Z_dPhi__1642->SetBinContent(34,0.1398092);
   VH_DHZfirst_Z_dPhi__1642->SetBinContent(36,0.08639985);
   VH_DHZfirst_Z_dPhi__1642->SetBinContent(46,0.1004705);
   VH_DHZfirst_Z_dPhi__1642->SetBinContent(49,0.09560785);
   VH_DHZfirst_Z_dPhi__1642->SetBinContent(54,0.08282056);
   VH_DHZfirst_Z_dPhi__1642->SetBinContent(58,0.1563058);
   VH_DHZfirst_Z_dPhi__1642->SetBinContent(59,0.09059202);
   VH_DHZfirst_Z_dPhi__1642->SetBinContent(61,0.04436451);
   VH_DHZfirst_Z_dPhi__1642->SetBinContent(64,0.1173713);
   VH_DHZfirst_Z_dPhi__1642->SetBinContent(67,0.1525484);
   VH_DHZfirst_Z_dPhi__1642->SetBinContent(68,0.1141277);
   VH_DHZfirst_Z_dPhi__1642->SetBinContent(77,0.156345);
   VH_DHZfirst_Z_dPhi__1642->SetBinContent(78,0.09667504);
   VH_DHZfirst_Z_dPhi__1642->SetBinContent(81,0.1323306);
   VH_DHZfirst_Z_dPhi__1642->SetBinContent(93,0.09361321);
   VH_DHZfirst_Z_dPhi__1642->SetBinError(0,0.6269298);
   VH_DHZfirst_Z_dPhi__1642->SetBinError(1,0.0875332);
   VH_DHZfirst_Z_dPhi__1642->SetBinError(3,0.1055527);
   VH_DHZfirst_Z_dPhi__1642->SetBinError(4,0.1579972);
   VH_DHZfirst_Z_dPhi__1642->SetBinError(6,0.1279518);
   VH_DHZfirst_Z_dPhi__1642->SetBinError(10,0.1372332);
   VH_DHZfirst_Z_dPhi__1642->SetBinError(11,0.08571826);
   VH_DHZfirst_Z_dPhi__1642->SetBinError(12,0.1162515);
   VH_DHZfirst_Z_dPhi__1642->SetBinError(14,0.1467475);
   VH_DHZfirst_Z_dPhi__1642->SetBinError(17,0.1036831);
   VH_DHZfirst_Z_dPhi__1642->SetBinError(19,0.1499118);
   VH_DHZfirst_Z_dPhi__1642->SetBinError(24,0.07443615);
   VH_DHZfirst_Z_dPhi__1642->SetBinError(25,0.06869593);
   VH_DHZfirst_Z_dPhi__1642->SetBinError(28,0.09786616);
   VH_DHZfirst_Z_dPhi__1642->SetBinError(30,0.1305371);
   VH_DHZfirst_Z_dPhi__1642->SetBinError(31,0.1009224);
   VH_DHZfirst_Z_dPhi__1642->SetBinError(33,0.1498292);
   VH_DHZfirst_Z_dPhi__1642->SetBinError(34,0.1398092);
   VH_DHZfirst_Z_dPhi__1642->SetBinError(36,0.08639985);
   VH_DHZfirst_Z_dPhi__1642->SetBinError(46,0.1004705);
   VH_DHZfirst_Z_dPhi__1642->SetBinError(49,0.09560785);
   VH_DHZfirst_Z_dPhi__1642->SetBinError(54,0.08282056);
   VH_DHZfirst_Z_dPhi__1642->SetBinError(58,0.1563058);
   VH_DHZfirst_Z_dPhi__1642->SetBinError(59,0.09059202);
   VH_DHZfirst_Z_dPhi__1642->SetBinError(61,0.04436451);
   VH_DHZfirst_Z_dPhi__1642->SetBinError(64,0.1173713);
   VH_DHZfirst_Z_dPhi__1642->SetBinError(67,0.1525484);
   VH_DHZfirst_Z_dPhi__1642->SetBinError(68,0.1141277);
   VH_DHZfirst_Z_dPhi__1642->SetBinError(77,0.156345);
   VH_DHZfirst_Z_dPhi__1642->SetBinError(78,0.09667504);
   VH_DHZfirst_Z_dPhi__1642->SetBinError(81,0.1323306);
   VH_DHZfirst_Z_dPhi__1642->SetBinError(93,0.09361321);
   VH_DHZfirst_Z_dPhi__1642->SetEntries(67);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dPhi__1642->SetLineColor(ci);
   VH_DHZfirst_Z_dPhi__1642->GetXaxis()->SetTitle("#Delta#phi(b,b)");
   VH_DHZfirst_Z_dPhi__1642->GetXaxis()->SetRange(1,120);
   VH_DHZfirst_Z_dPhi__1642->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dPhi__1642->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dPhi__1642->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dPhi__1642->GetYaxis()->SetTitle("Events/0.033");
   VH_DHZfirst_Z_dPhi__1642->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dPhi__1642->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dPhi__1642->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dPhi__1642->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dPhi__1642->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dPhi__1642->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dPhi__1642->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dPhi__1642->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dPhi__1642->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dPhi_WW_DHZfirst_16->Modified();
   Z_dPhi_WW_DHZfirst_16->cd();
   Z_dPhi_WW_DHZfirst_16->SetSelected(Z_dPhi_WW_DHZfirst_16);
}
