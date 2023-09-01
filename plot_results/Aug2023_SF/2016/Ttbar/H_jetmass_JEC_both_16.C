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
   H_jetmass_JEC_both_16->Range(-60,-1071.357,340,9642.216);
   H_jetmass_JEC_both_16->SetFillColor(0);
   H_jetmass_JEC_both_16->SetBorderMode(0);
   H_jetmass_JEC_both_16->SetBorderSize(2);
   H_jetmass_JEC_both_16->SetLeftMargin(0.15);
   H_jetmass_JEC_both_16->SetFrameBorderMode(0);
   H_jetmass_JEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_JEC__1011 = new TH1D("VbbHcc_both_H_jetmass_JEC__1011","",150,0,300);
   VbbHcc_both_H_jetmass_JEC__1011->SetBinContent(1,0.1117842);
   VbbHcc_both_H_jetmass_JEC__1011->SetBinContent(2,8162.723);
   VbbHcc_both_H_jetmass_JEC__1011->SetBinContent(3,4339.175);
   VbbHcc_both_H_jetmass_JEC__1011->SetBinContent(151,0.06640516);
   VbbHcc_both_H_jetmass_JEC__1011->SetBinError(1,0.08253758);
   VbbHcc_both_H_jetmass_JEC__1011->SetBinError(2,21.4509);
   VbbHcc_both_H_jetmass_JEC__1011->SetBinError(3,15.54582);
   VbbHcc_both_H_jetmass_JEC__1011->SetBinError(151,0.06640516);
   VbbHcc_both_H_jetmass_JEC__1011->SetEntries(244052);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_jetmass_JEC__1011->SetFillColor(ci);
   VbbHcc_both_H_jetmass_JEC__1011->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_H_jetmass_JEC__1011->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetmass_JEC__1011->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC__1011->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetmass_JEC__1011->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC__1011->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC__1011->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC__1011->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC__1011->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetmass_JEC__1011->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC__1011->Draw("HIST");
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
