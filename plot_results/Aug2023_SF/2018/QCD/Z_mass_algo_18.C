#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_algo_18()
{
//=========Macro generated from canvas: Z_mass_algo_18/Z_mass_algo_18
//=========  (Fri Sep  1 13:34:47 2023) by ROOT version 6.28/04
   TCanvas *Z_mass_algo_18 = new TCanvas("Z_mass_algo_18", "Z_mass_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_algo_18->SetHighLightColor(2);
   Z_mass_algo_18->Range(-80,-10012.29,453.3333,90110.56);
   Z_mass_algo_18->SetFillColor(0);
   Z_mass_algo_18->SetBorderMode(0);
   Z_mass_algo_18->SetBorderSize(2);
   Z_mass_algo_18->SetLeftMargin(0.15);
   Z_mass_algo_18->SetFrameBorderMode(0);
   Z_mass_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_mass__364 = new TH1D("VbbHcc_algo_Z_mass__364","",40,0,400);
   VbbHcc_algo_Z_mass__364->SetBinContent(3,30.19468);
   VbbHcc_algo_Z_mass__364->SetBinContent(4,1690.151);
   VbbHcc_algo_Z_mass__364->SetBinContent(5,19308.28);
   VbbHcc_algo_Z_mass__364->SetBinContent(6,73295.56);
   VbbHcc_algo_Z_mass__364->SetBinContent(7,69447.14);
   VbbHcc_algo_Z_mass__364->SetBinContent(8,58684.94);
   VbbHcc_algo_Z_mass__364->SetBinContent(9,76193.57);
   VbbHcc_algo_Z_mass__364->SetBinContent(10,65982.37);
   VbbHcc_algo_Z_mass__364->SetBinContent(11,74040.23);
   VbbHcc_algo_Z_mass__364->SetBinContent(12,70756.4);
   VbbHcc_algo_Z_mass__364->SetBinContent(13,76284.07);
   VbbHcc_algo_Z_mass__364->SetBinContent(14,67621.1);
   VbbHcc_algo_Z_mass__364->SetBinContent(15,64174.44);
   VbbHcc_algo_Z_mass__364->SetBinContent(16,69288.03);
   VbbHcc_algo_Z_mass__364->SetBinContent(17,73050.54);
   VbbHcc_algo_Z_mass__364->SetBinContent(18,60036.27);
   VbbHcc_algo_Z_mass__364->SetBinContent(19,61492.81);
   VbbHcc_algo_Z_mass__364->SetBinContent(20,54790.81);
   VbbHcc_algo_Z_mass__364->SetBinContent(21,44447.24);
   VbbHcc_algo_Z_mass__364->SetBinContent(22,42068.88);
   VbbHcc_algo_Z_mass__364->SetBinContent(23,40988.61);
   VbbHcc_algo_Z_mass__364->SetBinContent(24,39215.81);
   VbbHcc_algo_Z_mass__364->SetBinContent(25,39086.61);
   VbbHcc_algo_Z_mass__364->SetBinContent(26,35383.77);
   VbbHcc_algo_Z_mass__364->SetBinContent(27,32863.46);
   VbbHcc_algo_Z_mass__364->SetBinContent(28,35404.19);
   VbbHcc_algo_Z_mass__364->SetBinContent(29,36152.95);
   VbbHcc_algo_Z_mass__364->SetBinContent(30,29285.09);
   VbbHcc_algo_Z_mass__364->SetBinContent(31,29213.44);
   VbbHcc_algo_Z_mass__364->SetBinContent(32,20748.14);
   VbbHcc_algo_Z_mass__364->SetBinContent(33,22133.33);
   VbbHcc_algo_Z_mass__364->SetBinContent(34,21388.16);
   VbbHcc_algo_Z_mass__364->SetBinContent(35,18178.35);
   VbbHcc_algo_Z_mass__364->SetBinContent(36,21651.48);
   VbbHcc_algo_Z_mass__364->SetBinContent(37,14760.41);
   VbbHcc_algo_Z_mass__364->SetBinContent(38,13464.17);
   VbbHcc_algo_Z_mass__364->SetBinContent(39,18686.32);
   VbbHcc_algo_Z_mass__364->SetBinContent(40,18833.57);
   VbbHcc_algo_Z_mass__364->SetBinContent(41,674477.7);
   VbbHcc_algo_Z_mass__364->SetBinError(3,30.19468);
   VbbHcc_algo_Z_mass__364->SetBinError(4,878.6286);
   VbbHcc_algo_Z_mass__364->SetBinError(5,3865.23);
   VbbHcc_algo_Z_mass__364->SetBinError(6,21963.02);
   VbbHcc_algo_Z_mass__364->SetBinError(7,5654.147);
   VbbHcc_algo_Z_mass__364->SetBinError(8,4197.523);
   VbbHcc_algo_Z_mass__364->SetBinError(9,5882.466);
   VbbHcc_algo_Z_mass__364->SetBinError(10,4896.372);
   VbbHcc_algo_Z_mass__364->SetBinError(11,5567.285);
   VbbHcc_algo_Z_mass__364->SetBinError(12,4874.575);
   VbbHcc_algo_Z_mass__364->SetBinError(13,6164.946);
   VbbHcc_algo_Z_mass__364->SetBinError(14,4824.484);
   VbbHcc_algo_Z_mass__364->SetBinError(15,4768.467);
   VbbHcc_algo_Z_mass__364->SetBinError(16,4863.045);
   VbbHcc_algo_Z_mass__364->SetBinError(17,6192.074);
   VbbHcc_algo_Z_mass__364->SetBinError(18,4521.201);
   VbbHcc_algo_Z_mass__364->SetBinError(19,4442.015);
   VbbHcc_algo_Z_mass__364->SetBinError(20,4708.697);
   VbbHcc_algo_Z_mass__364->SetBinError(21,4356.657);
   VbbHcc_algo_Z_mass__364->SetBinError(22,3336.17);
   VbbHcc_algo_Z_mass__364->SetBinError(23,3396.295);
   VbbHcc_algo_Z_mass__364->SetBinError(24,3977.569);
   VbbHcc_algo_Z_mass__364->SetBinError(25,4240.067);
   VbbHcc_algo_Z_mass__364->SetBinError(26,6272.37);
   VbbHcc_algo_Z_mass__364->SetBinError(27,3526.529);
   VbbHcc_algo_Z_mass__364->SetBinError(28,3226.136);
   VbbHcc_algo_Z_mass__364->SetBinError(29,7446.486);
   VbbHcc_algo_Z_mass__364->SetBinError(30,2918.61);
   VbbHcc_algo_Z_mass__364->SetBinError(31,3709.429);
   VbbHcc_algo_Z_mass__364->SetBinError(32,1948.435);
   VbbHcc_algo_Z_mass__364->SetBinError(33,2349.32);
   VbbHcc_algo_Z_mass__364->SetBinError(34,2675.428);
   VbbHcc_algo_Z_mass__364->SetBinError(35,2077.53);
   VbbHcc_algo_Z_mass__364->SetBinError(36,2633.009);
   VbbHcc_algo_Z_mass__364->SetBinError(37,1535.676);
   VbbHcc_algo_Z_mass__364->SetBinError(38,1508.522);
   VbbHcc_algo_Z_mass__364->SetBinError(39,2782.035);
   VbbHcc_algo_Z_mass__364->SetBinError(40,3650.235);
   VbbHcc_algo_Z_mass__364->SetBinError(41,70020.76);
   VbbHcc_algo_Z_mass__364->SetEntries(112946);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_mass__364->SetFillColor(ci);
   VbbHcc_algo_Z_mass__364->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_algo_Z_mass__364->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_Z_mass__364->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__364->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__364->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__364->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__364->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__364->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__364->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__364->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__364->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_algo_18->Modified();
   Z_mass_algo_18->cd();
   Z_mass_algo_18->SetSelected(Z_mass_algo_18);
}
