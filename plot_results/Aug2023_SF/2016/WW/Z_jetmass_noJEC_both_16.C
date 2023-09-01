#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_noJEC_both_16()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_both_16/Z_jetmass_noJEC_both_16
//=========  (Fri Sep  1 13:23:46 2023) by ROOT version 6.28/04
   TCanvas *Z_jetmass_noJEC_both_16 = new TCanvas("Z_jetmass_noJEC_both_16", "Z_jetmass_noJEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_both_16->SetHighLightColor(2);
   Z_jetmass_noJEC_both_16->Range(-60,-0.0327393,340,0.2946536);
   Z_jetmass_noJEC_both_16->SetFillColor(0);
   Z_jetmass_noJEC_both_16->SetBorderMode(0);
   Z_jetmass_noJEC_both_16->SetBorderSize(2);
   Z_jetmass_noJEC_both_16->SetLeftMargin(0.15);
   Z_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   Z_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_noJEC__1059 = new TH1D("VbbHcc_both_Z_jetmass_noJEC__1059","",150,0,300);
   VbbHcc_both_Z_jetmass_noJEC__1059->SetBinContent(3,0.1147185);
   VbbHcc_both_Z_jetmass_noJEC__1059->SetBinContent(4,0.2494422);
   VbbHcc_both_Z_jetmass_noJEC__1059->SetBinContent(5,0.2117892);
   VbbHcc_both_Z_jetmass_noJEC__1059->SetBinContent(6,0.09694687);
   VbbHcc_both_Z_jetmass_noJEC__1059->SetBinContent(7,0.2342275);
   VbbHcc_both_Z_jetmass_noJEC__1059->SetBinContent(8,0.1407098);
   VbbHcc_both_Z_jetmass_noJEC__1059->SetBinContent(15,0.1080661);
   VbbHcc_both_Z_jetmass_noJEC__1059->SetBinContent(16,0.1002972);
   VbbHcc_both_Z_jetmass_noJEC__1059->SetBinError(3,0.1147185);
   VbbHcc_both_Z_jetmass_noJEC__1059->SetBinError(4,0.1768302);
   VbbHcc_both_Z_jetmass_noJEC__1059->SetBinError(5,0.1497922);
   VbbHcc_both_Z_jetmass_noJEC__1059->SetBinError(6,0.09694687);
   VbbHcc_both_Z_jetmass_noJEC__1059->SetBinError(7,0.1672726);
   VbbHcc_both_Z_jetmass_noJEC__1059->SetBinError(8,0.1407098);
   VbbHcc_both_Z_jetmass_noJEC__1059->SetBinError(15,0.1080661);
   VbbHcc_both_Z_jetmass_noJEC__1059->SetBinError(16,0.1002972);
   VbbHcc_both_Z_jetmass_noJEC__1059->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_jetmass_noJEC__1059->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_noJEC__1059->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_both_Z_jetmass_noJEC__1059->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_noJEC__1059->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC__1059->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_jetmass_noJEC__1059->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC__1059->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC__1059->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC__1059->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC__1059->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_jetmass_noJEC__1059->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC__1059->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_both_16->Modified();
   Z_jetmass_noJEC_both_16->cd();
   Z_jetmass_noJEC_both_16->SetSelected(Z_jetmass_noJEC_both_16);
}
