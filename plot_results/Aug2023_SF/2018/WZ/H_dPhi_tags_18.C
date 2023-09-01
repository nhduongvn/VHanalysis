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
   H_dPhi_tags_18->Range(-0.8,-0.3153657,4.533333,2.838291);
   H_dPhi_tags_18->SetFillColor(0);
   H_dPhi_tags_18->SetBorderMode(0);
   H_dPhi_tags_18->SetBorderSize(2);
   H_dPhi_tags_18->SetLeftMargin(0.15);
   H_dPhi_tags_18->SetFrameBorderMode(0);
   H_dPhi_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dPhi__115 = new TH1D("VbbHcc_tags_H_dPhi__115","",120,0,4);
   VbbHcc_tags_H_dPhi__115->SetBinContent(0,12.71408);
   VbbHcc_tags_H_dPhi__115->SetBinContent(13,2.069249);
   VbbHcc_tags_H_dPhi__115->SetBinContent(15,0.6794818);
   VbbHcc_tags_H_dPhi__115->SetBinContent(17,1.290473);
   VbbHcc_tags_H_dPhi__115->SetBinContent(18,0.4748496);
   VbbHcc_tags_H_dPhi__115->SetBinContent(31,0.402246);
   VbbHcc_tags_H_dPhi__115->SetBinContent(51,2.402786);
   VbbHcc_tags_H_dPhi__115->SetBinContent(73,0.3908613);
   VbbHcc_tags_H_dPhi__115->SetBinError(0,3.540051);
   VbbHcc_tags_H_dPhi__115->SetBinError(13,1.635247);
   VbbHcc_tags_H_dPhi__115->SetBinError(15,0.6794818);
   VbbHcc_tags_H_dPhi__115->SetBinError(17,1.290473);
   VbbHcc_tags_H_dPhi__115->SetBinError(18,0.4748496);
   VbbHcc_tags_H_dPhi__115->SetBinError(31,0.402246);
   VbbHcc_tags_H_dPhi__115->SetBinError(51,1.794768);
   VbbHcc_tags_H_dPhi__115->SetBinError(73,0.3908613);
   VbbHcc_tags_H_dPhi__115->SetEntries(26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dPhi__115->SetFillColor(ci);
   VbbHcc_tags_H_dPhi__115->GetXaxis()->SetTitle("#Delta#phi(c,c)");
   VbbHcc_tags_H_dPhi__115->GetXaxis()->SetRange(1,120);
   VbbHcc_tags_H_dPhi__115->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dPhi__115->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dPhi__115->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dPhi__115->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dPhi__115->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dPhi__115->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dPhi__115->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dPhi__115->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dPhi__115->Draw("HIST");
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
