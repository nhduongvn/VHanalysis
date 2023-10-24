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
   VbbHcc_algoFirst_Z_mass->Range(-80,-170.8875,453.3333,1537.988);
   VbbHcc_algoFirst_Z_mass->SetFillColor(0);
   VbbHcc_algoFirst_Z_mass->SetBorderMode(0);
   VbbHcc_algoFirst_Z_mass->SetBorderSize(2);
   VbbHcc_algoFirst_Z_mass->SetLeftMargin(0.15);
   VbbHcc_algoFirst_Z_mass->SetFrameBorderMode(0);
   VbbHcc_algoFirst_Z_mass->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algoFirst_Z_mass__11 = new TH1D("VbbHcc_algoFirst_Z_mass__11","",40,0,400);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(4,53);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(5,409);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(6,931);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(7,1302);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(8,1243);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(9,1260);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(10,1211);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(11,1011);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(12,1049);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(13,938);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(14,900);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(15,862);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(16,770);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(17,685);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(18,607);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(19,588);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(20,527);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(21,503);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(22,416);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(23,407);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(24,364);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(25,340);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(26,287);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(27,299);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(28,264);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(29,233);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(30,230);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(31,221);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(32,200);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(33,188);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(34,154);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(35,171);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(36,150);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(37,139);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(38,160);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(39,138);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(40,135);
   VbbHcc_algoFirst_Z_mass__11->SetBinContent(41,5163);
   VbbHcc_algoFirst_Z_mass__11->SetEntries(24508);
   VbbHcc_algoFirst_Z_mass__11->GetXaxis()->SetTitle("m_{Z} [GeV]");
   VbbHcc_algoFirst_Z_mass__11->GetXaxis()->SetRange(1,400);
   VbbHcc_algoFirst_Z_mass__11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Z_mass__11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Z_mass__11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Z_mass__11->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_algoFirst_Z_mass__11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Z_mass__11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Z_mass__11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Z_mass__11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Z_mass__11->GetZaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Z_mass__11->Draw("HIST");
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
