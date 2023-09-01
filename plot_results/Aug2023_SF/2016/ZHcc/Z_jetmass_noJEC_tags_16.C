#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_noJEC_tags_16()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_tags_16/Z_jetmass_noJEC_tags_16
//=========  (Fri Sep  1 13:23:35 2023) by ROOT version 6.28/04
   TCanvas *Z_jetmass_noJEC_tags_16 = new TCanvas("Z_jetmass_noJEC_tags_16", "Z_jetmass_noJEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_tags_16->SetHighLightColor(2);
   Z_jetmass_noJEC_tags_16->Range(-60,-0.002549288,340,0.02294359);
   Z_jetmass_noJEC_tags_16->SetFillColor(0);
   Z_jetmass_noJEC_tags_16->SetBorderMode(0);
   Z_jetmass_noJEC_tags_16->SetBorderSize(2);
   Z_jetmass_noJEC_tags_16->SetLeftMargin(0.15);
   Z_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   Z_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_noJEC__344 = new TH1D("VbbHcc_tags_Z_jetmass_noJEC__344","",150,0,300);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinContent(4,0.00966803);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinContent(5,0.01199645);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinContent(6,0.01942315);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinContent(7,0.01588724);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinContent(8,0.002228546);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinContent(9,0.003844882);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinContent(10,0.004688507);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinContent(11,0.002472895);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinContent(13,0.004883123);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinContent(16,0.001927266);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinContent(23,0.002340957);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinError(4,0.004910393);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinError(5,0.004975795);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinError(6,0.006616694);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinError(7,0.006168699);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinError(8,0.002228546);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinError(9,0.0027189);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinError(10,0.003315476);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinError(11,0.002472895);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinError(13,0.003455181);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinError(16,0.001927266);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinError(23,0.002340957);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_jetmass_noJEC__344->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_noJEC__344->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_tags_Z_jetmass_noJEC__344->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_noJEC__344->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__344->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetmass_noJEC__344->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__344->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__344->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__344->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__344->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetmass_noJEC__344->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__344->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_tags_16->Modified();
   Z_jetmass_noJEC_tags_16->cd();
   Z_jetmass_noJEC_tags_16->SetSelected(Z_jetmass_noJEC_tags_16);
}
