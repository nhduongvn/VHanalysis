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
   VbbHcc_tagOnly_Z_mass->Range(-80,-418.95,453.3333,3770.55);
   VbbHcc_tagOnly_Z_mass->SetFillColor(0);
   VbbHcc_tagOnly_Z_mass->SetBorderMode(0);
   VbbHcc_tagOnly_Z_mass->SetBorderSize(2);
   VbbHcc_tagOnly_Z_mass->SetLeftMargin(0.15);
   VbbHcc_tagOnly_Z_mass->SetFrameBorderMode(0);
   VbbHcc_tagOnly_Z_mass->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tagOnly_Z_mass__1 = new TH1D("VbbHcc_tagOnly_Z_mass__1","",40,0,400);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(3,11);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(4,454);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(5,1911);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(6,2852);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(7,3192);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(8,3137);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(9,2792);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(10,2580);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(11,2324);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(12,2144);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(13,1988);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(14,1876);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(15,1714);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(16,1625);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(17,1656);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(18,1384);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(19,1347);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(20,1291);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(21,1229);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(22,1130);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(23,1134);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(24,1088);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(25,1088);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(26,985);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(27,924);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(28,903);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(29,874);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(30,813);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(31,770);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(32,798);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(33,778);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(34,722);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(35,732);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(36,672);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(37,689);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(38,649);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(39,693);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(40,642);
   VbbHcc_tagOnly_Z_mass__1->SetBinContent(41,25687);
   VbbHcc_tagOnly_Z_mass__1->SetEntries(77278);
   VbbHcc_tagOnly_Z_mass__1->GetXaxis()->SetTitle("m_{Z} [GeV]");
   VbbHcc_tagOnly_Z_mass__1->GetXaxis()->SetRange(1,400);
   VbbHcc_tagOnly_Z_mass__1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Z_mass__1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Z_mass__1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Z_mass__1->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_tagOnly_Z_mass__1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Z_mass__1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Z_mass__1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Z_mass__1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Z_mass__1->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Z_mass__1->Draw("HIST");
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
