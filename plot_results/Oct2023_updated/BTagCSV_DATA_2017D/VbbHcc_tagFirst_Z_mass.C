#ifdef __CLING__
#pragma cling optimize(0)
#endif
void VbbHcc_tagFirst_Z_mass()
{
//=========Macro generated from canvas: VbbHcc_tagFirst_Z_mass/VbbHcc_tagFirst_Z_mass
//=========  (Mon Oct 23 15:09:43 2023) by ROOT version 6.28/04
   TCanvas *VbbHcc_tagFirst_Z_mass = new TCanvas("VbbHcc_tagFirst_Z_mass", "VbbHcc_tagFirst_Z_mass",0,0,600,600);
   gStyle->SetOptStat(0);
   VbbHcc_tagFirst_Z_mass->SetHighLightColor(2);
   VbbHcc_tagFirst_Z_mass->Range(-80,-487.4625,453.3333,4387.163);
   VbbHcc_tagFirst_Z_mass->SetFillColor(0);
   VbbHcc_tagFirst_Z_mass->SetBorderMode(0);
   VbbHcc_tagFirst_Z_mass->SetBorderSize(2);
   VbbHcc_tagFirst_Z_mass->SetLeftMargin(0.15);
   VbbHcc_tagFirst_Z_mass->SetFrameBorderMode(0);
   VbbHcc_tagFirst_Z_mass->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tagFirst_Z_mass__15 = new TH1D("VbbHcc_tagFirst_Z_mass__15","",40,0,400);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(3,18);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(4,534);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(5,2071);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(6,3382);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(7,3714);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(8,3454);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(9,3153);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(10,2920);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(11,2750);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(12,2439);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(13,2398);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(14,2134);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(15,2159);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(16,1966);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(17,1844);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(18,1759);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(19,1607);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(20,1594);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(21,1437);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(22,1362);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(23,1315);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(24,1295);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(25,1270);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(26,1130);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(27,1195);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(28,1067);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(29,1082);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(30,985);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(31,988);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(32,961);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(33,939);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(34,925);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(35,881);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(36,871);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(37,817);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(38,844);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(39,842);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(40,805);
   VbbHcc_tagFirst_Z_mass__15->SetBinContent(41,31856);
   VbbHcc_tagFirst_Z_mass__15->SetEntries(92763);
   VbbHcc_tagFirst_Z_mass__15->GetXaxis()->SetTitle("m_{Z} [GeV]");
   VbbHcc_tagFirst_Z_mass__15->GetXaxis()->SetRange(1,400);
   VbbHcc_tagFirst_Z_mass__15->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Z_mass__15->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Z_mass__15->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Z_mass__15->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_tagFirst_Z_mass__15->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Z_mass__15->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Z_mass__15->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Z_mass__15->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Z_mass__15->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Z_mass__15->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV,  fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   VbbHcc_tagFirst_Z_mass->Modified();
   VbbHcc_tagFirst_Z_mass->cd();
   VbbHcc_tagFirst_Z_mass->SetSelected(VbbHcc_tagFirst_Z_mass);
}
