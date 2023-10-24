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
   VbbHcc_tagOnly_Z_mass->Range(-80,-1156.706,453.3333,10410.36);
   VbbHcc_tagOnly_Z_mass->SetFillColor(0);
   VbbHcc_tagOnly_Z_mass->SetBorderMode(0);
   VbbHcc_tagOnly_Z_mass->SetBorderSize(2);
   VbbHcc_tagOnly_Z_mass->SetLeftMargin(0.15);
   VbbHcc_tagOnly_Z_mass->SetFrameBorderMode(0);
   VbbHcc_tagOnly_Z_mass->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tagOnly_Z_mass__7 = new TH1D("VbbHcc_tagOnly_Z_mass__7","",40,0,400);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(3,27);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(4,1260);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(5,4880);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(6,8081);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(7,8813);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(8,8507);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(9,7963);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(10,7438);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(11,6499);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(12,6135);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(13,5531);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(14,5397);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(15,5023);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(16,4710);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(17,4377);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(18,4228);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(19,3894);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(20,3861);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(21,3618);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(22,3381);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(23,3228);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(24,2942);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(25,2935);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(26,2868);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(27,2712);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(28,2604);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(29,2521);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(30,2505);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(31,2375);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(32,2311);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(33,2277);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(34,2214);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(35,2176);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(36,2105);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(37,2090);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(38,1949);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(39,1995);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(40,1886);
   VbbHcc_tagOnly_Z_mass__7->SetBinContent(41,77837);
   VbbHcc_tagOnly_Z_mass__7->SetEntries(225153);
   VbbHcc_tagOnly_Z_mass__7->GetXaxis()->SetTitle("m_{Z} [GeV]");
   VbbHcc_tagOnly_Z_mass__7->GetXaxis()->SetRange(1,400);
   VbbHcc_tagOnly_Z_mass__7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Z_mass__7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Z_mass__7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Z_mass__7->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_tagOnly_Z_mass__7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Z_mass__7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Z_mass__7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Z_mass__7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Z_mass__7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Z_mass__7->Draw("HIST");
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
