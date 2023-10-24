#ifdef __CLING__
#pragma cling optimize(0)
#endif
void VbbHcc_tagOnly_H_mass()
{
//=========Macro generated from canvas: VbbHcc_tagOnly_H_mass/VbbHcc_tagOnly_H_mass
//=========  (Mon Oct 23 15:09:43 2023) by ROOT version 6.28/04
   TCanvas *VbbHcc_tagOnly_H_mass = new TCanvas("VbbHcc_tagOnly_H_mass", "VbbHcc_tagOnly_H_mass",0,0,600,600);
   gStyle->SetOptStat(0);
   VbbHcc_tagOnly_H_mass->SetHighLightColor(2);
   VbbHcc_tagOnly_H_mass->Range(-80,-771.2251,453.3333,6941.025);
   VbbHcc_tagOnly_H_mass->SetFillColor(0);
   VbbHcc_tagOnly_H_mass->SetBorderMode(0);
   VbbHcc_tagOnly_H_mass->SetBorderSize(2);
   VbbHcc_tagOnly_H_mass->SetLeftMargin(0.15);
   VbbHcc_tagOnly_H_mass->SetFrameBorderMode(0);
   VbbHcc_tagOnly_H_mass->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tagOnly_H_mass__8 = new TH1D("VbbHcc_tagOnly_H_mass__8","",40,0,400);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(3,104);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(4,1196);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(5,3211);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(6,4664);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(7,5344);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(8,5876);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(9,5728);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(10,5520);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(11,5270);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(12,4962);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(13,4980);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(14,4848);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(15,4528);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(16,4603);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(17,4457);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(18,4343);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(19,4083);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(20,4070);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(21,3752);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(22,3684);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(23,3511);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(24,3632);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(25,3323);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(26,3244);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(27,3210);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(28,3172);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(29,2982);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(30,2889);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(31,2816);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(32,2790);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(33,2651);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(34,2521);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(35,2461);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(36,2449);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(37,2384);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(38,2346);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(39,2337);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(40,2164);
   VbbHcc_tagOnly_H_mass__8->SetBinContent(41,89048);
   VbbHcc_tagOnly_H_mass__8->SetEntries(225153);
   VbbHcc_tagOnly_H_mass__8->GetXaxis()->SetTitle("m_{H} [GeV]");
   VbbHcc_tagOnly_H_mass__8->GetXaxis()->SetRange(1,400);
   VbbHcc_tagOnly_H_mass__8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_H_mass__8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_H_mass__8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_H_mass__8->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_tagOnly_H_mass__8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_H_mass__8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_H_mass__8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_H_mass__8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_H_mass__8->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_H_mass__8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV,  fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   VbbHcc_tagOnly_H_mass->Modified();
   VbbHcc_tagOnly_H_mass->cd();
   VbbHcc_tagOnly_H_mass->SetSelected(VbbHcc_tagOnly_H_mass);
}
