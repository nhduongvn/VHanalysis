#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_tags_18()
{
//=========Macro generated from canvas: H_pt_tags_18/H_pt_tags_18
//=========  (Fri Sep  1 13:34:42 2023) by ROOT version 6.28/04
   TCanvas *H_pt_tags_18 = new TCanvas("H_pt_tags_18", "H_pt_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_pt_tags_18->SetHighLightColor(2);
   H_pt_tags_18->Range(-400,-0.3729339,2266.667,3.356405);
   H_pt_tags_18->SetFillColor(0);
   H_pt_tags_18->SetBorderMode(0);
   H_pt_tags_18->SetBorderSize(2);
   H_pt_tags_18->SetLeftMargin(0.15);
   H_pt_tags_18->SetFrameBorderMode(0);
   H_pt_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_pt__55 = new TH1D("VbbHcc_tags_H_pt__55","",1000,0,2000);
   VbbHcc_tags_H_pt__55->SetBinContent(29,2.21233);
   VbbHcc_tags_H_pt__55->SetBinContent(31,0.5814054);
   VbbHcc_tags_H_pt__55->SetBinContent(48,0.3908613);
   VbbHcc_tags_H_pt__55->SetBinContent(58,0.4220562);
   VbbHcc_tags_H_pt__55->SetBinContent(71,0.1162559);
   VbbHcc_tags_H_pt__55->SetBinContent(90,0.7156926);
   VbbHcc_tags_H_pt__55->SetBinContent(94,0.5616047);
   VbbHcc_tags_H_pt__55->SetBinContent(98,0.5511003);
   VbbHcc_tags_H_pt__55->SetBinContent(102,0.7371838);
   VbbHcc_tags_H_pt__55->SetBinContent(116,0.6869376);
   VbbHcc_tags_H_pt__55->SetBinContent(120,2.841401);
   VbbHcc_tags_H_pt__55->SetBinContent(121,0.402246);
   VbbHcc_tags_H_pt__55->SetBinContent(122,0.5183212);
   VbbHcc_tags_H_pt__55->SetBinContent(133,0.6214135);
   VbbHcc_tags_H_pt__55->SetBinContent(142,0.9532567);
   VbbHcc_tags_H_pt__55->SetBinContent(152,0.8776001);
   VbbHcc_tags_H_pt__55->SetBinContent(153,1.610355);
   VbbHcc_tags_H_pt__55->SetBinContent(172,1.066253);
   VbbHcc_tags_H_pt__55->SetBinContent(174,0.8259742);
   VbbHcc_tags_H_pt__55->SetBinContent(179,0.6794818);
   VbbHcc_tags_H_pt__55->SetBinContent(187,0.4748496);
   VbbHcc_tags_H_pt__55->SetBinContent(191,0.5004492);
   VbbHcc_tags_H_pt__55->SetBinContent(196,0.6143759);
   VbbHcc_tags_H_pt__55->SetBinContent(333,0.7924306);
   VbbHcc_tags_H_pt__55->SetBinContent(542,0.670189);
   VbbHcc_tags_H_pt__55->SetBinError(29,2.21233);
   VbbHcc_tags_H_pt__55->SetBinError(31,0.5814054);
   VbbHcc_tags_H_pt__55->SetBinError(48,0.3908613);
   VbbHcc_tags_H_pt__55->SetBinError(58,0.4220562);
   VbbHcc_tags_H_pt__55->SetBinError(71,0.1162559);
   VbbHcc_tags_H_pt__55->SetBinError(90,0.7156926);
   VbbHcc_tags_H_pt__55->SetBinError(94,0.5616047);
   VbbHcc_tags_H_pt__55->SetBinError(98,0.5511003);
   VbbHcc_tags_H_pt__55->SetBinError(102,0.7371838);
   VbbHcc_tags_H_pt__55->SetBinError(116,0.6869376);
   VbbHcc_tags_H_pt__55->SetBinError(120,2.017597);
   VbbHcc_tags_H_pt__55->SetBinError(121,0.402246);
   VbbHcc_tags_H_pt__55->SetBinError(122,0.5183212);
   VbbHcc_tags_H_pt__55->SetBinError(133,0.6214135);
   VbbHcc_tags_H_pt__55->SetBinError(142,0.9532567);
   VbbHcc_tags_H_pt__55->SetBinError(152,0.8776001);
   VbbHcc_tags_H_pt__55->SetBinError(153,1.610355);
   VbbHcc_tags_H_pt__55->SetBinError(172,1.066253);
   VbbHcc_tags_H_pt__55->SetBinError(174,0.8259742);
   VbbHcc_tags_H_pt__55->SetBinError(179,0.6794818);
   VbbHcc_tags_H_pt__55->SetBinError(187,0.4748496);
   VbbHcc_tags_H_pt__55->SetBinError(191,0.5004492);
   VbbHcc_tags_H_pt__55->SetBinError(196,0.6143759);
   VbbHcc_tags_H_pt__55->SetBinError(333,0.7924306);
   VbbHcc_tags_H_pt__55->SetBinError(542,0.670189);
   VbbHcc_tags_H_pt__55->SetEntries(26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_pt__55->SetFillColor(ci);
   VbbHcc_tags_H_pt__55->GetXaxis()->SetTitle("H p_{T} [GeV]");
   VbbHcc_tags_H_pt__55->GetXaxis()->SetRange(1,1000);
   VbbHcc_tags_H_pt__55->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt__55->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt__55->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt__55->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt__55->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt__55->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt__55->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt__55->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt__55->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_tags_18->Modified();
   H_pt_tags_18->cd();
   H_pt_tags_18->SetSelected(H_pt_tags_18);
}
