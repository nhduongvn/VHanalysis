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
   Z_mass_algo_18->Range(-80,-91.62735,453.3333,824.6461);
   Z_mass_algo_18->SetFillColor(0);
   Z_mass_algo_18->SetBorderMode(0);
   Z_mass_algo_18->SetBorderSize(2);
   Z_mass_algo_18->SetLeftMargin(0.15);
   Z_mass_algo_18->SetFrameBorderMode(0);
   Z_mass_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_mass__365 = new TH1D("VbbHcc_algo_Z_mass__365","",40,0,400);
   VbbHcc_algo_Z_mass__365->SetBinContent(3,0.05444492);
   VbbHcc_algo_Z_mass__365->SetBinContent(4,9.925486);
   VbbHcc_algo_Z_mass__365->SetBinContent(5,67.81686);
   VbbHcc_algo_Z_mass__365->SetBinContent(6,165.0729);
   VbbHcc_algo_Z_mass__365->SetBinContent(7,274.2623);
   VbbHcc_algo_Z_mass__365->SetBinContent(8,433.4359);
   VbbHcc_algo_Z_mass__365->SetBinContent(9,614.9084);
   VbbHcc_algo_Z_mass__365->SetBinContent(10,698.1131);
   VbbHcc_algo_Z_mass__365->SetBinContent(11,693.0318);
   VbbHcc_algo_Z_mass__365->SetBinContent(12,674.7784);
   VbbHcc_algo_Z_mass__365->SetBinContent(13,667.0429);
   VbbHcc_algo_Z_mass__365->SetBinContent(14,651.2022);
   VbbHcc_algo_Z_mass__365->SetBinContent(15,582.4731);
   VbbHcc_algo_Z_mass__365->SetBinContent(16,518.2776);
   VbbHcc_algo_Z_mass__365->SetBinContent(17,467.8583);
   VbbHcc_algo_Z_mass__365->SetBinContent(18,455.3303);
   VbbHcc_algo_Z_mass__365->SetBinContent(19,400.9741);
   VbbHcc_algo_Z_mass__365->SetBinContent(20,357.9372);
   VbbHcc_algo_Z_mass__365->SetBinContent(21,341.0687);
   VbbHcc_algo_Z_mass__365->SetBinContent(22,291.9286);
   VbbHcc_algo_Z_mass__365->SetBinContent(23,270.0571);
   VbbHcc_algo_Z_mass__365->SetBinContent(24,249.6247);
   VbbHcc_algo_Z_mass__365->SetBinContent(25,227.4268);
   VbbHcc_algo_Z_mass__365->SetBinContent(26,215.2191);
   VbbHcc_algo_Z_mass__365->SetBinContent(27,214.3748);
   VbbHcc_algo_Z_mass__365->SetBinContent(28,210.079);
   VbbHcc_algo_Z_mass__365->SetBinContent(29,194.3486);
   VbbHcc_algo_Z_mass__365->SetBinContent(30,165.5325);
   VbbHcc_algo_Z_mass__365->SetBinContent(31,164.775);
   VbbHcc_algo_Z_mass__365->SetBinContent(32,164.7439);
   VbbHcc_algo_Z_mass__365->SetBinContent(33,147.0954);
   VbbHcc_algo_Z_mass__365->SetBinContent(34,153.1686);
   VbbHcc_algo_Z_mass__365->SetBinContent(35,149.0991);
   VbbHcc_algo_Z_mass__365->SetBinContent(36,119.7362);
   VbbHcc_algo_Z_mass__365->SetBinContent(37,131.8764);
   VbbHcc_algo_Z_mass__365->SetBinContent(38,113.9499);
   VbbHcc_algo_Z_mass__365->SetBinContent(39,118.7951);
   VbbHcc_algo_Z_mass__365->SetBinContent(40,112.4205);
   VbbHcc_algo_Z_mass__365->SetBinContent(41,4576.897);
   VbbHcc_algo_Z_mass__365->SetBinError(3,0.05444492);
   VbbHcc_algo_Z_mass__365->SetBinError(4,1.648722);
   VbbHcc_algo_Z_mass__365->SetBinError(5,4.881645);
   VbbHcc_algo_Z_mass__365->SetBinError(6,7.040569);
   VbbHcc_algo_Z_mass__365->SetBinError(7,9.709625);
   VbbHcc_algo_Z_mass__365->SetBinError(8,11.53287);
   VbbHcc_algo_Z_mass__365->SetBinError(9,15.45191);
   VbbHcc_algo_Z_mass__365->SetBinError(10,15.79574);
   VbbHcc_algo_Z_mass__365->SetBinError(11,16.49589);
   VbbHcc_algo_Z_mass__365->SetBinError(12,14.25819);
   VbbHcc_algo_Z_mass__365->SetBinError(13,14.63006);
   VbbHcc_algo_Z_mass__365->SetBinError(14,14.15104);
   VbbHcc_algo_Z_mass__365->SetBinError(15,13.79963);
   VbbHcc_algo_Z_mass__365->SetBinError(16,12.51904);
   VbbHcc_algo_Z_mass__365->SetBinError(17,13.87485);
   VbbHcc_algo_Z_mass__365->SetBinError(18,14.84587);
   VbbHcc_algo_Z_mass__365->SetBinError(19,11.5625);
   VbbHcc_algo_Z_mass__365->SetBinError(20,10.79977);
   VbbHcc_algo_Z_mass__365->SetBinError(21,13.30388);
   VbbHcc_algo_Z_mass__365->SetBinError(22,9.701788);
   VbbHcc_algo_Z_mass__365->SetBinError(23,9.567835);
   VbbHcc_algo_Z_mass__365->SetBinError(24,9.590381);
   VbbHcc_algo_Z_mass__365->SetBinError(25,8.413061);
   VbbHcc_algo_Z_mass__365->SetBinError(26,8.367343);
   VbbHcc_algo_Z_mass__365->SetBinError(27,8.336997);
   VbbHcc_algo_Z_mass__365->SetBinError(28,9.45236);
   VbbHcc_algo_Z_mass__365->SetBinError(29,8.365332);
   VbbHcc_algo_Z_mass__365->SetBinError(30,7.204105);
   VbbHcc_algo_Z_mass__365->SetBinError(31,7.335356);
   VbbHcc_algo_Z_mass__365->SetBinError(32,7.329382);
   VbbHcc_algo_Z_mass__365->SetBinError(33,7.083361);
   VbbHcc_algo_Z_mass__365->SetBinError(34,7.503312);
   VbbHcc_algo_Z_mass__365->SetBinError(35,7.01754);
   VbbHcc_algo_Z_mass__365->SetBinError(36,5.737346);
   VbbHcc_algo_Z_mass__365->SetBinError(37,6.834941);
   VbbHcc_algo_Z_mass__365->SetBinError(38,5.87465);
   VbbHcc_algo_Z_mass__365->SetBinError(39,8.628268);
   VbbHcc_algo_Z_mass__365->SetBinError(40,6.537321);
   VbbHcc_algo_Z_mass__365->SetBinError(41,46.58554);
   VbbHcc_algo_Z_mass__365->SetEntries(143097);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_mass__365->SetFillColor(ci);
   VbbHcc_algo_Z_mass__365->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_algo_Z_mass__365->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_Z_mass__365->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__365->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__365->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__365->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__365->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__365->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__365->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__365->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__365->Draw("HIST");
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
