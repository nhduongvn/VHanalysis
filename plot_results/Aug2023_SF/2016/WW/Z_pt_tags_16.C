#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_tags_16()
{
//=========Macro generated from canvas: Z_pt_tags_16/Z_pt_tags_16
//=========  (Fri Sep  1 13:23:30 2023) by ROOT version 6.28/04
   TCanvas *Z_pt_tags_16 = new TCanvas("Z_pt_tags_16", "Z_pt_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_pt_tags_16->SetHighLightColor(2);
   Z_pt_tags_16->Range(-400,-0.01846816,2266.667,0.1662135);
   Z_pt_tags_16->SetFillColor(0);
   Z_pt_tags_16->SetBorderMode(0);
   Z_pt_tags_16->SetBorderSize(2);
   Z_pt_tags_16->SetLeftMargin(0.15);
   Z_pt_tags_16->SetFrameBorderMode(0);
   Z_pt_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_pt__39 = new TH1D("VbbHcc_tags_Z_pt__39","",1000,0,2000);
   VbbHcc_tags_Z_pt__39->SetBinContent(24,0.09694687);
   VbbHcc_tags_Z_pt__39->SetBinContent(35,0.1336153);
   VbbHcc_tags_Z_pt__39->SetBinContent(42,0.1407098);
   VbbHcc_tags_Z_pt__39->SetBinContent(43,0.1336795);
   VbbHcc_tags_Z_pt__39->SetBinContent(53,0.103617);
   VbbHcc_tags_Z_pt__39->SetBinContent(54,0.1005479);
   VbbHcc_tags_Z_pt__39->SetBinContent(78,0.1158269);
   VbbHcc_tags_Z_pt__39->SetBinContent(112,0.1081721);
   VbbHcc_tags_Z_pt__39->SetBinContent(126,0.1147185);
   VbbHcc_tags_Z_pt__39->SetBinContent(160,0.1002972);
   VbbHcc_tags_Z_pt__39->SetBinContent(172,0.1080661);
   VbbHcc_tags_Z_pt__39->SetBinError(24,0.09694687);
   VbbHcc_tags_Z_pt__39->SetBinError(35,0.1336153);
   VbbHcc_tags_Z_pt__39->SetBinError(42,0.1407098);
   VbbHcc_tags_Z_pt__39->SetBinError(43,0.1336795);
   VbbHcc_tags_Z_pt__39->SetBinError(53,0.103617);
   VbbHcc_tags_Z_pt__39->SetBinError(54,0.1005479);
   VbbHcc_tags_Z_pt__39->SetBinError(78,0.1158269);
   VbbHcc_tags_Z_pt__39->SetBinError(112,0.1081721);
   VbbHcc_tags_Z_pt__39->SetBinError(126,0.1147185);
   VbbHcc_tags_Z_pt__39->SetBinError(160,0.1002972);
   VbbHcc_tags_Z_pt__39->SetBinError(172,0.1080661);
   VbbHcc_tags_Z_pt__39->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_pt__39->SetFillColor(ci);
   VbbHcc_tags_Z_pt__39->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   VbbHcc_tags_Z_pt__39->GetXaxis()->SetRange(1,1000);
   VbbHcc_tags_Z_pt__39->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt__39->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt__39->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt__39->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt__39->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt__39->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt__39->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt__39->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt__39->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_tags_16->Modified();
   Z_pt_tags_16->cd();
   Z_pt_tags_16->SetSelected(Z_pt_tags_16);
}
