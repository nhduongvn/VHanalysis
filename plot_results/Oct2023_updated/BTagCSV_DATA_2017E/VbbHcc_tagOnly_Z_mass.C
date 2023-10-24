#ifdef __CLING__
#pragma cling optimize(0)
#endif
void VbbHcc_tagOnly_Z_mass()
{
//=========Macro generated from canvas: VbbHcc_tagOnly_Z_mass/VbbHcc_tagOnly_Z_mass
//=========  (Mon Oct 23 15:09:43 2023) by ROOT version 6.28/04
   TCanvas *VbbHcc_tagOnly_Z_mass = new TCanvas("VbbHcc_tagOnly_Z_mass", "VbbHcc_tagOnly_Z_mass",0,0,600,600);
   gStyle->SetOptStat(0);
   VbbHcc_tagOnly_Z_mass->SetHighLightColor(2);
   VbbHcc_tagOnly_Z_mass->Range(-80,-1833.563,453.3333,16502.06);
   VbbHcc_tagOnly_Z_mass->SetFillColor(0);
   VbbHcc_tagOnly_Z_mass->SetBorderMode(0);
   VbbHcc_tagOnly_Z_mass->SetBorderSize(2);
   VbbHcc_tagOnly_Z_mass->SetLeftMargin(0.15);
   VbbHcc_tagOnly_Z_mass->SetFrameBorderMode(0);
   VbbHcc_tagOnly_Z_mass->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tagOnly_Z_mass__19 = new TH1D("VbbHcc_tagOnly_Z_mass__19","",40,0,400);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(3,35);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(4,1875);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(5,7715);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(6,12843);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(7,13970);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(8,13642);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(9,12412);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(10,11371);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(11,10493);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(12,9661);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(13,9045);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(14,8398);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(15,7971);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(16,7353);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(17,7068);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(18,6470);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(19,6022);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(20,5797);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(21,5473);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(22,5167);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(23,4962);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(24,4813);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(25,4626);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(26,4253);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(27,4215);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(28,4085);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(29,4003);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(30,3803);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(31,3697);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(32,3510);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(33,3582);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(34,3419);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(35,3360);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(36,3296);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(37,3193);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(38,3084);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(39,3013);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(40,2906);
   VbbHcc_tagOnly_Z_mass__19->SetBinContent(41,122232);
   VbbHcc_tagOnly_Z_mass__19->SetEntries(352833);
   VbbHcc_tagOnly_Z_mass__19->GetXaxis()->SetTitle("m_{Z} [GeV]");
   VbbHcc_tagOnly_Z_mass__19->GetXaxis()->SetRange(1,400);
   VbbHcc_tagOnly_Z_mass__19->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Z_mass__19->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Z_mass__19->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Z_mass__19->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_tagOnly_Z_mass__19->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Z_mass__19->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Z_mass__19->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Z_mass__19->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Z_mass__19->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Z_mass__19->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV,  fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   VbbHcc_tagOnly_Z_mass->Modified();
   VbbHcc_tagOnly_Z_mass->cd();
   VbbHcc_tagOnly_Z_mass->SetSelected(VbbHcc_tagOnly_Z_mass);
}
