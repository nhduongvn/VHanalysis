#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_tags_18()
{
//=========Macro generated from canvas: Z_pt_tags_18/Z_pt_tags_18
//=========  (Fri Sep  1 13:34:41 2023) by ROOT version 6.28/04
   TCanvas *Z_pt_tags_18 = new TCanvas("Z_pt_tags_18", "Z_pt_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_pt_tags_18->SetHighLightColor(2);
   Z_pt_tags_18->Range(-400,-0.2903683,2266.667,2.613315);
   Z_pt_tags_18->SetFillColor(0);
   Z_pt_tags_18->SetBorderMode(0);
   Z_pt_tags_18->SetBorderSize(2);
   Z_pt_tags_18->SetLeftMargin(0.15);
   Z_pt_tags_18->SetFrameBorderMode(0);
   Z_pt_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_pt__40 = new TH1D("VbbHcc_tags_Z_pt__40","",1000,0,2000);
   VbbHcc_tags_Z_pt__40->SetBinContent(15,0.5814054);
   VbbHcc_tags_Z_pt__40->SetBinContent(50,2.21233);
   VbbHcc_tags_Z_pt__40->SetBinContent(69,0.6869376);
   VbbHcc_tags_Z_pt__40->SetBinContent(70,2.17196);
   VbbHcc_tags_Z_pt__40->SetBinContent(75,0.6214135);
   VbbHcc_tags_Z_pt__40->SetBinContent(76,0.5183212);
   VbbHcc_tags_Z_pt__40->SetBinContent(86,0.6794818);
   VbbHcc_tags_Z_pt__40->SetBinContent(88,0.4220562);
   VbbHcc_tags_Z_pt__40->SetBinContent(91,0.9532567);
   VbbHcc_tags_Z_pt__40->SetBinContent(99,0.7371838);
   VbbHcc_tags_Z_pt__40->SetBinContent(101,1.06105);
   VbbHcc_tags_Z_pt__40->SetBinContent(105,0.6143759);
   VbbHcc_tags_Z_pt__40->SetBinContent(106,0.7156926);
   VbbHcc_tags_Z_pt__40->SetBinContent(109,1.550928);
   VbbHcc_tags_Z_pt__40->SetBinContent(120,0.8259742);
   VbbHcc_tags_Z_pt__40->SetBinContent(126,0.5511003);
   VbbHcc_tags_Z_pt__40->SetBinContent(135,0.7924306);
   VbbHcc_tags_Z_pt__40->SetBinContent(137,0.402246);
   VbbHcc_tags_Z_pt__40->SetBinContent(141,0.5004492);
   VbbHcc_tags_Z_pt__40->SetBinContent(165,0.1162559);
   VbbHcc_tags_Z_pt__40->SetBinContent(173,1.066253);
   VbbHcc_tags_Z_pt__40->SetBinContent(176,0.8776001);
   VbbHcc_tags_Z_pt__40->SetBinContent(205,1.290473);
   VbbHcc_tags_Z_pt__40->SetBinContent(243,0.4748496);
   VbbHcc_tags_Z_pt__40->SetBinError(15,0.5814054);
   VbbHcc_tags_Z_pt__40->SetBinError(50,2.21233);
   VbbHcc_tags_Z_pt__40->SetBinError(69,0.6869376);
   VbbHcc_tags_Z_pt__40->SetBinError(70,1.705475);
   VbbHcc_tags_Z_pt__40->SetBinError(75,0.6214135);
   VbbHcc_tags_Z_pt__40->SetBinError(76,0.5183212);
   VbbHcc_tags_Z_pt__40->SetBinError(86,0.6794818);
   VbbHcc_tags_Z_pt__40->SetBinError(88,0.4220562);
   VbbHcc_tags_Z_pt__40->SetBinError(91,0.9532567);
   VbbHcc_tags_Z_pt__40->SetBinError(99,0.7371838);
   VbbHcc_tags_Z_pt__40->SetBinError(101,0.7758388);
   VbbHcc_tags_Z_pt__40->SetBinError(105,0.6143759);
   VbbHcc_tags_Z_pt__40->SetBinError(106,0.7156926);
   VbbHcc_tags_Z_pt__40->SetBinError(109,1.550928);
   VbbHcc_tags_Z_pt__40->SetBinError(120,0.8259742);
   VbbHcc_tags_Z_pt__40->SetBinError(126,0.5511003);
   VbbHcc_tags_Z_pt__40->SetBinError(135,0.7924306);
   VbbHcc_tags_Z_pt__40->SetBinError(137,0.402246);
   VbbHcc_tags_Z_pt__40->SetBinError(141,0.5004492);
   VbbHcc_tags_Z_pt__40->SetBinError(165,0.1162559);
   VbbHcc_tags_Z_pt__40->SetBinError(173,1.066253);
   VbbHcc_tags_Z_pt__40->SetBinError(176,0.8776001);
   VbbHcc_tags_Z_pt__40->SetBinError(205,1.290473);
   VbbHcc_tags_Z_pt__40->SetBinError(243,0.4748496);
   VbbHcc_tags_Z_pt__40->SetEntries(26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_pt__40->SetFillColor(ci);
   VbbHcc_tags_Z_pt__40->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   VbbHcc_tags_Z_pt__40->GetXaxis()->SetRange(1,1000);
   VbbHcc_tags_Z_pt__40->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt__40->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt__40->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt__40->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt__40->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt__40->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt__40->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt__40->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt__40->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_tags_18->Modified();
   Z_pt_tags_18->cd();
   Z_pt_tags_18->SetSelected(Z_pt_tags_18);
}
