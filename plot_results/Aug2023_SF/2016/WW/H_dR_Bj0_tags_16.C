#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_tags_16()
{
//=========Macro generated from canvas: H_dR_Bj0_tags_16/H_dR_Bj0_tags_16
//=========  (Fri Sep  1 13:23:33 2023) by ROOT version 6.28/04
   TCanvas *H_dR_Bj0_tags_16 = new TCanvas("H_dR_Bj0_tags_16", "H_dR_Bj0_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_tags_16->SetHighLightColor(2);
   H_dR_Bj0_tags_16->Range(-1.2,-0.05290792,6.8,0.4761712);
   H_dR_Bj0_tags_16->SetFillColor(0);
   H_dR_Bj0_tags_16->SetBorderMode(0);
   H_dR_Bj0_tags_16->SetBorderSize(2);
   H_dR_Bj0_tags_16->SetLeftMargin(0.15);
   H_dR_Bj0_tags_16->SetFrameBorderMode(0);
   H_dR_Bj0_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR_Bj0__159 = new TH1D("VbbHcc_tags_H_dR_Bj0__159","",30,0,6);
   VbbHcc_tags_H_dR_Bj0__159->SetBinContent(2,0.1343693);
   VbbHcc_tags_H_dR_Bj0__159->SetBinContent(3,0.1343693);
   VbbHcc_tags_H_dR_Bj0__159->SetBinContent(4,0.1343693);
   VbbHcc_tags_H_dR_Bj0__159->SetBinContent(6,0.1343693);
   VbbHcc_tags_H_dR_Bj0__159->SetBinContent(7,0.4031079);
   VbbHcc_tags_H_dR_Bj0__159->SetBinContent(8,0.1343693);
   VbbHcc_tags_H_dR_Bj0__159->SetBinContent(10,0.1343693);
   VbbHcc_tags_H_dR_Bj0__159->SetBinContent(12,0.1343693);
   VbbHcc_tags_H_dR_Bj0__159->SetBinContent(15,0.1343693);
   VbbHcc_tags_H_dR_Bj0__159->SetBinError(2,0.1343693);
   VbbHcc_tags_H_dR_Bj0__159->SetBinError(3,0.1343693);
   VbbHcc_tags_H_dR_Bj0__159->SetBinError(4,0.1343693);
   VbbHcc_tags_H_dR_Bj0__159->SetBinError(6,0.1343693);
   VbbHcc_tags_H_dR_Bj0__159->SetBinError(7,0.2327345);
   VbbHcc_tags_H_dR_Bj0__159->SetBinError(8,0.1343693);
   VbbHcc_tags_H_dR_Bj0__159->SetBinError(10,0.1343693);
   VbbHcc_tags_H_dR_Bj0__159->SetBinError(12,0.1343693);
   VbbHcc_tags_H_dR_Bj0__159->SetBinError(15,0.1343693);
   VbbHcc_tags_H_dR_Bj0__159->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_Bj0__159->SetFillColor(ci);
   VbbHcc_tags_H_dR_Bj0__159->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VbbHcc_tags_H_dR_Bj0__159->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR_Bj0__159->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__159->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0__159->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__159->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__159->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__159->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__159->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0__159->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__159->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_tags_16->Modified();
   H_dR_Bj0_tags_16->cd();
   H_dR_Bj0_tags_16->SetSelected(H_dR_Bj0_tags_16);
}
