#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_18()
{
//=========Macro generated from canvas: Z_dR_tags_18/Z_dR_tags_18
//=========  (Tue Sep  5 10:48:06 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_tags_18 = new TCanvas("Z_dR_tags_18", "Z_dR_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tags_18->SetHighLightColor(2);
   Z_dR_tags_18->Range(-1.2,-0.6654263,6.8,5.988837);
   Z_dR_tags_18->SetFillColor(0);
   Z_dR_tags_18->SetBorderMode(0);
   Z_dR_tags_18->SetBorderSize(2);
   Z_dR_tags_18->SetLeftMargin(0.15);
   Z_dR_tags_18->SetFrameBorderMode(0);
   Z_dR_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR__70 = new TH1D("VbbHcc_tags_Z_dR__70","",30,0,6);
   VbbHcc_tags_Z_dR__70->SetBinContent(3,2.472982);
   VbbHcc_tags_Z_dR__70->SetBinContent(4,5.069915);
   VbbHcc_tags_Z_dR__70->SetBinContent(5,1.722951);
   VbbHcc_tags_Z_dR__70->SetBinContent(6,1.387579);
   VbbHcc_tags_Z_dR__70->SetBinContent(7,0.6143759);
   VbbHcc_tags_Z_dR__70->SetBinContent(9,1.640194);
   VbbHcc_tags_Z_dR__70->SetBinContent(12,2.712779);
   VbbHcc_tags_Z_dR__70->SetBinContent(13,0.402246);
   VbbHcc_tags_Z_dR__70->SetBinContent(14,0.5814054);
   VbbHcc_tags_Z_dR__70->SetBinContent(15,0.3908613);
   VbbHcc_tags_Z_dR__70->SetBinContent(17,0.4748496);
   VbbHcc_tags_Z_dR__70->SetBinContent(26,0.7924306);
   VbbHcc_tags_Z_dR__70->SetBinContent(27,1.610355);
   VbbHcc_tags_Z_dR__70->SetBinContent(28,0.5511003);
   VbbHcc_tags_Z_dR__70->SetBinError(3,1.678014);
   VbbHcc_tags_Z_dR__70->SetBinError(4,2.22464);
   VbbHcc_tags_Z_dR__70->SetBinError(5,1.012908);
   VbbHcc_tags_Z_dR__70->SetBinError(6,0.9988159);
   VbbHcc_tags_Z_dR__70->SetBinError(7,0.6143759);
   VbbHcc_tags_Z_dR__70->SetBinError(9,1.174981);
   VbbHcc_tags_Z_dR__70->SetBinError(12,2.268227);
   VbbHcc_tags_Z_dR__70->SetBinError(13,0.402246);
   VbbHcc_tags_Z_dR__70->SetBinError(14,0.5814054);
   VbbHcc_tags_Z_dR__70->SetBinError(15,0.3908613);
   VbbHcc_tags_Z_dR__70->SetBinError(17,0.4748496);
   VbbHcc_tags_Z_dR__70->SetBinError(26,0.7924306);
   VbbHcc_tags_Z_dR__70->SetBinError(27,1.610355);
   VbbHcc_tags_Z_dR__70->SetBinError(28,0.5511003);
   VbbHcc_tags_Z_dR__70->SetEntries(26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR__70->SetFillColor(ci);
   VbbHcc_tags_Z_dR__70->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_tags_Z_dR__70->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR__70->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__70->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR__70->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__70->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__70->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__70->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__70->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR__70->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__70->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tags_18->Modified();
   Z_dR_tags_18->cd();
   Z_dR_tags_18->SetSelected(Z_dR_tags_18);
}
