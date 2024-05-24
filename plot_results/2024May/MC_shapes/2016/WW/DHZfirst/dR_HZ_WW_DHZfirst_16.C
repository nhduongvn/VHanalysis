#ifdef __CLING__
#pragma cling optimize(0)
#endif
void dR_HZ_WW_DHZfirst_16()
{
//=========Macro generated from canvas: dR_HZ_WW_DHZfirst_16/dR_HZ_WW_DHZfirst_16
//=========  (Fri May 24 12:42:30 2024) by ROOT version 6.28/10
   TCanvas *dR_HZ_WW_DHZfirst_16 = new TCanvas("dR_HZ_WW_DHZfirst_16", "dR_HZ_WW_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   dR_HZ_WW_DHZfirst_16->SetHighLightColor(2);
   dR_HZ_WW_DHZfirst_16->Range(-1.22,-0.1036356,6.913333,0.9327205);
   dR_HZ_WW_DHZfirst_16->SetFillColor(0);
   dR_HZ_WW_DHZfirst_16->SetFillStyle(4000);
   dR_HZ_WW_DHZfirst_16->SetBorderMode(0);
   dR_HZ_WW_DHZfirst_16->SetBorderSize(2);
   dR_HZ_WW_DHZfirst_16->SetLeftMargin(0.15);
   dR_HZ_WW_DHZfirst_16->SetFrameFillStyle(1000);
   dR_HZ_WW_DHZfirst_16->SetFrameBorderMode(0);
   dR_HZ_WW_DHZfirst_16->SetFrameFillStyle(1000);
   dR_HZ_WW_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_dR_HZ__1732 = new TH1D("VH_DHZfirst_dR_HZ__1732","",60,0,6);
   VH_DHZfirst_dR_HZ__1732->SetBinContent(3,0.1140604);
   VH_DHZfirst_dR_HZ__1732->SetBinContent(11,0.1810637);
   VH_DHZfirst_dR_HZ__1732->SetBinContent(14,0.2269846);
   VH_DHZfirst_dR_HZ__1732->SetBinContent(16,0.08282056);
   VH_DHZfirst_dR_HZ__1732->SetBinContent(18,0.09059202);
   VH_DHZfirst_dR_HZ__1732->SetBinContent(21,0.09667504);
   VH_DHZfirst_dR_HZ__1732->SetBinContent(22,0.5001944);
   VH_DHZfirst_dR_HZ__1732->SetBinContent(23,0.1305371);
   VH_DHZfirst_dR_HZ__1732->SetBinContent(25,0.1074781);
   VH_DHZfirst_dR_HZ__1732->SetBinContent(27,0.1162515);
   VH_DHZfirst_dR_HZ__1732->SetBinContent(28,0.4577557);
   VH_DHZfirst_dR_HZ__1732->SetBinContent(29,0.1036831);
   VH_DHZfirst_dR_HZ__1732->SetBinContent(30,0.2169139);
   VH_DHZfirst_dR_HZ__1732->SetBinContent(31,0.6000722);
   VH_DHZfirst_dR_HZ__1732->SetBinContent(32,0.3581175);
   VH_DHZfirst_dR_HZ__1732->SetBinContent(33,0.7896046);
   VH_DHZfirst_dR_HZ__1732->SetBinContent(34,0.4773545);
   VH_DHZfirst_dR_HZ__1732->SetBinContent(35,0.2258481);
   VH_DHZfirst_dR_HZ__1732->SetBinContent(36,0.1935155);
   VH_DHZfirst_dR_HZ__1732->SetBinContent(37,0.5831459);
   VH_DHZfirst_dR_HZ__1732->SetBinContent(38,0.1052188);
   VH_DHZfirst_dR_HZ__1732->SetBinContent(39,0.130456);
   VH_DHZfirst_dR_HZ__1732->SetBinContent(40,0.1055527);
   VH_DHZfirst_dR_HZ__1732->SetBinContent(42,0.04436451);
   VH_DHZfirst_dR_HZ__1732->SetBinContent(43,0.09560785);
   VH_DHZfirst_dR_HZ__1732->SetBinContent(44,0.177538);
   VH_DHZfirst_dR_HZ__1732->SetBinContent(45,0.06522333);
   VH_DHZfirst_dR_HZ__1732->SetBinContent(46,0.1548599);
   VH_DHZfirst_dR_HZ__1732->SetBinContent(47,0.178103);
   VH_DHZfirst_dR_HZ__1732->SetBinContent(48,0.1052201);
   VH_DHZfirst_dR_HZ__1732->SetBinContent(50,0.1323306);
   VH_DHZfirst_dR_HZ__1732->SetBinContent(51,0.2774504);
   VH_DHZfirst_dR_HZ__1732->SetBinError(3,0.1140604);
   VH_DHZfirst_dR_HZ__1732->SetBinError(11,0.1317029);
   VH_DHZfirst_dR_HZ__1732->SetBinError(14,0.1697403);
   VH_DHZfirst_dR_HZ__1732->SetBinError(16,0.08282056);
   VH_DHZfirst_dR_HZ__1732->SetBinError(18,0.09059202);
   VH_DHZfirst_dR_HZ__1732->SetBinError(21,0.09667504);
   VH_DHZfirst_dR_HZ__1732->SetBinError(22,0.2522146);
   VH_DHZfirst_dR_HZ__1732->SetBinError(23,0.1305371);
   VH_DHZfirst_dR_HZ__1732->SetBinError(25,0.1074781);
   VH_DHZfirst_dR_HZ__1732->SetBinError(27,0.1162515);
   VH_DHZfirst_dR_HZ__1732->SetBinError(28,0.2347486);
   VH_DHZfirst_dR_HZ__1732->SetBinError(29,0.1036831);
   VH_DHZfirst_dR_HZ__1732->SetBinError(30,0.1537966);
   VH_DHZfirst_dR_HZ__1732->SetBinError(31,0.2494149);
   VH_DHZfirst_dR_HZ__1732->SetBinError(32,0.2108188);
   VH_DHZfirst_dR_HZ__1732->SetBinError(33,0.3014837);
   VH_DHZfirst_dR_HZ__1732->SetBinError(34,0.2399518);
   VH_DHZfirst_dR_HZ__1732->SetBinError(35,0.1604937);
   VH_DHZfirst_dR_HZ__1732->SetBinError(36,0.1369413);
   VH_DHZfirst_dR_HZ__1732->SetBinError(37,0.2651717);
   VH_DHZfirst_dR_HZ__1732->SetBinError(38,0.1052188);
   VH_DHZfirst_dR_HZ__1732->SetBinError(39,0.130456);
   VH_DHZfirst_dR_HZ__1732->SetBinError(40,0.1055527);
   VH_DHZfirst_dR_HZ__1732->SetBinError(42,0.04436451);
   VH_DHZfirst_dR_HZ__1732->SetBinError(43,0.09560785);
   VH_DHZfirst_dR_HZ__1732->SetBinError(44,0.1260447);
   VH_DHZfirst_dR_HZ__1732->SetBinError(45,0.06522333);
   VH_DHZfirst_dR_HZ__1732->SetBinError(46,0.1104308);
   VH_DHZfirst_dR_HZ__1732->SetBinError(47,0.1259668);
   VH_DHZfirst_dR_HZ__1732->SetBinError(48,0.1052201);
   VH_DHZfirst_dR_HZ__1732->SetBinError(50,0.1323306);
   VH_DHZfirst_dR_HZ__1732->SetBinError(51,0.1977632);
   VH_DHZfirst_dR_HZ__1732->SetEntries(67);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_dR_HZ__1732->SetLineColor(ci);
   VH_DHZfirst_dR_HZ__1732->GetXaxis()->SetTitle("#DeltaR_{ZH}");
   VH_DHZfirst_dR_HZ__1732->GetXaxis()->SetRange(1,61);
   VH_DHZfirst_dR_HZ__1732->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_dR_HZ__1732->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_dR_HZ__1732->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_dR_HZ__1732->GetYaxis()->SetTitle("Events/0.1");
   VH_DHZfirst_dR_HZ__1732->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_dR_HZ__1732->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_dR_HZ__1732->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_dR_HZ__1732->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_dR_HZ__1732->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_dR_HZ__1732->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_dR_HZ__1732->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_dR_HZ__1732->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_dR_HZ__1732->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dR_HZ_WW_DHZfirst_16->Modified();
   dR_HZ_WW_DHZfirst_16->cd();
   dR_HZ_WW_DHZfirst_16->SetSelected(dR_HZ_WW_DHZfirst_16);
}
