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
   VbbHcc_tagOnly_H_mass->Range(-80,-250.1625,453.3333,2251.463);
   VbbHcc_tagOnly_H_mass->SetFillColor(0);
   VbbHcc_tagOnly_H_mass->SetBorderMode(0);
   VbbHcc_tagOnly_H_mass->SetBorderSize(2);
   VbbHcc_tagOnly_H_mass->SetLeftMargin(0.15);
   VbbHcc_tagOnly_H_mass->SetFrameBorderMode(0);
   VbbHcc_tagOnly_H_mass->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tagOnly_H_mass__2 = new TH1D("VbbHcc_tagOnly_H_mass__2","",40,0,400);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(3,34);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(4,393);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(5,1052);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(6,1570);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(7,1786);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(8,1884);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(9,1906);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(10,1851);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(11,1722);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(12,1700);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(13,1619);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(14,1587);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(15,1570);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(16,1615);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(17,1548);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(18,1395);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(19,1374);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(20,1473);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(21,1332);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(22,1199);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(23,1222);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(24,1221);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(25,1170);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(26,1108);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(27,1111);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(28,1068);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(29,1002);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(30,949);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(31,918);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(32,957);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(33,905);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(34,896);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(35,854);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(36,840);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(37,838);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(38,757);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(39,795);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(40,762);
   VbbHcc_tagOnly_H_mass__2->SetBinContent(41,31295);
   VbbHcc_tagOnly_H_mass__2->SetEntries(77278);
   VbbHcc_tagOnly_H_mass__2->GetXaxis()->SetTitle("m_{H} [GeV]");
   VbbHcc_tagOnly_H_mass__2->GetXaxis()->SetRange(1,400);
   VbbHcc_tagOnly_H_mass__2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_H_mass__2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_H_mass__2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_H_mass__2->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_tagOnly_H_mass__2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_H_mass__2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_H_mass__2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_H_mass__2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_H_mass__2->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_H_mass__2->Draw("HIST");
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
