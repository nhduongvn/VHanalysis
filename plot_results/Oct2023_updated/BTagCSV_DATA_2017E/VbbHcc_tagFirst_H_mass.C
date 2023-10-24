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
   VbbHcc_tagFirst_H_mass->Range(-80,-1639.313,453.3333,14753.81);
   VbbHcc_tagFirst_H_mass->SetFillColor(0);
   VbbHcc_tagFirst_H_mass->SetBorderMode(0);
   VbbHcc_tagFirst_H_mass->SetBorderSize(2);
   VbbHcc_tagFirst_H_mass->SetLeftMargin(0.15);
   VbbHcc_tagFirst_H_mass->SetFrameBorderMode(0);
   VbbHcc_tagFirst_H_mass->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tagFirst_H_mass__22 = new TH1D("VbbHcc_tagFirst_H_mass__22","",40,0,400);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(3,152);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(4,2183);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(5,5857);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(6,8640);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(7,10078);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(8,10938);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(9,11545);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(10,11122);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(11,11244);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(12,11894);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(13,12241);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(14,12385);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(15,12490);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(16,12415);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(17,12330);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(18,11853);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(19,11457);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(20,11136);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(21,10810);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(22,10240);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(23,9495);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(24,9028);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(25,8709);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(26,8179);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(27,7637);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(28,7220);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(29,6697);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(30,6233);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(31,5916);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(32,5594);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(33,5291);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(34,4906);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(35,4584);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(36,4349);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(37,4052);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(38,3942);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(39,3530);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(40,3403);
   VbbHcc_tagFirst_H_mass__22->SetBinContent(41,69076);
   VbbHcc_tagFirst_H_mass__22->SetEntries(378851);
   VbbHcc_tagFirst_H_mass__22->GetXaxis()->SetTitle("m_{H} [GeV]");
   VbbHcc_tagFirst_H_mass__22->GetXaxis()->SetRange(1,400);
   VbbHcc_tagFirst_H_mass__22->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_mass__22->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_mass__22->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_mass__22->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_tagFirst_H_mass__22->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_mass__22->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_mass__22->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_mass__22->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_mass__22->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_mass__22->Draw("HIST");
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
