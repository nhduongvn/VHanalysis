#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_tags_16()
{
//=========Macro generated from canvas: H_pt_tags_16/H_pt_tags_16
//=========  (Fri Sep  1 13:23:30 2023) by ROOT version 6.28/04
   TCanvas *H_pt_tags_16 = new TCanvas("H_pt_tags_16", "H_pt_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_pt_tags_16->SetHighLightColor(2);
   H_pt_tags_16->Range(-400,-0.01846816,2266.667,0.1662135);
   H_pt_tags_16->SetFillColor(0);
   H_pt_tags_16->SetBorderMode(0);
   H_pt_tags_16->SetBorderSize(2);
   H_pt_tags_16->SetLeftMargin(0.15);
   H_pt_tags_16->SetFrameBorderMode(0);
   H_pt_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_pt__54 = new TH1D("VbbHcc_tags_H_pt__54","",1000,0,2000);
   VbbHcc_tags_H_pt__54->SetBinContent(31,0.1081721);
   VbbHcc_tags_H_pt__54->SetBinContent(46,0.1158269);
   VbbHcc_tags_H_pt__54->SetBinContent(61,0.09694687);
   VbbHcc_tags_H_pt__54->SetBinContent(70,0.1336795);
   VbbHcc_tags_H_pt__54->SetBinContent(106,0.1336153);
   VbbHcc_tags_H_pt__54->SetBinContent(147,0.1002972);
   VbbHcc_tags_H_pt__54->SetBinContent(151,0.103617);
   VbbHcc_tags_H_pt__54->SetBinContent(159,0.1005479);
   VbbHcc_tags_H_pt__54->SetBinContent(201,0.1147185);
   VbbHcc_tags_H_pt__54->SetBinContent(203,0.1407098);
   VbbHcc_tags_H_pt__54->SetBinContent(239,0.1080661);
   VbbHcc_tags_H_pt__54->SetBinError(31,0.1081721);
   VbbHcc_tags_H_pt__54->SetBinError(46,0.1158269);
   VbbHcc_tags_H_pt__54->SetBinError(61,0.09694687);
   VbbHcc_tags_H_pt__54->SetBinError(70,0.1336795);
   VbbHcc_tags_H_pt__54->SetBinError(106,0.1336153);
   VbbHcc_tags_H_pt__54->SetBinError(147,0.1002972);
   VbbHcc_tags_H_pt__54->SetBinError(151,0.103617);
   VbbHcc_tags_H_pt__54->SetBinError(159,0.1005479);
   VbbHcc_tags_H_pt__54->SetBinError(201,0.1147185);
   VbbHcc_tags_H_pt__54->SetBinError(203,0.1407098);
   VbbHcc_tags_H_pt__54->SetBinError(239,0.1080661);
   VbbHcc_tags_H_pt__54->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_pt__54->SetFillColor(ci);
   VbbHcc_tags_H_pt__54->GetXaxis()->SetTitle("H p_{T} [GeV]");
   VbbHcc_tags_H_pt__54->GetXaxis()->SetRange(1,1000);
   VbbHcc_tags_H_pt__54->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt__54->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt__54->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt__54->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt__54->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt__54->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt__54->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt__54->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt__54->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_tags_16->Modified();
   H_pt_tags_16->cd();
   H_pt_tags_16->SetSelected(H_pt_tags_16);
}
