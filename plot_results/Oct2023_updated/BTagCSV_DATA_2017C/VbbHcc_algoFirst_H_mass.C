#ifdef __CLING__
#pragma cling optimize(0)
#endif
void VbbHcc_algoFirst_H_mass()
{
//=========Macro generated from canvas: VbbHcc_algoFirst_H_mass/VbbHcc_algoFirst_H_mass
//=========  (Mon Oct 23 15:09:43 2023) by ROOT version 6.28/04
   TCanvas *VbbHcc_algoFirst_H_mass = new TCanvas("VbbHcc_algoFirst_H_mass", "VbbHcc_algoFirst_H_mass",0,0,600,600);
   gStyle->SetOptStat(0);
   VbbHcc_algoFirst_H_mass->SetHighLightColor(2);
   VbbHcc_algoFirst_H_mass->Range(-80,-78.88126,453.3333,709.9313);
   VbbHcc_algoFirst_H_mass->SetFillColor(0);
   VbbHcc_algoFirst_H_mass->SetBorderMode(0);
   VbbHcc_algoFirst_H_mass->SetBorderSize(2);
   VbbHcc_algoFirst_H_mass->SetLeftMargin(0.15);
   VbbHcc_algoFirst_H_mass->SetFrameBorderMode(0);
   VbbHcc_algoFirst_H_mass->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algoFirst_H_mass__12 = new TH1D("VbbHcc_algoFirst_H_mass__12","",40,0,400);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(4,5);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(5,96);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(6,283);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(7,511);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(8,560);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(9,601);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(10,589);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(11,530);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(12,507);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(13,503);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(14,510);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(15,496);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(16,454);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(17,445);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(18,450);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(19,450);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(20,437);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(21,405);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(22,412);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(23,378);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(24,348);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(25,373);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(26,322);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(27,312);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(28,314);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(29,318);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(30,305);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(31,303);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(32,286);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(33,261);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(34,259);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(35,269);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(36,245);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(37,256);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(38,218);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(39,281);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(40,208);
   VbbHcc_algoFirst_H_mass__12->SetBinContent(41,11008);
   VbbHcc_algoFirst_H_mass__12->SetEntries(24508);
   VbbHcc_algoFirst_H_mass__12->GetXaxis()->SetTitle("m_{H} [GeV]");
   VbbHcc_algoFirst_H_mass__12->GetXaxis()->SetRange(1,400);
   VbbHcc_algoFirst_H_mass__12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_H_mass__12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_H_mass__12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_H_mass__12->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_algoFirst_H_mass__12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_H_mass__12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_H_mass__12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_H_mass__12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_H_mass__12->GetZaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_H_mass__12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV,  fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   VbbHcc_algoFirst_H_mass->Modified();
   VbbHcc_algoFirst_H_mass->cd();
   VbbHcc_algoFirst_H_mass->SetSelected(VbbHcc_algoFirst_H_mass);
}
