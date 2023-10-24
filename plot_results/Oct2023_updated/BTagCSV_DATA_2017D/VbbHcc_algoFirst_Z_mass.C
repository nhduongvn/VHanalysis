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
   VbbHcc_algoFirst_Z_mass->Range(-80,-62.475,453.3333,562.275);
   VbbHcc_algoFirst_Z_mass->SetFillColor(0);
   VbbHcc_algoFirst_Z_mass->SetBorderMode(0);
   VbbHcc_algoFirst_Z_mass->SetBorderSize(2);
   VbbHcc_algoFirst_Z_mass->SetLeftMargin(0.15);
   VbbHcc_algoFirst_Z_mass->SetFrameBorderMode(0);
   VbbHcc_algoFirst_Z_mass->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algoFirst_Z_mass__17 = new TH1D("VbbHcc_algoFirst_Z_mass__17","",40,0,400);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(3,1);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(4,19);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(5,174);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(6,421);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(7,474);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(8,476);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(9,440);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(10,446);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(11,429);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(12,368);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(13,395);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(14,357);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(15,348);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(16,308);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(17,274);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(18,231);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(19,219);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(20,170);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(21,190);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(22,158);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(23,157);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(24,146);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(25,142);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(26,111);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(27,93);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(28,118);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(29,108);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(30,83);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(31,70);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(32,71);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(33,67);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(34,73);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(35,61);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(36,56);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(37,42);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(38,52);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(39,62);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(40,55);
   VbbHcc_algoFirst_Z_mass__17->SetBinContent(41,2015);
   VbbHcc_algoFirst_Z_mass__17->SetEntries(9480);
   VbbHcc_algoFirst_Z_mass__17->GetXaxis()->SetTitle("m_{Z} [GeV]");
   VbbHcc_algoFirst_Z_mass__17->GetXaxis()->SetRange(1,400);
   VbbHcc_algoFirst_Z_mass__17->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Z_mass__17->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Z_mass__17->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Z_mass__17->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_algoFirst_Z_mass__17->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Z_mass__17->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Z_mass__17->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Z_mass__17->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Z_mass__17->GetZaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Z_mass__17->Draw("HIST");
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
