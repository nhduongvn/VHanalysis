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
   Z_mass_algo_16->Range(-80,-1.298889,453.3333,11.69);
   Z_mass_algo_16->SetFillColor(0);
   Z_mass_algo_16->SetBorderMode(0);
   Z_mass_algo_16->SetBorderSize(2);
   Z_mass_algo_16->SetLeftMargin(0.15);
   Z_mass_algo_16->SetFrameBorderMode(0);
   Z_mass_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_mass__370 = new TH1D("VbbHcc_algo_Z_mass__370","",40,0,400);
   VbbHcc_algo_Z_mass__370->SetBinContent(4,0.2392533);
   VbbHcc_algo_Z_mass__370->SetBinContent(5,0.3555326);
   VbbHcc_algo_Z_mass__370->SetBinContent(6,1.6637);
   VbbHcc_algo_Z_mass__370->SetBinContent(7,3.192627);
   VbbHcc_algo_Z_mass__370->SetBinContent(8,6.729847);
   VbbHcc_algo_Z_mass__370->SetBinContent(9,9.896294);
   VbbHcc_algo_Z_mass__370->SetBinContent(10,9.640144);
   VbbHcc_algo_Z_mass__370->SetBinContent(11,5.556305);
   VbbHcc_algo_Z_mass__370->SetBinContent(12,4.059227);
   VbbHcc_algo_Z_mass__370->SetBinContent(13,2.249738);
   VbbHcc_algo_Z_mass__370->SetBinContent(14,2.240115);
   VbbHcc_algo_Z_mass__370->SetBinContent(15,2.318864);
   VbbHcc_algo_Z_mass__370->SetBinContent(16,1.756714);
   VbbHcc_algo_Z_mass__370->SetBinContent(17,1.860885);
   VbbHcc_algo_Z_mass__370->SetBinContent(18,1.318751);
   VbbHcc_algo_Z_mass__370->SetBinContent(19,1.709436);
   VbbHcc_algo_Z_mass__370->SetBinContent(20,0.8873594);
   VbbHcc_algo_Z_mass__370->SetBinContent(21,1.593606);
   VbbHcc_algo_Z_mass__370->SetBinContent(22,1.447775);
   VbbHcc_algo_Z_mass__370->SetBinContent(23,1.108388);
   VbbHcc_algo_Z_mass__370->SetBinContent(24,0.8147454);
   VbbHcc_algo_Z_mass__370->SetBinContent(25,1.287554);
   VbbHcc_algo_Z_mass__370->SetBinContent(26,1.464566);
   VbbHcc_algo_Z_mass__370->SetBinContent(27,0.9700062);
   VbbHcc_algo_Z_mass__370->SetBinContent(28,0.7847807);
   VbbHcc_algo_Z_mass__370->SetBinContent(29,0.7735042);
   VbbHcc_algo_Z_mass__370->SetBinContent(30,1.109627);
   VbbHcc_algo_Z_mass__370->SetBinContent(31,1.038763);
   VbbHcc_algo_Z_mass__370->SetBinContent(32,0.7723971);
   VbbHcc_algo_Z_mass__370->SetBinContent(33,1.137012);
   VbbHcc_algo_Z_mass__370->SetBinContent(34,1.027839);
   VbbHcc_algo_Z_mass__370->SetBinContent(35,0.9196984);
   VbbHcc_algo_Z_mass__370->SetBinContent(36,0.340575);
   VbbHcc_algo_Z_mass__370->SetBinContent(37,0.8837098);
   VbbHcc_algo_Z_mass__370->SetBinContent(38,0.8738029);
   VbbHcc_algo_Z_mass__370->SetBinContent(39,0.8214143);
   VbbHcc_algo_Z_mass__370->SetBinContent(40,0.6567499);
   VbbHcc_algo_Z_mass__370->SetBinContent(41,27.43093);
   VbbHcc_algo_Z_mass__370->SetBinError(4,0.1382945);
   VbbHcc_algo_Z_mass__370->SetBinError(5,0.1632775);
   VbbHcc_algo_Z_mass__370->SetBinError(6,0.384607);
   VbbHcc_algo_Z_mass__370->SetBinError(7,0.5432835);
   VbbHcc_algo_Z_mass__370->SetBinError(8,0.7810989);
   VbbHcc_algo_Z_mass__370->SetBinError(9,0.9474534);
   VbbHcc_algo_Z_mass__370->SetBinError(10,0.9352186);
   VbbHcc_algo_Z_mass__370->SetBinError(11,0.7133201);
   VbbHcc_algo_Z_mass__370->SetBinError(12,0.6177763);
   VbbHcc_algo_Z_mass__370->SetBinError(13,0.4577266);
   VbbHcc_algo_Z_mass__370->SetBinError(14,0.4449804);
   VbbHcc_algo_Z_mass__370->SetBinError(15,0.4615037);
   VbbHcc_algo_Z_mass__370->SetBinError(16,0.3981858);
   VbbHcc_algo_Z_mass__370->SetBinError(17,0.4037209);
   VbbHcc_algo_Z_mass__370->SetBinError(18,0.3434391);
   VbbHcc_algo_Z_mass__370->SetBinError(19,0.3976544);
   VbbHcc_algo_Z_mass__370->SetBinError(20,0.2916132);
   VbbHcc_algo_Z_mass__370->SetBinError(21,0.3816789);
   VbbHcc_algo_Z_mass__370->SetBinError(22,0.3656552);
   VbbHcc_algo_Z_mass__370->SetBinError(23,0.3117987);
   VbbHcc_algo_Z_mass__370->SetBinError(24,0.2634072);
   VbbHcc_algo_Z_mass__370->SetBinError(25,0.3473213);
   VbbHcc_algo_Z_mass__370->SetBinError(26,0.3698377);
   VbbHcc_algo_Z_mass__370->SetBinError(27,0.2951336);
   VbbHcc_algo_Z_mass__370->SetBinError(28,0.262898);
   VbbHcc_algo_Z_mass__370->SetBinError(29,0.3015899);
   VbbHcc_algo_Z_mass__370->SetBinError(30,0.3171737);
   VbbHcc_algo_Z_mass__370->SetBinError(31,0.3192521);
   VbbHcc_algo_Z_mass__370->SetBinError(32,0.2773488);
   VbbHcc_algo_Z_mass__370->SetBinError(33,0.3320877);
   VbbHcc_algo_Z_mass__370->SetBinError(34,0.3131337);
   VbbHcc_algo_Z_mass__370->SetBinError(35,0.2948772);
   VbbHcc_algo_Z_mass__370->SetBinError(36,0.1705528);
   VbbHcc_algo_Z_mass__370->SetBinError(37,0.2809057);
   VbbHcc_algo_Z_mass__370->SetBinError(38,0.293466);
   VbbHcc_algo_Z_mass__370->SetBinError(39,0.2769886);
   VbbHcc_algo_Z_mass__370->SetBinError(40,0.2516162);
   VbbHcc_algo_Z_mass__370->SetBinError(41,1.600785);
   VbbHcc_algo_Z_mass__370->SetEntries(1159);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_mass__370->SetFillColor(ci);
   VbbHcc_algo_Z_mass__370->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_algo_Z_mass__370->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_Z_mass__370->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__370->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__370->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__370->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__370->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__370->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__370->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__370->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__370->Draw("HIST");
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
