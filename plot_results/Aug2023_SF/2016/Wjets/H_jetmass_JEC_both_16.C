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
   H_jetmass_JEC_both_16->Range(-60,-19.51775,340,175.6598);
   H_jetmass_JEC_both_16->SetFillColor(0);
   H_jetmass_JEC_both_16->SetBorderMode(0);
   H_jetmass_JEC_both_16->SetBorderSize(2);
   H_jetmass_JEC_both_16->SetLeftMargin(0.15);
   H_jetmass_JEC_both_16->SetFrameBorderMode(0);
   H_jetmass_JEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_JEC__1013 = new TH1D("VbbHcc_both_H_jetmass_JEC__1013","",150,0,300);
   VbbHcc_both_H_jetmass_JEC__1013->SetBinContent(2,30.70855);
   VbbHcc_both_H_jetmass_JEC__1013->SetBinContent(3,148.7067);
   VbbHcc_both_H_jetmass_JEC__1013->SetBinError(2,5.643004);
   VbbHcc_both_H_jetmass_JEC__1013->SetBinError(3,7.041071);
   VbbHcc_both_H_jetmass_JEC__1013->SetEntries(3785);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_jetmass_JEC__1013->SetFillColor(ci);
   VbbHcc_both_H_jetmass_JEC__1013->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_H_jetmass_JEC__1013->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetmass_JEC__1013->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC__1013->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetmass_JEC__1013->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC__1013->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC__1013->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC__1013->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC__1013->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetmass_JEC__1013->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC__1013->Draw("HIST");
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
