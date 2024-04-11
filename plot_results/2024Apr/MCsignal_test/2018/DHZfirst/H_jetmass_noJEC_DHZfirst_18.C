#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_noJEC_DHZfirst_18()
{
//=========Macro generated from canvas: H_jetmass_noJEC_DHZfirst_18/H_jetmass_noJEC_DHZfirst_18
//=========  (Thu Apr 11 14:04:09 2024) by ROOT version 6.28/10
   TCanvas *H_jetmass_noJEC_DHZfirst_18 = new TCanvas("H_jetmass_noJEC_DHZfirst_18", "H_jetmass_noJEC_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_DHZfirst_18->SetHighLightColor(2);
   H_jetmass_noJEC_DHZfirst_18->Range(-60,-23929.94,340,215369.4);
   H_jetmass_noJEC_DHZfirst_18->SetFillColor(0);
   H_jetmass_noJEC_DHZfirst_18->SetFillStyle(4000);
   H_jetmass_noJEC_DHZfirst_18->SetBorderMode(0);
   H_jetmass_noJEC_DHZfirst_18->SetBorderSize(2);
   H_jetmass_noJEC_DHZfirst_18->SetLeftMargin(0.15);
   H_jetmass_noJEC_DHZfirst_18->SetFrameFillStyle(1000);
   H_jetmass_noJEC_DHZfirst_18->SetFrameBorderMode(0);
   H_jetmass_noJEC_DHZfirst_18->SetFrameFillStyle(1000);
   H_jetmass_noJEC_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_jetmass_noJEC__67 = new TH1D("VH_DHZfirst_H_jetmass_noJEC__67","",150,0,300);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(5,1355.752);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(7,182323.3);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(8,8534.615);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(9,2247.136);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(10,1510.097);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(11,29976.42);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(12,2633.04);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(13,17258.59);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(15,2335.452);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(16,12607.78);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(17,16503.21);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(18,693.8003);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(20,553.9288);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(22,657.9523);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(24,1511.539);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(28,739.995);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(30,554.4667);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(31,662.8817);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(40,877.3532);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(44,300.7386);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(5,979.6892);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(7,179218.3);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(8,5681.534);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(9,1130.011);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(10,1117.302);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(11,21028.37);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(12,1473.193);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(13,11246.18);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(15,1383.683);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(16,11085.15);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(17,14590.83);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(18,693.8003);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(20,553.9288);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(22,657.9523);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(24,1079.111);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(28,739.995);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(30,554.4667);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(31,662.8817);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(40,877.3532);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(44,300.7386);
   VH_DHZfirst_H_jetmass_noJEC__67->SetEntries(46);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_jetmass_noJEC__67->SetLineColor(ci);
   VH_DHZfirst_H_jetmass_noJEC__67->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VH_DHZfirst_H_jetmass_noJEC__67->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_H_jetmass_noJEC__67->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_noJEC__67->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_jetmass_noJEC__67->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_noJEC__67->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_H_jetmass_noJEC__67->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_noJEC__67->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_jetmass_noJEC__67->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_jetmass_noJEC__67->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_jetmass_noJEC__67->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_noJEC__67->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_noJEC__67->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_jetmass_noJEC__67->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_noJEC__67->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_DHZfirst_18->Modified();
   H_jetmass_noJEC_DHZfirst_18->cd();
   H_jetmass_noJEC_DHZfirst_18->SetSelected(H_jetmass_noJEC_DHZfirst_18);
}
