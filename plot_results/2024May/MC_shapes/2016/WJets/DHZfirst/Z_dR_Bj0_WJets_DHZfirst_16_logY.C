#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_WJets_DHZfirst_16_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_WJets_DHZfirst_16/Z_dR_Bj0_WJets_DHZfirst_16
//=========  (Thu May 23 20:48:50 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_Bj0_WJets_DHZfirst_16 = new TCanvas("Z_dR_Bj0_WJets_DHZfirst_16", "Z_dR_Bj0_WJets_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_WJets_DHZfirst_16->SetHighLightColor(2);
   Z_dR_Bj0_WJets_DHZfirst_16->Range(-1.2,-1.979062,6.8,3.420989);
   Z_dR_Bj0_WJets_DHZfirst_16->SetFillColor(0);
   Z_dR_Bj0_WJets_DHZfirst_16->SetFillStyle(4000);
   Z_dR_Bj0_WJets_DHZfirst_16->SetBorderMode(0);
   Z_dR_Bj0_WJets_DHZfirst_16->SetBorderSize(2);
   Z_dR_Bj0_WJets_DHZfirst_16->SetLogy();
   Z_dR_Bj0_WJets_DHZfirst_16->SetLeftMargin(0.15);
   Z_dR_Bj0_WJets_DHZfirst_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_WJets_DHZfirst_16->SetFrameBorderMode(0);
   Z_dR_Bj0_WJets_DHZfirst_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_WJets_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dR_Bj0__1810 = new TH1D("VH_DHZfirst_Z_dR_Bj0__1810","",30,0,6);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinContent(1,151.9659);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinContent(2,401.2681);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinContent(3,270.1675);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinContent(4,175.9973);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinContent(5,95.30618);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinContent(6,78.60417);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinContent(7,33.49815);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinContent(8,25.15128);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinContent(9,24.46336);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinContent(10,27.57414);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinContent(11,12.87428);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinContent(12,20.3065);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinContent(13,7.564118);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinContent(14,7.896287);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinContent(15,4.712848);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinContent(16,18.18276);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinContent(17,10.22987);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinContent(18,5.796247);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinContent(19,2.178288);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinContent(20,6.235673);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinContent(21,1.716399);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinContent(22,0.09662706);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinContent(24,0.2444655);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinContent(25,0.4240376);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinContent(26,0.6792858);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinContent(27,0.07277346);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinContent(31,0.1361062);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinError(1,11.28055);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinError(2,22.85125);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinError(3,24.06509);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinError(4,20.10633);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinError(5,13.79556);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinError(6,13.4265);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinError(7,7.193554);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinError(8,4.056738);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinError(9,6.978216);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinError(10,10.82484);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinError(11,6.238904);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinError(12,8.864329);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinError(13,2.190385);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinError(14,2.245062);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinError(15,1.272408);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinError(16,8.742295);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinError(17,6.196673);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinError(18,1.905236);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinError(19,1.084048);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinError(20,2.148815);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinError(21,1.113588);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinError(22,0.07404258);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinError(24,0.1864783);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinError(25,0.2536029);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinError(26,0.414298);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinError(27,0.07277346);
   VH_DHZfirst_Z_dR_Bj0__1810->SetBinError(31,0.09647285);
   VH_DHZfirst_Z_dR_Bj0__1810->SetEntries(9167);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dR_Bj0__1810->SetLineColor(ci);
   VH_DHZfirst_Z_dR_Bj0__1810->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VH_DHZfirst_Z_dR_Bj0__1810->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_dR_Bj0__1810->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj0__1810->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj0__1810->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj0__1810->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_Z_dR_Bj0__1810->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj0__1810->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dR_Bj0__1810->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dR_Bj0__1810->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dR_Bj0__1810->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj0__1810->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj0__1810->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj0__1810->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj0__1810->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_WJets_DHZfirst_16->Modified();
   Z_dR_Bj0_WJets_DHZfirst_16->cd();
   Z_dR_Bj0_WJets_DHZfirst_16->SetSelected(Z_dR_Bj0_WJets_DHZfirst_16);
}
