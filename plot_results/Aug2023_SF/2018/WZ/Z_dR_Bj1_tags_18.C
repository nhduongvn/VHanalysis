#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_tags_18()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_18/Z_dR_Bj1_tags_18
//=========  (Fri Sep  1 13:34:44 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_Bj1_tags_18 = new TCanvas("Z_dR_Bj1_tags_18", "Z_dR_Bj1_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_tags_18->SetHighLightColor(2);
   Z_dR_Bj1_tags_18->Range(-1.2,-0.4967129,6.8,4.470416);
   Z_dR_Bj1_tags_18->SetFillColor(0);
   Z_dR_Bj1_tags_18->SetBorderMode(0);
   Z_dR_Bj1_tags_18->SetBorderSize(2);
   Z_dR_Bj1_tags_18->SetLeftMargin(0.15);
   Z_dR_Bj1_tags_18->SetFrameBorderMode(0);
   Z_dR_Bj1_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR_Bj1__205 = new TH1D("VbbHcc_tags_Z_dR_Bj1__205","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinContent(1,0.9461198);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinContent(2,3.784479);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinContent(3,1.89224);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinContent(5,1.89224);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinContent(6,1.41918);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinContent(7,0.4730599);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinContent(8,0.4730599);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinContent(9,0.9461198);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinContent(20,0.4730599);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinError(1,0.6690077);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinError(2,1.338015);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinError(3,0.9461198);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinError(5,0.9461198);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinError(6,0.8193638);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinError(7,0.4730599);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinError(8,0.4730599);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinError(9,0.6690077);
   VbbHcc_tags_Z_dR_Bj1__205->SetBinError(20,0.4730599);
   VbbHcc_tags_Z_dR_Bj1__205->SetEntries(26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_Bj1__205->SetFillColor(ci);
   VbbHcc_tags_Z_dR_Bj1__205->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   VbbHcc_tags_Z_dR_Bj1__205->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR_Bj1__205->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__205->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1__205->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__205->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__205->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__205->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__205->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1__205->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__205->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_tags_18->Modified();
   Z_dR_Bj1_tags_18->cd();
   Z_dR_Bj1_tags_18->SetSelected(Z_dR_Bj1_tags_18);
}
