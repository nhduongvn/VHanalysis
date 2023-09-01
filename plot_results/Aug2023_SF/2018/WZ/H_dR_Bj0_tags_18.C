#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_tags_18()
{
//=========Macro generated from canvas: H_dR_Bj0_tags_18/H_dR_Bj0_tags_18
//=========  (Fri Sep  1 13:34:44 2023) by ROOT version 6.28/04
   TCanvas *H_dR_Bj0_tags_18 = new TCanvas("H_dR_Bj0_tags_18", "H_dR_Bj0_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_tags_18->SetHighLightColor(2);
   H_dR_Bj0_tags_18->Range(-1.2,-0.3725347,6.8,3.352812);
   H_dR_Bj0_tags_18->SetFillColor(0);
   H_dR_Bj0_tags_18->SetBorderMode(0);
   H_dR_Bj0_tags_18->SetBorderSize(2);
   H_dR_Bj0_tags_18->SetLeftMargin(0.15);
   H_dR_Bj0_tags_18->SetFrameBorderMode(0);
   H_dR_Bj0_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR_Bj0__160 = new TH1D("VbbHcc_tags_H_dR_Bj0__160","",30,0,6);
   VbbHcc_tags_H_dR_Bj0__160->SetBinContent(1,1.41918);
   VbbHcc_tags_H_dR_Bj0__160->SetBinContent(2,2.838359);
   VbbHcc_tags_H_dR_Bj0__160->SetBinContent(3,1.89224);
   VbbHcc_tags_H_dR_Bj0__160->SetBinContent(4,0.4730599);
   VbbHcc_tags_H_dR_Bj0__160->SetBinContent(5,0.4730599);
   VbbHcc_tags_H_dR_Bj0__160->SetBinContent(7,0.9461198);
   VbbHcc_tags_H_dR_Bj0__160->SetBinContent(9,0.9461198);
   VbbHcc_tags_H_dR_Bj0__160->SetBinContent(12,0.9461198);
   VbbHcc_tags_H_dR_Bj0__160->SetBinContent(13,0.4730599);
   VbbHcc_tags_H_dR_Bj0__160->SetBinContent(15,0.4730599);
   VbbHcc_tags_H_dR_Bj0__160->SetBinContent(17,0.4730599);
   VbbHcc_tags_H_dR_Bj0__160->SetBinContent(18,0.9461198);
   VbbHcc_tags_H_dR_Bj0__160->SetBinError(1,0.8193638);
   VbbHcc_tags_H_dR_Bj0__160->SetBinError(2,1.158755);
   VbbHcc_tags_H_dR_Bj0__160->SetBinError(3,0.9461198);
   VbbHcc_tags_H_dR_Bj0__160->SetBinError(4,0.4730599);
   VbbHcc_tags_H_dR_Bj0__160->SetBinError(5,0.4730599);
   VbbHcc_tags_H_dR_Bj0__160->SetBinError(7,0.6690077);
   VbbHcc_tags_H_dR_Bj0__160->SetBinError(9,0.6690077);
   VbbHcc_tags_H_dR_Bj0__160->SetBinError(12,0.6690077);
   VbbHcc_tags_H_dR_Bj0__160->SetBinError(13,0.4730599);
   VbbHcc_tags_H_dR_Bj0__160->SetBinError(15,0.4730599);
   VbbHcc_tags_H_dR_Bj0__160->SetBinError(17,0.4730599);
   VbbHcc_tags_H_dR_Bj0__160->SetBinError(18,0.6690077);
   VbbHcc_tags_H_dR_Bj0__160->SetEntries(26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_Bj0__160->SetFillColor(ci);
   VbbHcc_tags_H_dR_Bj0__160->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VbbHcc_tags_H_dR_Bj0__160->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR_Bj0__160->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__160->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0__160->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__160->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__160->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__160->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__160->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0__160->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__160->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_tags_18->Modified();
   H_dR_Bj0_tags_18->cd();
   H_dR_Bj0_tags_18->SetSelected(H_dR_Bj0_tags_18);
}
