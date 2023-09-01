#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_JEC_both_16()
{
//=========Macro generated from canvas: H_jetmass_JEC_both_16/H_jetmass_JEC_both_16
//=========  (Fri Sep  1 13:23:45 2023) by ROOT version 6.28/04
   TCanvas *H_jetmass_JEC_both_16 = new TCanvas("H_jetmass_JEC_both_16", "H_jetmass_JEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_both_16->SetHighLightColor(2);
   H_jetmass_JEC_both_16->Range(-60,-46.84892,340,421.6402);
   H_jetmass_JEC_both_16->SetFillColor(0);
   H_jetmass_JEC_both_16->SetBorderMode(0);
   H_jetmass_JEC_both_16->SetBorderSize(2);
   H_jetmass_JEC_both_16->SetLeftMargin(0.15);
   H_jetmass_JEC_both_16->SetFrameBorderMode(0);
   H_jetmass_JEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_JEC__1010 = new TH1D("VbbHcc_both_H_jetmass_JEC__1010","",150,0,300);
   VbbHcc_both_H_jetmass_JEC__1010->SetBinContent(2,356.9441);
   VbbHcc_both_H_jetmass_JEC__1010->SetBinContent(3,266.4076);
   VbbHcc_both_H_jetmass_JEC__1010->SetBinError(2,7.662774);
   VbbHcc_both_H_jetmass_JEC__1010->SetBinError(3,6.247088);
   VbbHcc_both_H_jetmass_JEC__1010->SetEntries(9878);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_jetmass_JEC__1010->SetFillColor(ci);
   VbbHcc_both_H_jetmass_JEC__1010->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_H_jetmass_JEC__1010->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetmass_JEC__1010->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC__1010->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetmass_JEC__1010->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC__1010->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC__1010->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC__1010->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC__1010->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetmass_JEC__1010->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC__1010->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_both_16->Modified();
   H_jetmass_JEC_both_16->cd();
   H_jetmass_JEC_both_16->SetSelected(H_jetmass_JEC_both_16);
}
