#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_algo_16()
{
//=========Macro generated from canvas: H_mass_algo_16/H_mass_algo_16
//=========  (Fri Sep  1 13:23:35 2023) by ROOT version 6.28/04
   TCanvas *H_mass_algo_16 = new TCanvas("H_mass_algo_16", "H_mass_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_algo_16->SetHighLightColor(2);
   H_mass_algo_16->Range(-80,-1956.693,453.3333,17610.23);
   H_mass_algo_16->SetFillColor(0);
   H_mass_algo_16->SetBorderMode(0);
   H_mass_algo_16->SetBorderSize(2);
   H_mass_algo_16->SetLeftMargin(0.15);
   H_mass_algo_16->SetFrameBorderMode(0);
   H_mass_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_mass__381 = new TH1D("VbbHcc_algo_H_mass__381","",40,0,400);
   VbbHcc_algo_H_mass__381->SetBinContent(3,1.14029);
   VbbHcc_algo_H_mass__381->SetBinContent(4,78.66335);
   VbbHcc_algo_H_mass__381->SetBinContent(5,651.8118);
   VbbHcc_algo_H_mass__381->SetBinContent(6,2113.15);
   VbbHcc_algo_H_mass__381->SetBinContent(7,4392.504);
   VbbHcc_algo_H_mass__381->SetBinContent(8,7514.245);
   VbbHcc_algo_H_mass__381->SetBinContent(9,10802.85);
   VbbHcc_algo_H_mass__381->SetBinContent(10,12845.19);
   VbbHcc_algo_H_mass__381->SetBinContent(11,14230.69);
   VbbHcc_algo_H_mass__381->SetBinContent(12,14908.13);
   VbbHcc_algo_H_mass__381->SetBinContent(13,14536.41);
   VbbHcc_algo_H_mass__381->SetBinContent(14,13364.1);
   VbbHcc_algo_H_mass__381->SetBinContent(15,11874.52);
   VbbHcc_algo_H_mass__381->SetBinContent(16,10483.26);
   VbbHcc_algo_H_mass__381->SetBinContent(17,9205.51);
   VbbHcc_algo_H_mass__381->SetBinContent(18,8071.822);
   VbbHcc_algo_H_mass__381->SetBinContent(19,6949.056);
   VbbHcc_algo_H_mass__381->SetBinContent(20,6001.208);
   VbbHcc_algo_H_mass__381->SetBinContent(21,5277.522);
   VbbHcc_algo_H_mass__381->SetBinContent(22,4767.746);
   VbbHcc_algo_H_mass__381->SetBinContent(23,4336.167);
   VbbHcc_algo_H_mass__381->SetBinContent(24,4026.058);
   VbbHcc_algo_H_mass__381->SetBinContent(25,3757.63);
   VbbHcc_algo_H_mass__381->SetBinContent(26,3527.069);
   VbbHcc_algo_H_mass__381->SetBinContent(27,3314.381);
   VbbHcc_algo_H_mass__381->SetBinContent(28,3158.386);
   VbbHcc_algo_H_mass__381->SetBinContent(29,3010.276);
   VbbHcc_algo_H_mass__381->SetBinContent(30,2877.029);
   VbbHcc_algo_H_mass__381->SetBinContent(31,2759.046);
   VbbHcc_algo_H_mass__381->SetBinContent(32,2657.732);
   VbbHcc_algo_H_mass__381->SetBinContent(33,2545.828);
   VbbHcc_algo_H_mass__381->SetBinContent(34,2453.377);
   VbbHcc_algo_H_mass__381->SetBinContent(35,2380.553);
   VbbHcc_algo_H_mass__381->SetBinContent(36,2298.204);
   VbbHcc_algo_H_mass__381->SetBinContent(37,2248.874);
   VbbHcc_algo_H_mass__381->SetBinContent(38,2164.43);
   VbbHcc_algo_H_mass__381->SetBinContent(39,2129.291);
   VbbHcc_algo_H_mass__381->SetBinContent(40,2066.609);
   VbbHcc_algo_H_mass__381->SetBinContent(41,104068.3);
   VbbHcc_algo_H_mass__381->SetBinError(3,0.2203897);
   VbbHcc_algo_H_mass__381->SetBinError(4,1.911267);
   VbbHcc_algo_H_mass__381->SetBinError(5,5.592913);
   VbbHcc_algo_H_mass__381->SetBinError(6,10.23243);
   VbbHcc_algo_H_mass__381->SetBinError(7,14.92814);
   VbbHcc_algo_H_mass__381->SetBinError(8,19.67853);
   VbbHcc_algo_H_mass__381->SetBinError(9,23.72359);
   VbbHcc_algo_H_mass__381->SetBinError(10,25.89236);
   VbbHcc_algo_H_mass__381->SetBinError(11,27.28352);
   VbbHcc_algo_H_mass__381->SetBinError(12,27.96583);
   VbbHcc_algo_H_mass__381->SetBinError(13,27.61624);
   VbbHcc_algo_H_mass__381->SetBinError(14,26.45379);
   VbbHcc_algo_H_mass__381->SetBinError(15,24.88145);
   VbbHcc_algo_H_mass__381->SetBinError(16,23.33566);
   VbbHcc_algo_H_mass__381->SetBinError(17,21.83546);
   VbbHcc_algo_H_mass__381->SetBinError(18,20.42332);
   VbbHcc_algo_H_mass__381->SetBinError(19,18.89555);
   VbbHcc_algo_H_mass__381->SetBinError(20,17.46027);
   VbbHcc_algo_H_mass__381->SetBinError(21,16.3161);
   VbbHcc_algo_H_mass__381->SetBinError(22,15.46742);
   VbbHcc_algo_H_mass__381->SetBinError(23,14.74284);
   VbbHcc_algo_H_mass__381->SetBinError(24,14.1874);
   VbbHcc_algo_H_mass__381->SetBinError(25,13.73212);
   VbbHcc_algo_H_mass__381->SetBinError(26,13.30035);
   VbbHcc_algo_H_mass__381->SetBinError(27,12.89828);
   VbbHcc_algo_H_mass__381->SetBinError(28,12.60152);
   VbbHcc_algo_H_mass__381->SetBinError(29,12.31009);
   VbbHcc_algo_H_mass__381->SetBinError(30,12.04557);
   VbbHcc_algo_H_mass__381->SetBinError(31,11.81239);
   VbbHcc_algo_H_mass__381->SetBinError(32,11.58628);
   VbbHcc_algo_H_mass__381->SetBinError(33,11.35026);
   VbbHcc_algo_H_mass__381->SetBinError(34,11.17034);
   VbbHcc_algo_H_mass__381->SetBinError(35,11.01013);
   VbbHcc_algo_H_mass__381->SetBinError(36,10.8233);
   VbbHcc_algo_H_mass__381->SetBinError(37,10.70718);
   VbbHcc_algo_H_mass__381->SetBinError(38,10.51049);
   VbbHcc_algo_H_mass__381->SetBinError(39,10.43068);
   VbbHcc_algo_H_mass__381->SetBinError(40,10.27869);
   VbbHcc_algo_H_mass__381->SetBinError(41,73.92374);
   VbbHcc_algo_H_mass__381->SetEntries(6564600);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_mass__381->SetFillColor(ci);
   VbbHcc_algo_H_mass__381->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_algo_H_mass__381->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_H_mass__381->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__381->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_mass__381->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__381->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__381->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__381->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__381->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_mass__381->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__381->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_algo_16->Modified();
   H_mass_algo_16->cd();
   H_mass_algo_16->SetSelected(H_mass_algo_16);
}
