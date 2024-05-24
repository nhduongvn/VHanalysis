#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_ZJets_tagFirst_18_logY()
{
//=========Macro generated from canvas: Z_dR_ZJets_tagFirst_18/Z_dR_ZJets_tagFirst_18
//=========  (Thu May 23 20:48:28 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_ZJets_tagFirst_18 = new TCanvas("Z_dR_ZJets_tagFirst_18", "Z_dR_ZJets_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_ZJets_tagFirst_18->SetHighLightColor(2);
   Z_dR_ZJets_tagFirst_18->Range(-1.2,-1.314003,6.8,4.333247);
   Z_dR_ZJets_tagFirst_18->SetFillColor(0);
   Z_dR_ZJets_tagFirst_18->SetFillStyle(4000);
   Z_dR_ZJets_tagFirst_18->SetBorderMode(0);
   Z_dR_ZJets_tagFirst_18->SetBorderSize(2);
   Z_dR_ZJets_tagFirst_18->SetLogy();
   Z_dR_ZJets_tagFirst_18->SetLeftMargin(0.15);
   Z_dR_ZJets_tagFirst_18->SetFrameFillStyle(1000);
   Z_dR_ZJets_tagFirst_18->SetFrameBorderMode(0);
   Z_dR_ZJets_tagFirst_18->SetFrameFillStyle(1000);
   Z_dR_ZJets_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Z_dR__135 = new TH1D("VH_tagFirst_Z_dR__135","",30,0,6);
   VH_tagFirst_Z_dR__135->SetBinContent(2,0.3562475);
   VH_tagFirst_Z_dR__135->SetBinContent(3,2192.846);
   VH_tagFirst_Z_dR__135->SetBinContent(4,3097.227);
   VH_tagFirst_Z_dR__135->SetBinContent(5,2583.962);
   VH_tagFirst_Z_dR__135->SetBinContent(6,2017.191);
   VH_tagFirst_Z_dR__135->SetBinContent(7,1395.837);
   VH_tagFirst_Z_dR__135->SetBinContent(8,1015.875);
   VH_tagFirst_Z_dR__135->SetBinContent(9,833.5855);
   VH_tagFirst_Z_dR__135->SetBinContent(10,784.8435);
   VH_tagFirst_Z_dR__135->SetBinContent(11,781.0373);
   VH_tagFirst_Z_dR__135->SetBinContent(12,732.7143);
   VH_tagFirst_Z_dR__135->SetBinContent(13,796.9781);
   VH_tagFirst_Z_dR__135->SetBinContent(14,865.27);
   VH_tagFirst_Z_dR__135->SetBinContent(15,927.1385);
   VH_tagFirst_Z_dR__135->SetBinContent(16,948.7348);
   VH_tagFirst_Z_dR__135->SetBinContent(17,933.885);
   VH_tagFirst_Z_dR__135->SetBinContent(18,858.0794);
   VH_tagFirst_Z_dR__135->SetBinContent(19,801.4359);
   VH_tagFirst_Z_dR__135->SetBinContent(20,698.1674);
   VH_tagFirst_Z_dR__135->SetBinContent(21,564.5998);
   VH_tagFirst_Z_dR__135->SetBinContent(22,483.6474);
   VH_tagFirst_Z_dR__135->SetBinContent(23,402.5595);
   VH_tagFirst_Z_dR__135->SetBinContent(24,348.5939);
   VH_tagFirst_Z_dR__135->SetBinContent(25,318.8423);
   VH_tagFirst_Z_dR__135->SetBinContent(26,342.0523);
   VH_tagFirst_Z_dR__135->SetBinContent(27,334.3102);
   VH_tagFirst_Z_dR__135->SetBinContent(28,364.6256);
   VH_tagFirst_Z_dR__135->SetBinContent(29,331.0017);
   VH_tagFirst_Z_dR__135->SetBinContent(30,222.7362);
   VH_tagFirst_Z_dR__135->SetBinContent(31,127.298);
   VH_tagFirst_Z_dR__135->SetBinError(2,0.2097473);
   VH_tagFirst_Z_dR__135->SetBinError(3,35.56012);
   VH_tagFirst_Z_dR__135->SetBinError(4,42.90818);
   VH_tagFirst_Z_dR__135->SetBinError(5,45.05078);
   VH_tagFirst_Z_dR__135->SetBinError(6,50.5253);
   VH_tagFirst_Z_dR__135->SetBinError(7,39.55859);
   VH_tagFirst_Z_dR__135->SetBinError(8,32.21512);
   VH_tagFirst_Z_dR__135->SetBinError(9,28.77033);
   VH_tagFirst_Z_dR__135->SetBinError(10,30.76084);
   VH_tagFirst_Z_dR__135->SetBinError(11,31.31869);
   VH_tagFirst_Z_dR__135->SetBinError(12,23.27689);
   VH_tagFirst_Z_dR__135->SetBinError(13,25.80119);
   VH_tagFirst_Z_dR__135->SetBinError(14,25.33568);
   VH_tagFirst_Z_dR__135->SetBinError(15,28.27346);
   VH_tagFirst_Z_dR__135->SetBinError(16,31.68262);
   VH_tagFirst_Z_dR__135->SetBinError(17,36.54541);
   VH_tagFirst_Z_dR__135->SetBinError(18,29.45988);
   VH_tagFirst_Z_dR__135->SetBinError(19,34.39608);
   VH_tagFirst_Z_dR__135->SetBinError(20,29.31623);
   VH_tagFirst_Z_dR__135->SetBinError(21,26.14854);
   VH_tagFirst_Z_dR__135->SetBinError(22,19.09133);
   VH_tagFirst_Z_dR__135->SetBinError(23,18.96026);
   VH_tagFirst_Z_dR__135->SetBinError(24,16.06657);
   VH_tagFirst_Z_dR__135->SetBinError(25,16.33078);
   VH_tagFirst_Z_dR__135->SetBinError(26,15.67843);
   VH_tagFirst_Z_dR__135->SetBinError(27,21.0817);
   VH_tagFirst_Z_dR__135->SetBinError(28,19.26936);
   VH_tagFirst_Z_dR__135->SetBinError(29,16.31154);
   VH_tagFirst_Z_dR__135->SetBinError(30,12.13894);
   VH_tagFirst_Z_dR__135->SetBinError(31,9.337143);
   VH_tagFirst_Z_dR__135->SetEntries(94686);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_dR__135->SetLineColor(ci);
   VH_tagFirst_Z_dR__135->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_tagFirst_Z_dR__135->GetXaxis()->SetRange(1,30);
   VH_tagFirst_Z_dR__135->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR__135->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_dR__135->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR__135->GetYaxis()->SetTitle("Events/0.2");
   VH_tagFirst_Z_dR__135->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR__135->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Z_dR__135->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Z_dR__135->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Z_dR__135->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR__135->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR__135->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_dR__135->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR__135->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_ZJets_tagFirst_18->Modified();
   Z_dR_ZJets_tagFirst_18->cd();
   Z_dR_ZJets_tagFirst_18->SetSelected(Z_dR_ZJets_tagFirst_18);
}
