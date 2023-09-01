#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_noJEC_tags_18()
{
//=========Macro generated from canvas: H_jetmass_noJEC_tags_18/H_jetmass_noJEC_tags_18
//=========  (Fri Sep  1 13:34:45 2023) by ROOT version 6.28/04
   TCanvas *H_jetmass_noJEC_tags_18 = new TCanvas("H_jetmass_noJEC_tags_18", "H_jetmass_noJEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_tags_18->SetHighLightColor(2);
   H_jetmass_noJEC_tags_18->Range(-60,-0.006351503,340,0.05716352);
   H_jetmass_noJEC_tags_18->SetFillColor(0);
   H_jetmass_noJEC_tags_18->SetBorderMode(0);
   H_jetmass_noJEC_tags_18->SetBorderSize(2);
   H_jetmass_noJEC_tags_18->SetLeftMargin(0.15);
   H_jetmass_noJEC_tags_18->SetFrameBorderMode(0);
   H_jetmass_noJEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_noJEC__284 = new TH1D("VbbHcc_tags_H_jetmass_noJEC__284","",150,0,300);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinContent(4,0.01775087);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinContent(5,0.01735997);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinContent(6,0.0483924);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinContent(7,0.02544599);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinContent(8,0.0180146);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinContent(9,0.01632894);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinContent(10,0.01515428);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinContent(11,0.005356689);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinContent(12,0.007123822);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinContent(13,0.002018158);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinContent(14,0.008192873);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinContent(16,0.002440408);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinContent(18,0.002371103);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinContent(19,0.002028649);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinContent(22,0.001690799);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinContent(29,0.002848447);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinError(4,0.007588062);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinError(5,0.006312103);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinError(6,0.01244395);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinError(7,0.008207168);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinError(8,0.006552289);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinError(9,0.006838452);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinError(10,0.006284737);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinError(11,0.003787773);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinError(12,0.003597025);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinError(13,0.002018158);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinError(14,0.004893786);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinError(16,0.002440408);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinError(18,0.002371103);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinError(19,0.002028649);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinError(22,0.001690799);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinError(29,0.002848447);
   VbbHcc_tags_H_jetmass_noJEC__284->SetEntries(77);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_jetmass_noJEC__284->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_noJEC__284->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VbbHcc_tags_H_jetmass_noJEC__284->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_noJEC__284->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC__284->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetmass_noJEC__284->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC__284->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC__284->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC__284->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC__284->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetmass_noJEC__284->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC__284->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_tags_18->Modified();
   H_jetmass_noJEC_tags_18->cd();
   H_jetmass_noJEC_tags_18->SetSelected(H_jetmass_noJEC_tags_18);
}
