#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_18()
{
//=========Macro generated from canvas: H_dR_tags_18/H_dR_tags_18
//=========  (Fri Sep  1 13:34:42 2023) by ROOT version 6.28/04
   TCanvas *H_dR_tags_18 = new TCanvas("H_dR_tags_18", "H_dR_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_tags_18->SetHighLightColor(2);
   H_dR_tags_18->Range(-1.2,-0.5809093,6.8,5.228183);
   H_dR_tags_18->SetFillColor(0);
   H_dR_tags_18->SetBorderMode(0);
   H_dR_tags_18->SetBorderSize(2);
   H_dR_tags_18->SetLeftMargin(0.15);
   H_dR_tags_18->SetFrameBorderMode(0);
   H_dR_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR__85 = new TH1D("VbbHcc_tags_H_dR__85","",30,0,6);
   VbbHcc_tags_H_dR__85->SetBinContent(3,1.35245);
   VbbHcc_tags_H_dR__85->SetBinContent(4,4.425975);
   VbbHcc_tags_H_dR__85->SetBinContent(5,1.95373);
   VbbHcc_tags_H_dR__85->SetBinContent(7,1.773616);
   VbbHcc_tags_H_dR__85->SetBinContent(11,2.289837);
   VbbHcc_tags_H_dR__85->SetBinContent(12,0.5814054);
   VbbHcc_tags_H_dR__85->SetBinContent(13,0.5004492);
   VbbHcc_tags_H_dR__85->SetBinContent(14,2.21233);
   VbbHcc_tags_H_dR__85->SetBinContent(16,0.7924306);
   VbbHcc_tags_H_dR__85->SetBinContent(17,1.291603);
   VbbHcc_tags_H_dR__85->SetBinContent(18,0.9532567);
   VbbHcc_tags_H_dR__85->SetBinContent(19,0.7931073);
   VbbHcc_tags_H_dR__85->SetBinContent(20,0.8259742);
   VbbHcc_tags_H_dR__85->SetBinContent(24,0.5616047);
   VbbHcc_tags_H_dR__85->SetBinContent(30,0.1162559);
   VbbHcc_tags_H_dR__85->SetBinError(3,0.9978297);
   VbbHcc_tags_H_dR__85->SetBinError(4,2.340139);
   VbbHcc_tags_H_dR__85->SetBinError(5,1.134817);
   VbbHcc_tags_H_dR__85->SetBinError(7,1.048346);
   VbbHcc_tags_H_dR__85->SetBinError(11,1.747839);
   VbbHcc_tags_H_dR__85->SetBinError(12,0.5814054);
   VbbHcc_tags_H_dR__85->SetBinError(13,0.5004492);
   VbbHcc_tags_H_dR__85->SetBinError(14,2.21233);
   VbbHcc_tags_H_dR__85->SetBinError(16,0.7924306);
   VbbHcc_tags_H_dR__85->SetBinError(17,0.9139519);
   VbbHcc_tags_H_dR__85->SetBinError(18,0.9532567);
   VbbHcc_tags_H_dR__85->SetBinError(19,0.5608693);
   VbbHcc_tags_H_dR__85->SetBinError(20,0.8259742);
   VbbHcc_tags_H_dR__85->SetBinError(24,0.5616047);
   VbbHcc_tags_H_dR__85->SetBinError(30,0.1162559);
   VbbHcc_tags_H_dR__85->SetEntries(26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR__85->SetFillColor(ci);
   VbbHcc_tags_H_dR__85->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_tags_H_dR__85->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR__85->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__85->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR__85->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__85->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__85->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__85->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__85->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR__85->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__85->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_18->Modified();
   H_dR_tags_18->cd();
   H_dR_tags_18->SetSelected(H_dR_tags_18);
}
