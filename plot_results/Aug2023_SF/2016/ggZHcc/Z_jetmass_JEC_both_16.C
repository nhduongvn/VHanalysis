#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_both_16()
{
//=========Macro generated from canvas: Z_jetmass_JEC_both_16/Z_jetmass_JEC_both_16
//=========  (Fri Sep  1 13:23:46 2023) by ROOT version 6.28/04
   TCanvas *Z_jetmass_JEC_both_16 = new TCanvas("Z_jetmass_JEC_both_16", "Z_jetmass_JEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_both_16->SetHighLightColor(2);
   Z_jetmass_JEC_both_16->Range(-60,-0.00112046,340,0.01008414);
   Z_jetmass_JEC_both_16->SetFillColor(0);
   Z_jetmass_JEC_both_16->SetBorderMode(0);
   Z_jetmass_JEC_both_16->SetBorderSize(2);
   Z_jetmass_JEC_both_16->SetLeftMargin(0.15);
   Z_jetmass_JEC_both_16->SetFrameBorderMode(0);
   Z_jetmass_JEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_JEC__1080 = new TH1D("VbbHcc_both_Z_jetmass_JEC__1080","",150,0,300);
   VbbHcc_both_Z_jetmass_JEC__1080->SetBinContent(3,0.0002711974);
   VbbHcc_both_Z_jetmass_JEC__1080->SetBinContent(4,0.002378211);
   VbbHcc_both_Z_jetmass_JEC__1080->SetBinContent(5,0.005976603);
   VbbHcc_both_Z_jetmass_JEC__1080->SetBinContent(6,0.008536837);
   VbbHcc_both_Z_jetmass_JEC__1080->SetBinContent(7,0.005127372);
   VbbHcc_both_Z_jetmass_JEC__1080->SetBinContent(8,0.004906797);
   VbbHcc_both_Z_jetmass_JEC__1080->SetBinContent(9,0.004306447);
   VbbHcc_both_Z_jetmass_JEC__1080->SetBinContent(10,0.001896995);
   VbbHcc_both_Z_jetmass_JEC__1080->SetBinContent(11,0.002160247);
   VbbHcc_both_Z_jetmass_JEC__1080->SetBinContent(12,0.001136416);
   VbbHcc_both_Z_jetmass_JEC__1080->SetBinContent(14,0.0002765116);
   VbbHcc_both_Z_jetmass_JEC__1080->SetBinContent(16,0.0008605133);
   VbbHcc_both_Z_jetmass_JEC__1080->SetBinContent(17,0.0002816317);
   VbbHcc_both_Z_jetmass_JEC__1080->SetBinContent(18,0.000263898);
   VbbHcc_both_Z_jetmass_JEC__1080->SetBinContent(21,0.0003478785);
   VbbHcc_both_Z_jetmass_JEC__1080->SetBinContent(23,0.0003370889);
   VbbHcc_both_Z_jetmass_JEC__1080->SetBinError(3,0.0002711974);
   VbbHcc_both_Z_jetmass_JEC__1080->SetBinError(4,0.0008452911);
   VbbHcc_both_Z_jetmass_JEC__1080->SetBinError(5,0.001321821);
   VbbHcc_both_Z_jetmass_JEC__1080->SetBinError(6,0.001609744);
   VbbHcc_both_Z_jetmass_JEC__1080->SetBinError(7,0.001194447);
   VbbHcc_both_Z_jetmass_JEC__1080->SetBinError(8,0.001179126);
   VbbHcc_both_Z_jetmass_JEC__1080->SetBinError(9,0.001117932);
   VbbHcc_both_Z_jetmass_JEC__1080->SetBinError(10,0.0007340622);
   VbbHcc_both_Z_jetmass_JEC__1080->SetBinError(11,0.0008212957);
   VbbHcc_both_Z_jetmass_JEC__1080->SetBinError(12,0.0005777959);
   VbbHcc_both_Z_jetmass_JEC__1080->SetBinError(14,0.0002765116);
   VbbHcc_both_Z_jetmass_JEC__1080->SetBinError(16,0.0004970191);
   VbbHcc_both_Z_jetmass_JEC__1080->SetBinError(17,0.0002816317);
   VbbHcc_both_Z_jetmass_JEC__1080->SetBinError(18,0.000263898);
   VbbHcc_both_Z_jetmass_JEC__1080->SetBinError(21,0.0003478785);
   VbbHcc_both_Z_jetmass_JEC__1080->SetBinError(23,0.0003370889);
   VbbHcc_both_Z_jetmass_JEC__1080->SetEntries(137);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_jetmass_JEC__1080->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_JEC__1080->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_Z_jetmass_JEC__1080->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_JEC__1080->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC__1080->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_jetmass_JEC__1080->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC__1080->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC__1080->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC__1080->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC__1080->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_jetmass_JEC__1080->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC__1080->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_both_16->Modified();
   Z_jetmass_JEC_both_16->cd();
   Z_jetmass_JEC_both_16->SetSelected(Z_jetmass_JEC_both_16);
}
