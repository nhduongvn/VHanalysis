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
   VbbHcc_tagFirst_Z_mass->Range(-80,-1945.65,453.3333,17510.85);
   VbbHcc_tagFirst_Z_mass->SetFillColor(0);
   VbbHcc_tagFirst_Z_mass->SetBorderMode(0);
   VbbHcc_tagFirst_Z_mass->SetBorderSize(2);
   VbbHcc_tagFirst_Z_mass->SetLeftMargin(0.15);
   VbbHcc_tagFirst_Z_mass->SetFrameBorderMode(0);
   VbbHcc_tagFirst_Z_mass->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tagFirst_Z_mass__21 = new TH1D("VbbHcc_tagFirst_Z_mass__21","",40,0,400);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(3,38);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(4,2013);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(5,8232);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(6,13555);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(7,14824);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(8,14532);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(9,13255);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(10,12159);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(11,11271);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(12,10363);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(13,9790);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(14,9041);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(15,8592);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(16,7901);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(17,7634);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(18,7006);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(19,6501);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(20,6243);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(21,5869);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(22,5600);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(23,5344);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(24,5190);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(25,5011);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(26,4625);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(27,4563);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(28,4396);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(29,4329);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(30,4135);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(31,4008);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(32,3834);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(33,3850);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(34,3684);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(35,3637);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(36,3542);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(37,3428);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(38,3325);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(39,3271);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(40,3131);
   VbbHcc_tagFirst_Z_mass__21->SetBinContent(41,131129);
   VbbHcc_tagFirst_Z_mass__21->SetEntries(378851);
   VbbHcc_tagFirst_Z_mass__21->GetXaxis()->SetTitle("m_{Z} [GeV]");
   VbbHcc_tagFirst_Z_mass__21->GetXaxis()->SetRange(1,400);
   VbbHcc_tagFirst_Z_mass__21->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Z_mass__21->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Z_mass__21->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Z_mass__21->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_tagFirst_Z_mass__21->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Z_mass__21->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Z_mass__21->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Z_mass__21->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Z_mass__21->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Z_mass__21->Draw("HIST");
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
