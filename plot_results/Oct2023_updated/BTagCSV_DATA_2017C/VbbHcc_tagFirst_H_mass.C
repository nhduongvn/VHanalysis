#ifdef __CLING__
#pragma cling optimize(0)
#endif
void VbbHcc_tagFirst_H_mass()
{
//=========Macro generated from canvas: VbbHcc_tagFirst_H_mass/VbbHcc_tagFirst_H_mass
//=========  (Mon Oct 23 15:09:43 2023) by ROOT version 6.28/04
   TCanvas *VbbHcc_tagFirst_H_mass = new TCanvas("VbbHcc_tagFirst_H_mass", "VbbHcc_tagFirst_H_mass",0,0,600,600);
   gStyle->SetOptStat(0);
   VbbHcc_tagFirst_H_mass->SetHighLightColor(2);
   VbbHcc_tagFirst_H_mass->Range(-80,-1079.925,453.3333,9719.325);
   VbbHcc_tagFirst_H_mass->SetFillColor(0);
   VbbHcc_tagFirst_H_mass->SetBorderMode(0);
   VbbHcc_tagFirst_H_mass->SetBorderSize(2);
   VbbHcc_tagFirst_H_mass->SetLeftMargin(0.15);
   VbbHcc_tagFirst_H_mass->SetFrameBorderMode(0);
   VbbHcc_tagFirst_H_mass->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tagFirst_H_mass__10 = new TH1D("VbbHcc_tagFirst_H_mass__10","",40,0,400);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(3,148);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(4,1554);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(5,3986);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(6,5645);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(7,6516);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(8,7245);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(9,7543);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(10,7287);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(11,7458);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(12,7721);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(13,7977);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(14,8104);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(15,8228);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(16,8028);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(17,8022);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(18,7675);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(19,7617);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(20,7136);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(21,6780);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(22,6522);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(23,6162);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(24,5794);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(25,5381);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(26,5195);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(27,4774);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(28,4571);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(29,4165);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(30,3958);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(31,3737);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(32,3506);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(33,3329);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(34,3117);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(35,2924);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(36,2895);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(37,2694);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(38,2459);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(39,2339);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(40,2194);
   VbbHcc_tagFirst_H_mass__10->SetBinContent(41,44068);
   VbbHcc_tagFirst_H_mass__10->SetEntries(244454);
   VbbHcc_tagFirst_H_mass__10->GetXaxis()->SetTitle("m_{H} [GeV]");
   VbbHcc_tagFirst_H_mass__10->GetXaxis()->SetRange(1,400);
   VbbHcc_tagFirst_H_mass__10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_mass__10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_mass__10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_mass__10->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_tagFirst_H_mass__10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_mass__10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_mass__10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_mass__10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_mass__10->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_mass__10->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV,  fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   VbbHcc_tagFirst_H_mass->Modified();
   VbbHcc_tagFirst_H_mass->cd();
   VbbHcc_tagFirst_H_mass->SetSelected(VbbHcc_tagFirst_H_mass);
}
