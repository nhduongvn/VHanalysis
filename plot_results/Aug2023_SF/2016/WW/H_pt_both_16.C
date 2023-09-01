#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_both_16()
{
//=========Macro generated from canvas: H_pt_both_16/H_pt_both_16
//=========  (Fri Sep  1 13:23:42 2023) by ROOT version 6.28/04
   TCanvas *H_pt_both_16 = new TCanvas("H_pt_both_16", "H_pt_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_pt_both_16->SetHighLightColor(2);
   H_pt_both_16->Range(-400,-0.01846816,2266.667,0.1662135);
   H_pt_both_16->SetFillColor(0);
   H_pt_both_16->SetBorderMode(0);
   H_pt_both_16->SetBorderSize(2);
   H_pt_both_16->SetLeftMargin(0.15);
   H_pt_both_16->SetFrameBorderMode(0);
   H_pt_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_pt__774 = new TH1D("VbbHcc_both_H_pt__774","",1000,0,2000);
   VbbHcc_both_H_pt__774->SetBinContent(14,0.103617);
   VbbHcc_both_H_pt__774->SetBinContent(24,0.1336795);
   VbbHcc_both_H_pt__774->SetBinContent(49,0.09694687);
   VbbHcc_both_H_pt__774->SetBinContent(56,0.1158269);
   VbbHcc_both_H_pt__774->SetBinContent(57,0.1336153);
   VbbHcc_both_H_pt__774->SetBinContent(61,0.1005479);
   VbbHcc_both_H_pt__774->SetBinContent(83,0.1081721);
   VbbHcc_both_H_pt__774->SetBinContent(136,0.1407098);
   VbbHcc_both_H_pt__774->SetBinContent(140,0.1002972);
   VbbHcc_both_H_pt__774->SetBinContent(156,0.1147185);
   VbbHcc_both_H_pt__774->SetBinContent(356,0.1080661);
   VbbHcc_both_H_pt__774->SetBinError(14,0.103617);
   VbbHcc_both_H_pt__774->SetBinError(24,0.1336795);
   VbbHcc_both_H_pt__774->SetBinError(49,0.09694687);
   VbbHcc_both_H_pt__774->SetBinError(56,0.1158269);
   VbbHcc_both_H_pt__774->SetBinError(57,0.1336153);
   VbbHcc_both_H_pt__774->SetBinError(61,0.1005479);
   VbbHcc_both_H_pt__774->SetBinError(83,0.1081721);
   VbbHcc_both_H_pt__774->SetBinError(136,0.1407098);
   VbbHcc_both_H_pt__774->SetBinError(140,0.1002972);
   VbbHcc_both_H_pt__774->SetBinError(156,0.1147185);
   VbbHcc_both_H_pt__774->SetBinError(356,0.1080661);
   VbbHcc_both_H_pt__774->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_pt__774->SetFillColor(ci);
   VbbHcc_both_H_pt__774->GetXaxis()->SetTitle("H p_{T} [GeV]");
   VbbHcc_both_H_pt__774->GetXaxis()->SetRange(1,1000);
   VbbHcc_both_H_pt__774->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt__774->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt__774->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt__774->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt__774->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt__774->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt__774->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt__774->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt__774->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_both_16->Modified();
   H_pt_both_16->cd();
   H_pt_both_16->SetSelected(H_pt_both_16);
}
