#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_both_16()
{
//=========Macro generated from canvas: Z_mass_both_16/Z_mass_both_16
//=========  (Fri Sep  1 13:23:41 2023) by ROOT version 6.28/04
   TCanvas *Z_mass_both_16 = new TCanvas("Z_mass_both_16", "Z_mass_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_both_16->SetHighLightColor(2);
   Z_mass_both_16->Range(-80,-2.970618,453.3333,26.73556);
   Z_mass_both_16->SetFillColor(0);
   Z_mass_both_16->SetBorderMode(0);
   Z_mass_both_16->SetBorderSize(2);
   Z_mass_both_16->SetLeftMargin(0.15);
   Z_mass_both_16->SetFrameBorderMode(0);
   Z_mass_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_mass__725 = new TH1D("VbbHcc_both_Z_mass__725","",40,0,400);
   VbbHcc_both_Z_mass__725->SetBinContent(3,0.02525362);
   VbbHcc_both_Z_mass__725->SetBinContent(4,1.817742);
   VbbHcc_both_Z_mass__725->SetBinContent(5,6.282585);
   VbbHcc_both_Z_mass__725->SetBinContent(6,8.933058);
   VbbHcc_both_Z_mass__725->SetBinContent(7,12.46575);
   VbbHcc_both_Z_mass__725->SetBinContent(8,17.14382);
   VbbHcc_both_Z_mass__725->SetBinContent(9,19.53011);
   VbbHcc_both_Z_mass__725->SetBinContent(10,18.82995);
   VbbHcc_both_Z_mass__725->SetBinContent(11,18.96451);
   VbbHcc_both_Z_mass__725->SetBinContent(12,22.63327);
   VbbHcc_both_Z_mass__725->SetBinContent(13,19.15189);
   VbbHcc_both_Z_mass__725->SetBinContent(14,15.88893);
   VbbHcc_both_Z_mass__725->SetBinContent(15,16.61697);
   VbbHcc_both_Z_mass__725->SetBinContent(16,14.2985);
   VbbHcc_both_Z_mass__725->SetBinContent(17,16.5057);
   VbbHcc_both_Z_mass__725->SetBinContent(18,13.59475);
   VbbHcc_both_Z_mass__725->SetBinContent(19,14.75774);
   VbbHcc_both_Z_mass__725->SetBinContent(20,12.77797);
   VbbHcc_both_Z_mass__725->SetBinContent(21,11.89988);
   VbbHcc_both_Z_mass__725->SetBinContent(22,9.67914);
   VbbHcc_both_Z_mass__725->SetBinContent(23,9.511572);
   VbbHcc_both_Z_mass__725->SetBinContent(24,14.8343);
   VbbHcc_both_Z_mass__725->SetBinContent(25,8.681088);
   VbbHcc_both_Z_mass__725->SetBinContent(26,12.52001);
   VbbHcc_both_Z_mass__725->SetBinContent(27,7.991678);
   VbbHcc_both_Z_mass__725->SetBinContent(28,9.710666);
   VbbHcc_both_Z_mass__725->SetBinContent(29,7.59386);
   VbbHcc_both_Z_mass__725->SetBinContent(30,9.070157);
   VbbHcc_both_Z_mass__725->SetBinContent(31,6.184325);
   VbbHcc_both_Z_mass__725->SetBinContent(32,7.522686);
   VbbHcc_both_Z_mass__725->SetBinContent(33,7.163612);
   VbbHcc_both_Z_mass__725->SetBinContent(34,6.327524);
   VbbHcc_both_Z_mass__725->SetBinContent(35,6.974911);
   VbbHcc_both_Z_mass__725->SetBinContent(36,5.314653);
   VbbHcc_both_Z_mass__725->SetBinContent(37,6.576238);
   VbbHcc_both_Z_mass__725->SetBinContent(38,6.810178);
   VbbHcc_both_Z_mass__725->SetBinContent(39,5.665853);
   VbbHcc_both_Z_mass__725->SetBinContent(40,3.617461);
   VbbHcc_both_Z_mass__725->SetBinContent(41,209.4834);
   VbbHcc_both_Z_mass__725->SetBinError(3,0.04774245);
   VbbHcc_both_Z_mass__725->SetBinError(4,0.484092);
   VbbHcc_both_Z_mass__725->SetBinError(5,1.015824);
   VbbHcc_both_Z_mass__725->SetBinError(6,1.104275);
   VbbHcc_both_Z_mass__725->SetBinError(7,1.218436);
   VbbHcc_both_Z_mass__725->SetBinError(8,1.605122);
   VbbHcc_both_Z_mass__725->SetBinError(9,1.762894);
   VbbHcc_both_Z_mass__725->SetBinError(10,1.649781);
   VbbHcc_both_Z_mass__725->SetBinError(11,1.620541);
   VbbHcc_both_Z_mass__725->SetBinError(12,1.880175);
   VbbHcc_both_Z_mass__725->SetBinError(13,1.766099);
   VbbHcc_both_Z_mass__725->SetBinError(14,1.429165);
   VbbHcc_both_Z_mass__725->SetBinError(15,1.517278);
   VbbHcc_both_Z_mass__725->SetBinError(16,1.455592);
   VbbHcc_both_Z_mass__725->SetBinError(17,1.624354);
   VbbHcc_both_Z_mass__725->SetBinError(18,1.444824);
   VbbHcc_both_Z_mass__725->SetBinError(19,1.521443);
   VbbHcc_both_Z_mass__725->SetBinError(20,1.4148);
   VbbHcc_both_Z_mass__725->SetBinError(21,1.346401);
   VbbHcc_both_Z_mass__725->SetBinError(22,1.158031);
   VbbHcc_both_Z_mass__725->SetBinError(23,1.2032);
   VbbHcc_both_Z_mass__725->SetBinError(24,1.634116);
   VbbHcc_both_Z_mass__725->SetBinError(25,1.195998);
   VbbHcc_both_Z_mass__725->SetBinError(26,1.423858);
   VbbHcc_both_Z_mass__725->SetBinError(27,1.091227);
   VbbHcc_both_Z_mass__725->SetBinError(28,1.292257);
   VbbHcc_both_Z_mass__725->SetBinError(29,0.9002058);
   VbbHcc_both_Z_mass__725->SetBinError(30,1.332871);
   VbbHcc_both_Z_mass__725->SetBinError(31,0.9442458);
   VbbHcc_both_Z_mass__725->SetBinError(32,1.128813);
   VbbHcc_both_Z_mass__725->SetBinError(33,1.086032);
   VbbHcc_both_Z_mass__725->SetBinError(34,1.056515);
   VbbHcc_both_Z_mass__725->SetBinError(35,1.067647);
   VbbHcc_both_Z_mass__725->SetBinError(36,0.8799);
   VbbHcc_both_Z_mass__725->SetBinError(37,1.026468);
   VbbHcc_both_Z_mass__725->SetBinError(38,1.009867);
   VbbHcc_both_Z_mass__725->SetBinError(39,0.9675139);
   VbbHcc_both_Z_mass__725->SetBinError(40,0.7184052);
   VbbHcc_both_Z_mass__725->SetBinError(41,5.873752);
   VbbHcc_both_Z_mass__725->SetEntries(9878);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_mass__725->SetFillColor(ci);
   VbbHcc_both_Z_mass__725->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_both_Z_mass__725->GetXaxis()->SetRange(1,40);
   VbbHcc_both_Z_mass__725->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__725->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_mass__725->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__725->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__725->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__725->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__725->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_mass__725->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__725->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_both_16->Modified();
   Z_mass_both_16->cd();
   Z_mass_both_16->SetSelected(Z_mass_both_16);
}
