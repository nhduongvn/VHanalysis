#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_noJEC_both_16()
{
//=========Macro generated from canvas: H_jetmass_noJEC_both_16/H_jetmass_noJEC_both_16
//=========  (Fri Sep  1 13:23:45 2023) by ROOT version 6.28/04
   TCanvas *H_jetmass_noJEC_both_16 = new TCanvas("H_jetmass_noJEC_both_16", "H_jetmass_noJEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_both_16->SetHighLightColor(2);
   H_jetmass_noJEC_both_16->Range(-60,-0.05952412,340,0.535717);
   H_jetmass_noJEC_both_16->SetFillColor(0);
   H_jetmass_noJEC_both_16->SetBorderMode(0);
   H_jetmass_noJEC_both_16->SetBorderSize(2);
   H_jetmass_noJEC_both_16->SetLeftMargin(0.15);
   H_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   H_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_noJEC__999 = new TH1D("VbbHcc_both_H_jetmass_noJEC__999","",150,0,300);
   VbbHcc_both_H_jetmass_noJEC__999->SetBinContent(4,0.1336153);
   VbbHcc_both_H_jetmass_noJEC__999->SetBinContent(5,0.1080661);
   VbbHcc_both_H_jetmass_noJEC__999->SetBinContent(6,0.4535171);
   VbbHcc_both_H_jetmass_noJEC__999->SetBinContent(7,0.1158269);
   VbbHcc_both_H_jetmass_noJEC__999->SetBinContent(9,0.1005479);
   VbbHcc_both_H_jetmass_noJEC__999->SetBinContent(14,0.2443268);
   VbbHcc_both_H_jetmass_noJEC__999->SetBinContent(17,0.1002972);
   VbbHcc_both_H_jetmass_noJEC__999->SetBinError(4,0.1336153);
   VbbHcc_both_H_jetmass_noJEC__999->SetBinError(5,0.1080661);
   VbbHcc_both_H_jetmass_noJEC__999->SetBinError(6,0.228321);
   VbbHcc_both_H_jetmass_noJEC__999->SetBinError(7,0.1158269);
   VbbHcc_both_H_jetmass_noJEC__999->SetBinError(9,0.1005479);
   VbbHcc_both_H_jetmass_noJEC__999->SetBinError(14,0.1747448);
   VbbHcc_both_H_jetmass_noJEC__999->SetBinError(17,0.1002972);
   VbbHcc_both_H_jetmass_noJEC__999->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_jetmass_noJEC__999->SetFillColor(ci);
   VbbHcc_both_H_jetmass_noJEC__999->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VbbHcc_both_H_jetmass_noJEC__999->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetmass_noJEC__999->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC__999->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetmass_noJEC__999->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC__999->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC__999->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC__999->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC__999->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetmass_noJEC__999->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC__999->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_both_16->Modified();
   H_jetmass_noJEC_both_16->cd();
   H_jetmass_noJEC_both_16->SetSelected(H_jetmass_noJEC_both_16);
}
