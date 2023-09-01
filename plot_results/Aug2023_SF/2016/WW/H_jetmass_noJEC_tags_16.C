#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_noJEC_tags_16()
{
//=========Macro generated from canvas: H_jetmass_noJEC_tags_16/H_jetmass_noJEC_tags_16
//=========  (Fri Sep  1 13:23:34 2023) by ROOT version 6.28/04
   TCanvas *H_jetmass_noJEC_tags_16 = new TCanvas("H_jetmass_noJEC_tags_16", "H_jetmass_noJEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_tags_16->SetHighLightColor(2);
   H_jetmass_noJEC_tags_16->Range(-60,-0.05952412,340,0.535717);
   H_jetmass_noJEC_tags_16->SetFillColor(0);
   H_jetmass_noJEC_tags_16->SetBorderMode(0);
   H_jetmass_noJEC_tags_16->SetBorderSize(2);
   H_jetmass_noJEC_tags_16->SetLeftMargin(0.15);
   H_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   H_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_noJEC__279 = new TH1D("VbbHcc_tags_H_jetmass_noJEC__279","",150,0,300);
   VbbHcc_tags_H_jetmass_noJEC__279->SetBinContent(4,0.1336153);
   VbbHcc_tags_H_jetmass_noJEC__279->SetBinContent(5,0.1080661);
   VbbHcc_tags_H_jetmass_noJEC__279->SetBinContent(6,0.4535171);
   VbbHcc_tags_H_jetmass_noJEC__279->SetBinContent(7,0.1158269);
   VbbHcc_tags_H_jetmass_noJEC__279->SetBinContent(9,0.1005479);
   VbbHcc_tags_H_jetmass_noJEC__279->SetBinContent(14,0.2443268);
   VbbHcc_tags_H_jetmass_noJEC__279->SetBinContent(17,0.1002972);
   VbbHcc_tags_H_jetmass_noJEC__279->SetBinError(4,0.1336153);
   VbbHcc_tags_H_jetmass_noJEC__279->SetBinError(5,0.1080661);
   VbbHcc_tags_H_jetmass_noJEC__279->SetBinError(6,0.228321);
   VbbHcc_tags_H_jetmass_noJEC__279->SetBinError(7,0.1158269);
   VbbHcc_tags_H_jetmass_noJEC__279->SetBinError(9,0.1005479);
   VbbHcc_tags_H_jetmass_noJEC__279->SetBinError(14,0.1747448);
   VbbHcc_tags_H_jetmass_noJEC__279->SetBinError(17,0.1002972);
   VbbHcc_tags_H_jetmass_noJEC__279->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_jetmass_noJEC__279->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_noJEC__279->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VbbHcc_tags_H_jetmass_noJEC__279->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_noJEC__279->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC__279->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetmass_noJEC__279->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC__279->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC__279->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC__279->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC__279->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetmass_noJEC__279->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC__279->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_tags_16->Modified();
   H_jetmass_noJEC_tags_16->cd();
   H_jetmass_noJEC_tags_16->SetSelected(H_jetmass_noJEC_tags_16);
}
