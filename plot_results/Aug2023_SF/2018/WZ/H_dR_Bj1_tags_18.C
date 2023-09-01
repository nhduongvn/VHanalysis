#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_tags_18()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_18/H_dR_Bj1_tags_18
//=========  (Fri Sep  1 13:34:44 2023) by ROOT version 6.28/04
   TCanvas *H_dR_Bj1_tags_18 = new TCanvas("H_dR_Bj1_tags_18", "H_dR_Bj1_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_tags_18->SetHighLightColor(2);
   H_dR_Bj1_tags_18->Range(-1.2,-0.4967129,6.8,4.470416);
   H_dR_Bj1_tags_18->SetFillColor(0);
   H_dR_Bj1_tags_18->SetBorderMode(0);
   H_dR_Bj1_tags_18->SetBorderSize(2);
   H_dR_Bj1_tags_18->SetLeftMargin(0.15);
   H_dR_Bj1_tags_18->SetFrameBorderMode(0);
   H_dR_Bj1_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR_Bj1__175 = new TH1D("VbbHcc_tags_H_dR_Bj1__175","",30,0,6);
   VbbHcc_tags_H_dR_Bj1__175->SetBinContent(1,0.4730599);
   VbbHcc_tags_H_dR_Bj1__175->SetBinContent(2,1.41918);
   VbbHcc_tags_H_dR_Bj1__175->SetBinContent(3,3.784479);
   VbbHcc_tags_H_dR_Bj1__175->SetBinContent(4,0.9461198);
   VbbHcc_tags_H_dR_Bj1__175->SetBinContent(5,1.89224);
   VbbHcc_tags_H_dR_Bj1__175->SetBinContent(6,0.9461198);
   VbbHcc_tags_H_dR_Bj1__175->SetBinContent(7,0.4730599);
   VbbHcc_tags_H_dR_Bj1__175->SetBinContent(9,0.4730599);
   VbbHcc_tags_H_dR_Bj1__175->SetBinContent(11,0.4730599);
   VbbHcc_tags_H_dR_Bj1__175->SetBinContent(15,0.4730599);
   VbbHcc_tags_H_dR_Bj1__175->SetBinContent(18,0.4730599);
   VbbHcc_tags_H_dR_Bj1__175->SetBinContent(19,0.4730599);
   VbbHcc_tags_H_dR_Bj1__175->SetBinError(1,0.4730599);
   VbbHcc_tags_H_dR_Bj1__175->SetBinError(2,0.8193638);
   VbbHcc_tags_H_dR_Bj1__175->SetBinError(3,1.338015);
   VbbHcc_tags_H_dR_Bj1__175->SetBinError(4,0.6690077);
   VbbHcc_tags_H_dR_Bj1__175->SetBinError(5,0.9461198);
   VbbHcc_tags_H_dR_Bj1__175->SetBinError(6,0.6690077);
   VbbHcc_tags_H_dR_Bj1__175->SetBinError(7,0.4730599);
   VbbHcc_tags_H_dR_Bj1__175->SetBinError(9,0.4730599);
   VbbHcc_tags_H_dR_Bj1__175->SetBinError(11,0.4730599);
   VbbHcc_tags_H_dR_Bj1__175->SetBinError(15,0.4730599);
   VbbHcc_tags_H_dR_Bj1__175->SetBinError(18,0.4730599);
   VbbHcc_tags_H_dR_Bj1__175->SetBinError(19,0.4730599);
   VbbHcc_tags_H_dR_Bj1__175->SetEntries(26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_Bj1__175->SetFillColor(ci);
   VbbHcc_tags_H_dR_Bj1__175->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   VbbHcc_tags_H_dR_Bj1__175->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR_Bj1__175->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__175->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1__175->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__175->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__175->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__175->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__175->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1__175->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__175->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_tags_18->Modified();
   H_dR_Bj1_tags_18->cd();
   H_dR_Bj1_tags_18->SetSelected(H_dR_Bj1_tags_18);
}
