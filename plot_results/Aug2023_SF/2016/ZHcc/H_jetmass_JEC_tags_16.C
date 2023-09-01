#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_JEC_tags_16()
{
//=========Macro generated from canvas: H_jetmass_JEC_tags_16/H_jetmass_JEC_tags_16
//=========  (Fri Sep  1 13:23:34 2023) by ROOT version 6.28/04
   TCanvas *H_jetmass_JEC_tags_16 = new TCanvas("H_jetmass_JEC_tags_16", "H_jetmass_JEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_tags_16->SetHighLightColor(2);
   H_jetmass_JEC_tags_16->Range(-60,-0.002317341,340,0.02085607);
   H_jetmass_JEC_tags_16->SetFillColor(0);
   H_jetmass_JEC_tags_16->SetBorderMode(0);
   H_jetmass_JEC_tags_16->SetBorderSize(2);
   H_jetmass_JEC_tags_16->SetLeftMargin(0.15);
   H_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   H_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_JEC__299 = new TH1D("VbbHcc_tags_H_jetmass_JEC__299","",150,0,300);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinContent(3,0.001929603);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinContent(5,0.01424039);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinContent(6,0.01765593);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinContent(7,0.01259018);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinContent(8,0.006606379);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinContent(9,0.004047739);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinContent(10,0.007430916);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinContent(12,0.007192664);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinContent(14,0.002530526);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinContent(15,0.00231513);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinContent(40,0.002821577);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinError(3,0.001929603);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinError(5,0.005482079);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinError(6,0.006394374);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinError(7,0.005261006);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinError(8,0.003829022);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinError(9,0.002866505);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinError(10,0.004349611);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinError(12,0.004175919);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinError(14,0.002530526);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinError(15,0.00231513);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinError(40,0.002821577);
   VbbHcc_tags_H_jetmass_JEC__299->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_jetmass_JEC__299->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_JEC__299->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_H_jetmass_JEC__299->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_JEC__299->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC__299->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetmass_JEC__299->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC__299->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC__299->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC__299->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC__299->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetmass_JEC__299->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC__299->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_tags_16->Modified();
   H_jetmass_JEC_tags_16->cd();
   H_jetmass_JEC_tags_16->SetSelected(H_jetmass_JEC_tags_16);
}
