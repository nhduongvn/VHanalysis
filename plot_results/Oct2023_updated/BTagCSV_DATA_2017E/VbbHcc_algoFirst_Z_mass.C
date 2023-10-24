#ifdef __CLING__
#pragma cling optimize(0)
#endif
void VbbHcc_algoFirst_Z_mass()
{
//=========Macro generated from canvas: VbbHcc_algoFirst_Z_mass/VbbHcc_algoFirst_Z_mass
//=========  (Mon Oct 23 15:09:43 2023) by ROOT version 6.28/04
   TCanvas *VbbHcc_algoFirst_Z_mass = new TCanvas("VbbHcc_algoFirst_Z_mass", "VbbHcc_algoFirst_Z_mass",0,0,600,600);
   gStyle->SetOptStat(0);
   VbbHcc_algoFirst_Z_mass->SetHighLightColor(2);
   VbbHcc_algoFirst_Z_mass->Range(-80,-266.5688,453.3333,2399.119);
   VbbHcc_algoFirst_Z_mass->SetFillColor(0);
   VbbHcc_algoFirst_Z_mass->SetBorderMode(0);
   VbbHcc_algoFirst_Z_mass->SetBorderSize(2);
   VbbHcc_algoFirst_Z_mass->SetLeftMargin(0.15);
   VbbHcc_algoFirst_Z_mass->SetFrameBorderMode(0);
   VbbHcc_algoFirst_Z_mass->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algoFirst_Z_mass__23 = new TH1D("VbbHcc_algoFirst_Z_mass__23","",40,0,400);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(3,1);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(4,76);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(5,645);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(6,1520);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(7,2024);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(8,2031);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(9,1886);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(10,1826);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(11,1729);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(12,1649);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(13,1571);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(14,1386);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(15,1400);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(16,1116);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(17,1081);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(18,982);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(19,793);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(20,833);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(21,748);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(22,689);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(23,625);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(24,580);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(25,529);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(26,479);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(27,483);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(28,418);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(29,376);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(30,397);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(31,322);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(32,293);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(33,306);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(34,246);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(35,281);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(36,266);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(37,228);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(38,209);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(39,237);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(40,196);
   VbbHcc_algoFirst_Z_mass__23->SetBinContent(41,8181);
   VbbHcc_algoFirst_Z_mass__23->SetEntries(38638);
   VbbHcc_algoFirst_Z_mass__23->GetXaxis()->SetTitle("m_{Z} [GeV]");
   VbbHcc_algoFirst_Z_mass__23->GetXaxis()->SetRange(1,400);
   VbbHcc_algoFirst_Z_mass__23->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Z_mass__23->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Z_mass__23->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Z_mass__23->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_algoFirst_Z_mass__23->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Z_mass__23->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Z_mass__23->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Z_mass__23->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Z_mass__23->GetZaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Z_mass__23->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV,  fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   VbbHcc_algoFirst_Z_mass->Modified();
   VbbHcc_algoFirst_Z_mass->cd();
   VbbHcc_algoFirst_Z_mass->SetSelected(VbbHcc_algoFirst_Z_mass);
}
