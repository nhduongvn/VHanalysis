#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dPhi_tags_18()
{
//=========Macro generated from canvas: H_dPhi_tags_18/H_dPhi_tags_18
//=========  (Fri Sep  1 13:34:43 2023) by ROOT version 6.28/04
   TCanvas *H_dPhi_tags_18 = new TCanvas("H_dPhi_tags_18", "H_dPhi_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dPhi_tags_18->SetHighLightColor(2);
   H_dPhi_tags_18->Range(-0.8,-0.09069075,4.533333,0.8162167);
   H_dPhi_tags_18->SetFillColor(0);
   H_dPhi_tags_18->SetBorderMode(0);
   H_dPhi_tags_18->SetBorderSize(2);
   H_dPhi_tags_18->SetLeftMargin(0.15);
   H_dPhi_tags_18->SetFrameBorderMode(0);
   H_dPhi_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dPhi__114 = new TH1D("VbbHcc_tags_H_dPhi__114","",120,0,4);
   VbbHcc_tags_H_dPhi__114->SetBinContent(0,2.601892);
   VbbHcc_tags_H_dPhi__114->SetBinContent(29,0.3810571);
   VbbHcc_tags_H_dPhi__114->SetBinContent(32,0.6909771);
   VbbHcc_tags_H_dPhi__114->SetBinError(0,2.142774);
   VbbHcc_tags_H_dPhi__114->SetBinError(29,0.3810571);
   VbbHcc_tags_H_dPhi__114->SetBinError(32,0.6909771);
   VbbHcc_tags_H_dPhi__114->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dPhi__114->SetFillColor(ci);
   VbbHcc_tags_H_dPhi__114->GetXaxis()->SetTitle("#Delta#phi(c,c)");
   VbbHcc_tags_H_dPhi__114->GetXaxis()->SetRange(1,120);
   VbbHcc_tags_H_dPhi__114->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dPhi__114->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dPhi__114->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dPhi__114->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dPhi__114->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dPhi__114->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dPhi__114->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dPhi__114->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dPhi__114->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dPhi_tags_18->Modified();
   H_dPhi_tags_18->cd();
   H_dPhi_tags_18->SetSelected(H_dPhi_tags_18);
}
