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
   VbbHcc_algoFirst_H_mass->Range(-80,-207.6375,453.3333,1868.738);
   VbbHcc_algoFirst_H_mass->SetFillColor(0);
   VbbHcc_algoFirst_H_mass->SetBorderMode(0);
   VbbHcc_algoFirst_H_mass->SetBorderSize(2);
   VbbHcc_algoFirst_H_mass->SetLeftMargin(0.15);
   VbbHcc_algoFirst_H_mass->SetFrameBorderMode(0);
   VbbHcc_algoFirst_H_mass->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algoFirst_H_mass__30 = new TH1D("VbbHcc_algoFirst_H_mass__30","",40,0,400);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(4,8);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(5,134);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(6,663);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(7,1205);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(8,1535);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(9,1582);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(10,1532);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(11,1404);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(12,1378);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(13,1270);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(14,1304);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(15,1179);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(16,1127);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(17,1079);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(18,1183);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(19,1155);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(20,1082);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(21,1023);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(22,985);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(23,939);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(24,901);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(25,951);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(26,866);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(27,844);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(28,764);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(29,833);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(30,838);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(31,835);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(32,689);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(33,655);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(34,728);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(35,709);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(36,686);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(37,665);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(38,668);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(39,695);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(40,683);
   VbbHcc_algoFirst_H_mass__30->SetBinContent(41,31140);
   VbbHcc_algoFirst_H_mass__30->SetEntries(65917);
   VbbHcc_algoFirst_H_mass__30->GetXaxis()->SetTitle("m_{H} [GeV]");
   VbbHcc_algoFirst_H_mass__30->GetXaxis()->SetRange(1,400);
   VbbHcc_algoFirst_H_mass__30->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_H_mass__30->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_H_mass__30->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_H_mass__30->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_algoFirst_H_mass__30->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_H_mass__30->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_H_mass__30->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_H_mass__30->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_H_mass__30->GetZaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_H_mass__30->Draw("HIST");
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
