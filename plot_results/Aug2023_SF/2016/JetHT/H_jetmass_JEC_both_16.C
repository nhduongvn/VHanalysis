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
   H_jetmass_JEC_both_16->Range(-60,-8953.088,340,80577.79);
   H_jetmass_JEC_both_16->SetFillColor(0);
   H_jetmass_JEC_both_16->SetBorderMode(0);
   H_jetmass_JEC_both_16->SetBorderSize(2);
   H_jetmass_JEC_both_16->SetLeftMargin(0.15);
   H_jetmass_JEC_both_16->SetFrameBorderMode(0);
   H_jetmass_JEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_JEC__1008 = new TH1D("VbbHcc_both_H_jetmass_JEC__1008","",150,0,300);
   VbbHcc_both_H_jetmass_JEC__1008->SetBinContent(1,1);
   VbbHcc_both_H_jetmass_JEC__1008->SetBinContent(2,31276);
   VbbHcc_both_H_jetmass_JEC__1008->SetBinContent(3,68214);
   VbbHcc_both_H_jetmass_JEC__1008->SetEntries(99491);
   VbbHcc_both_H_jetmass_JEC__1008->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_H_jetmass_JEC__1008->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetmass_JEC__1008->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC__1008->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetmass_JEC__1008->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC__1008->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC__1008->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC__1008->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC__1008->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetmass_JEC__1008->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC__1008->Draw("HIST");
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
