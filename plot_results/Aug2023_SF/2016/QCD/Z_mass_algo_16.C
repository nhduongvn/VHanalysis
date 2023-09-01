#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_algo_16()
{
//=========Macro generated from canvas: Z_mass_algo_16/Z_mass_algo_16
//=========  (Fri Sep  1 13:23:35 2023) by ROOT version 6.28/04
   TCanvas *Z_mass_algo_16 = new TCanvas("Z_mass_algo_16", "Z_mass_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_algo_16->SetHighLightColor(2);
   Z_mass_algo_16->Range(-80,-13243.26,453.3333,119189.4);
   Z_mass_algo_16->SetFillColor(0);
   Z_mass_algo_16->SetBorderMode(0);
   Z_mass_algo_16->SetBorderSize(2);
   Z_mass_algo_16->SetLeftMargin(0.15);
   Z_mass_algo_16->SetFrameBorderMode(0);
   Z_mass_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_mass__364 = new TH1D("VbbHcc_algo_Z_mass__364","",40,0,400);
   VbbHcc_algo_Z_mass__364->SetBinContent(3,184.6355);
   VbbHcc_algo_Z_mass__364->SetBinContent(4,7469.722);
   VbbHcc_algo_Z_mass__364->SetBinContent(5,44301.26);
   VbbHcc_algo_Z_mass__364->SetBinContent(6,69223.91);
   VbbHcc_algo_Z_mass__364->SetBinContent(7,79537.29);
   VbbHcc_algo_Z_mass__364->SetBinContent(8,90545.85);
   VbbHcc_algo_Z_mass__364->SetBinContent(9,87711.08);
   VbbHcc_algo_Z_mass__364->SetBinContent(10,90713.12);
   VbbHcc_algo_Z_mass__364->SetBinContent(11,95456.15);
   VbbHcc_algo_Z_mass__364->SetBinContent(12,99701.89);
   VbbHcc_algo_Z_mass__364->SetBinContent(13,100901);
   VbbHcc_algo_Z_mass__364->SetBinContent(14,93061);
   VbbHcc_algo_Z_mass__364->SetBinContent(15,90648.09);
   VbbHcc_algo_Z_mass__364->SetBinContent(16,75394.26);
   VbbHcc_algo_Z_mass__364->SetBinContent(17,82732.96);
   VbbHcc_algo_Z_mass__364->SetBinContent(18,71010.27);
   VbbHcc_algo_Z_mass__364->SetBinContent(19,64749.69);
   VbbHcc_algo_Z_mass__364->SetBinContent(20,78433.37);
   VbbHcc_algo_Z_mass__364->SetBinContent(21,57807.95);
   VbbHcc_algo_Z_mass__364->SetBinContent(22,55215.07);
   VbbHcc_algo_Z_mass__364->SetBinContent(23,49844.21);
   VbbHcc_algo_Z_mass__364->SetBinContent(24,45429.96);
   VbbHcc_algo_Z_mass__364->SetBinContent(25,39845.7);
   VbbHcc_algo_Z_mass__364->SetBinContent(26,54911.9);
   VbbHcc_algo_Z_mass__364->SetBinContent(27,34376.82);
   VbbHcc_algo_Z_mass__364->SetBinContent(28,35400.74);
   VbbHcc_algo_Z_mass__364->SetBinContent(29,28944.47);
   VbbHcc_algo_Z_mass__364->SetBinContent(30,29132.68);
   VbbHcc_algo_Z_mass__364->SetBinContent(31,29418.72);
   VbbHcc_algo_Z_mass__364->SetBinContent(32,28930.2);
   VbbHcc_algo_Z_mass__364->SetBinContent(33,27750.03);
   VbbHcc_algo_Z_mass__364->SetBinContent(34,28261.57);
   VbbHcc_algo_Z_mass__364->SetBinContent(35,20791.03);
   VbbHcc_algo_Z_mass__364->SetBinContent(36,25136.18);
   VbbHcc_algo_Z_mass__364->SetBinContent(37,20705.32);
   VbbHcc_algo_Z_mass__364->SetBinContent(38,36707.98);
   VbbHcc_algo_Z_mass__364->SetBinContent(39,22094.23);
   VbbHcc_algo_Z_mass__364->SetBinContent(40,24914.41);
   VbbHcc_algo_Z_mass__364->SetBinContent(41,629285.6);
   VbbHcc_algo_Z_mass__364->SetBinError(3,184.6355);
   VbbHcc_algo_Z_mass__364->SetBinError(4,1938.626);
   VbbHcc_algo_Z_mass__364->SetBinError(5,4532.603);
   VbbHcc_algo_Z_mass__364->SetBinError(6,4482.42);
   VbbHcc_algo_Z_mass__364->SetBinError(7,4366.489);
   VbbHcc_algo_Z_mass__364->SetBinError(8,4874.724);
   VbbHcc_algo_Z_mass__364->SetBinError(9,4745.094);
   VbbHcc_algo_Z_mass__364->SetBinError(10,5496.976);
   VbbHcc_algo_Z_mass__364->SetBinError(11,5203.827);
   VbbHcc_algo_Z_mass__364->SetBinError(12,5433.329);
   VbbHcc_algo_Z_mass__364->SetBinError(13,16110.59);
   VbbHcc_algo_Z_mass__364->SetBinError(14,5038.148);
   VbbHcc_algo_Z_mass__364->SetBinError(15,5053.903);
   VbbHcc_algo_Z_mass__364->SetBinError(16,4385.216);
   VbbHcc_algo_Z_mass__364->SetBinError(17,4762.98);
   VbbHcc_algo_Z_mass__364->SetBinError(18,4297.056);
   VbbHcc_algo_Z_mass__364->SetBinError(19,3771.143);
   VbbHcc_algo_Z_mass__364->SetBinError(20,19891.63);
   VbbHcc_algo_Z_mass__364->SetBinError(21,3686.441);
   VbbHcc_algo_Z_mass__364->SetBinError(22,3537.051);
   VbbHcc_algo_Z_mass__364->SetBinError(23,3140.839);
   VbbHcc_algo_Z_mass__364->SetBinError(24,3093.86);
   VbbHcc_algo_Z_mass__364->SetBinError(25,3054.151);
   VbbHcc_algo_Z_mass__364->SetBinError(26,16785.7);
   VbbHcc_algo_Z_mass__364->SetBinError(27,2803.932);
   VbbHcc_algo_Z_mass__364->SetBinError(28,3047.374);
   VbbHcc_algo_Z_mass__364->SetBinError(29,2158.67);
   VbbHcc_algo_Z_mass__364->SetBinError(30,2359.519);
   VbbHcc_algo_Z_mass__364->SetBinError(31,2651.446);
   VbbHcc_algo_Z_mass__364->SetBinError(32,2368.626);
   VbbHcc_algo_Z_mass__364->SetBinError(33,2570.547);
   VbbHcc_algo_Z_mass__364->SetBinError(34,2878.339);
   VbbHcc_algo_Z_mass__364->SetBinError(35,1676.762);
   VbbHcc_algo_Z_mass__364->SetBinError(36,2470.656);
   VbbHcc_algo_Z_mass__364->SetBinError(37,2024.608);
   VbbHcc_algo_Z_mass__364->SetBinError(38,14423.49);
   VbbHcc_algo_Z_mass__364->SetBinError(39,2472.983);
   VbbHcc_algo_Z_mass__364->SetBinError(40,2561.177);
   VbbHcc_algo_Z_mass__364->SetBinError(41,11673.71);
   VbbHcc_algo_Z_mass__364->SetEntries(133403);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_algo_16->Modified();
   Z_mass_algo_16->cd();
   Z_mass_algo_16->SetSelected(Z_mass_algo_16);
}
