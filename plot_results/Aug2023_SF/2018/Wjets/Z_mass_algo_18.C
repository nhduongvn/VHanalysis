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
   Z_mass_algo_18->Range(-80,-31.65516,453.3333,284.8964);
   Z_mass_algo_18->SetFillColor(0);
   Z_mass_algo_18->SetBorderMode(0);
   Z_mass_algo_18->SetBorderSize(2);
   Z_mass_algo_18->SetLeftMargin(0.15);
   Z_mass_algo_18->SetFrameBorderMode(0);
   Z_mass_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_mass__368 = new TH1D("VbbHcc_algo_Z_mass__368","",40,0,400);
   VbbHcc_algo_Z_mass__368->SetBinContent(4,0.7668591);
   VbbHcc_algo_Z_mass__368->SetBinContent(5,20.31119);
   VbbHcc_algo_Z_mass__368->SetBinContent(6,77.65141);
   VbbHcc_algo_Z_mass__368->SetBinContent(7,81.83664);
   VbbHcc_algo_Z_mass__368->SetBinContent(8,155.7556);
   VbbHcc_algo_Z_mass__368->SetBinContent(9,202.6866);
   VbbHcc_algo_Z_mass__368->SetBinContent(10,161.6019);
   VbbHcc_algo_Z_mass__368->SetBinContent(11,119.2853);
   VbbHcc_algo_Z_mass__368->SetBinContent(12,157.414);
   VbbHcc_algo_Z_mass__368->SetBinContent(13,155.8731);
   VbbHcc_algo_Z_mass__368->SetBinContent(14,160.7855);
   VbbHcc_algo_Z_mass__368->SetBinContent(15,241.1822);
   VbbHcc_algo_Z_mass__368->SetBinContent(16,122.7574);
   VbbHcc_algo_Z_mass__368->SetBinContent(17,140.8758);
   VbbHcc_algo_Z_mass__368->SetBinContent(18,106.862);
   VbbHcc_algo_Z_mass__368->SetBinContent(19,101.7903);
   VbbHcc_algo_Z_mass__368->SetBinContent(20,130.4724);
   VbbHcc_algo_Z_mass__368->SetBinContent(21,114.693);
   VbbHcc_algo_Z_mass__368->SetBinContent(22,91.30924);
   VbbHcc_algo_Z_mass__368->SetBinContent(23,69.44637);
   VbbHcc_algo_Z_mass__368->SetBinContent(24,91.89044);
   VbbHcc_algo_Z_mass__368->SetBinContent(25,89.68734);
   VbbHcc_algo_Z_mass__368->SetBinContent(26,93.40885);
   VbbHcc_algo_Z_mass__368->SetBinContent(27,66.19222);
   VbbHcc_algo_Z_mass__368->SetBinContent(28,117.609);
   VbbHcc_algo_Z_mass__368->SetBinContent(29,57.28501);
   VbbHcc_algo_Z_mass__368->SetBinContent(30,48.9154);
   VbbHcc_algo_Z_mass__368->SetBinContent(31,101.573);
   VbbHcc_algo_Z_mass__368->SetBinContent(32,45.34262);
   VbbHcc_algo_Z_mass__368->SetBinContent(33,67.66763);
   VbbHcc_algo_Z_mass__368->SetBinContent(34,41.23271);
   VbbHcc_algo_Z_mass__368->SetBinContent(35,41.48394);
   VbbHcc_algo_Z_mass__368->SetBinContent(36,45.70898);
   VbbHcc_algo_Z_mass__368->SetBinContent(37,27.30694);
   VbbHcc_algo_Z_mass__368->SetBinContent(38,34.04669);
   VbbHcc_algo_Z_mass__368->SetBinContent(39,41.9799);
   VbbHcc_algo_Z_mass__368->SetBinContent(40,41.31323);
   VbbHcc_algo_Z_mass__368->SetBinContent(41,1437.031);
   VbbHcc_algo_Z_mass__368->SetBinError(4,0.5956507);
   VbbHcc_algo_Z_mass__368->SetBinError(5,6.324844);
   VbbHcc_algo_Z_mass__368->SetBinError(6,14.62457);
   VbbHcc_algo_Z_mass__368->SetBinError(7,16.24783);
   VbbHcc_algo_Z_mass__368->SetBinError(8,20.7756);
   VbbHcc_algo_Z_mass__368->SetBinError(9,24.41804);
   VbbHcc_algo_Z_mass__368->SetBinError(10,25.8167);
   VbbHcc_algo_Z_mass__368->SetBinError(11,16.05241);
   VbbHcc_algo_Z_mass__368->SetBinError(12,21.88101);
   VbbHcc_algo_Z_mass__368->SetBinError(13,25.08366);
   VbbHcc_algo_Z_mass__368->SetBinError(14,26.80966);
   VbbHcc_algo_Z_mass__368->SetBinError(15,53.84697);
   VbbHcc_algo_Z_mass__368->SetBinError(16,14.57107);
   VbbHcc_algo_Z_mass__368->SetBinError(17,22.17785);
   VbbHcc_algo_Z_mass__368->SetBinError(18,11.37638);
   VbbHcc_algo_Z_mass__368->SetBinError(19,12.87772);
   VbbHcc_algo_Z_mass__368->SetBinError(20,22.68367);
   VbbHcc_algo_Z_mass__368->SetBinError(21,18.91225);
   VbbHcc_algo_Z_mass__368->SetBinError(22,10.71373);
   VbbHcc_algo_Z_mass__368->SetBinError(23,7.613299);
   VbbHcc_algo_Z_mass__368->SetBinError(24,13.54915);
   VbbHcc_algo_Z_mass__368->SetBinError(25,21.63632);
   VbbHcc_algo_Z_mass__368->SetBinError(26,20.90805);
   VbbHcc_algo_Z_mass__368->SetBinError(27,10.51253);
   VbbHcc_algo_Z_mass__368->SetBinError(28,45.73352);
   VbbHcc_algo_Z_mass__368->SetBinError(29,8.10809);
   VbbHcc_algo_Z_mass__368->SetBinError(30,8.472099);
   VbbHcc_algo_Z_mass__368->SetBinError(31,39.17475);
   VbbHcc_algo_Z_mass__368->SetBinError(32,8.659965);
   VbbHcc_algo_Z_mass__368->SetBinError(33,21.66334);
   VbbHcc_algo_Z_mass__368->SetBinError(34,6.192854);
   VbbHcc_algo_Z_mass__368->SetBinError(35,6.784449);
   VbbHcc_algo_Z_mass__368->SetBinError(36,7.639206);
   VbbHcc_algo_Z_mass__368->SetBinError(37,3.861123);
   VbbHcc_algo_Z_mass__368->SetBinError(38,6.066018);
   VbbHcc_algo_Z_mass__368->SetBinError(39,9.176965);
   VbbHcc_algo_Z_mass__368->SetBinError(40,11.73262);
   VbbHcc_algo_Z_mass__368->SetBinError(41,53.89143);
   VbbHcc_algo_Z_mass__368->SetEntries(14668);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_mass__368->SetFillColor(ci);
   VbbHcc_algo_Z_mass__368->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_algo_Z_mass__368->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_Z_mass__368->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__368->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__368->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__368->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__368->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__368->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__368->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__368->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__368->Draw("HIST");
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
