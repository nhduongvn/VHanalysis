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
   VbbHcc_tagOnly_H_mass->Range(-80,-1187.681,453.3333,10689.13);
   VbbHcc_tagOnly_H_mass->SetFillColor(0);
   VbbHcc_tagOnly_H_mass->SetBorderMode(0);
   VbbHcc_tagOnly_H_mass->SetBorderSize(2);
   VbbHcc_tagOnly_H_mass->SetLeftMargin(0.15);
   VbbHcc_tagOnly_H_mass->SetFrameBorderMode(0);
   VbbHcc_tagOnly_H_mass->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tagOnly_H_mass__20 = new TH1D("VbbHcc_tagOnly_H_mass__20","",40,0,400);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(3,98);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(4,1759);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(5,4868);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(6,7293);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(7,8451);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(8,8923);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(9,9049);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(10,8397);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(11,7924);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(12,7749);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(13,7726);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(14,7518);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(15,7333);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(16,7197);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(17,7097);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(18,6645);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(19,6414);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(20,6253);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(21,5852);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(22,5809);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(23,5510);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(24,5337);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(25,5197);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(26,5093);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(27,4916);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(28,4829);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(29,4630);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(30,4519);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(31,4307);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(32,4202);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(33,4155);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(34,4070);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(35,3901);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(36,3926);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(37,3712);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(38,3629);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(39,3499);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(40,3422);
   VbbHcc_tagOnly_H_mass__20->SetBinContent(41,141624);
   VbbHcc_tagOnly_H_mass__20->SetEntries(352833);
   VbbHcc_tagOnly_H_mass__20->GetXaxis()->SetTitle("m_{H} [GeV]");
   VbbHcc_tagOnly_H_mass__20->GetXaxis()->SetRange(1,400);
   VbbHcc_tagOnly_H_mass__20->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_H_mass__20->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_H_mass__20->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_H_mass__20->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_tagOnly_H_mass__20->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_H_mass__20->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_H_mass__20->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_H_mass__20->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_H_mass__20->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_H_mass__20->Draw("HIST");
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
