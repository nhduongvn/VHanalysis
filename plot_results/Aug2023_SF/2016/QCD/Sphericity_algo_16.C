#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_algo_16()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Fri Sep  1 13:23:38 2023) by ROOT version 6.28/04
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,-114124.3,1.133333,1027118);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity__574 = new TH1D("VbbHcc_algo_Sphericity__574","",25,0,1);
   VbbHcc_algo_Sphericity__574->SetBinContent(1,869518.1);
   VbbHcc_algo_Sphericity__574->SetBinContent(2,830789.8);
   VbbHcc_algo_Sphericity__574->SetBinContent(3,478355.3);
   VbbHcc_algo_Sphericity__574->SetBinContent(4,271841.2);
   VbbHcc_algo_Sphericity__574->SetBinContent(5,121797.3);
   VbbHcc_algo_Sphericity__574->SetBinContent(6,50136.9);
   VbbHcc_algo_Sphericity__574->SetBinContent(7,17493.56);
   VbbHcc_algo_Sphericity__574->SetBinContent(8,3846.566);
   VbbHcc_algo_Sphericity__574->SetBinContent(9,901.4946);
   VbbHcc_algo_Sphericity__574->SetBinContent(10,852.53);
   VbbHcc_algo_Sphericity__574->SetBinContent(11,257.0728);
   VbbHcc_algo_Sphericity__574->SetBinContent(12,127.0428);
   VbbHcc_algo_Sphericity__574->SetBinContent(13,159.8991);
   VbbHcc_algo_Sphericity__574->SetBinContent(14,322.3997);
   VbbHcc_algo_Sphericity__574->SetBinContent(15,30.37664);
   VbbHcc_algo_Sphericity__574->SetBinContent(16,35.53216);
   VbbHcc_algo_Sphericity__574->SetBinContent(17,160.2358);
   VbbHcc_algo_Sphericity__574->SetBinContent(18,40.10183);
   VbbHcc_algo_Sphericity__574->SetBinContent(19,8.260171);
   VbbHcc_algo_Sphericity__574->SetBinContent(20,6.769801);
   VbbHcc_algo_Sphericity__574->SetBinError(1,21894.24);
   VbbHcc_algo_Sphericity__574->SetBinError(2,24253.18);
   VbbHcc_algo_Sphericity__574->SetBinError(3,18967.05);
   VbbHcc_algo_Sphericity__574->SetBinError(4,16326.92);
   VbbHcc_algo_Sphericity__574->SetBinError(5,5316.51);
   VbbHcc_algo_Sphericity__574->SetBinError(6,3262.83);
   VbbHcc_algo_Sphericity__574->SetBinError(7,2331.844);
   VbbHcc_algo_Sphericity__574->SetBinError(8,672.3334);
   VbbHcc_algo_Sphericity__574->SetBinError(9,154.9517);
   VbbHcc_algo_Sphericity__574->SetBinError(10,300.4299);
   VbbHcc_algo_Sphericity__574->SetBinError(11,60.46946);
   VbbHcc_algo_Sphericity__574->SetBinError(12,41.0068);
   VbbHcc_algo_Sphericity__574->SetBinError(13,61.70434);
   VbbHcc_algo_Sphericity__574->SetBinError(14,227.1405);
   VbbHcc_algo_Sphericity__574->SetBinError(15,15.31021);
   VbbHcc_algo_Sphericity__574->SetBinError(16,14.68169);
   VbbHcc_algo_Sphericity__574->SetBinError(17,123.3364);
   VbbHcc_algo_Sphericity__574->SetBinError(18,18.82159);
   VbbHcc_algo_Sphericity__574->SetBinError(19,5.967191);
   VbbHcc_algo_Sphericity__574->SetBinError(20,4.895171);
   VbbHcc_algo_Sphericity__574->SetEntries(133403);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Sphericity__574->SetFillColor(ci);
   VbbHcc_algo_Sphericity__574->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity__574->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity__574->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__574->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity__574->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__574->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__574->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__574->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__574->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity__574->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__574->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_16->Modified();
   Sphericity_algo_16->cd();
   Sphericity_algo_16->SetSelected(Sphericity_algo_16);
}
