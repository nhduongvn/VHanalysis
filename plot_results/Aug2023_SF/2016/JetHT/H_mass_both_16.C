#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_both_16()
{
//=========Macro generated from canvas: H_mass_both_16/H_mass_both_16
//=========  (Fri Sep  1 13:23:41 2023) by ROOT version 6.28/04
   TCanvas *H_mass_both_16 = new TCanvas("H_mass_both_16", "H_mass_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_both_16->SetHighLightColor(2);
   H_mass_both_16->Range(-80,-420.3938,453.3333,3783.544);
   H_mass_both_16->SetFillColor(0);
   H_mass_both_16->SetBorderMode(0);
   H_mass_both_16->SetBorderSize(2);
   H_mass_both_16->SetLeftMargin(0.15);
   H_mass_both_16->SetFrameBorderMode(0);
   H_mass_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_mass__738 = new TH1D("VbbHcc_both_H_mass__738","",40,0,400);
   VbbHcc_both_H_mass__738->SetBinContent(3,21);
   VbbHcc_both_H_mass__738->SetBinContent(4,400);
   VbbHcc_both_H_mass__738->SetBinContent(5,1118);
   VbbHcc_both_H_mass__738->SetBinContent(6,1644);
   VbbHcc_both_H_mass__738->SetBinContent(7,2113);
   VbbHcc_both_H_mass__738->SetBinContent(8,2354);
   VbbHcc_both_H_mass__738->SetBinContent(9,2442);
   VbbHcc_both_H_mass__738->SetBinContent(10,2620);
   VbbHcc_both_H_mass__738->SetBinContent(11,2770);
   VbbHcc_both_H_mass__738->SetBinContent(12,2965);
   VbbHcc_both_H_mass__738->SetBinContent(13,2933);
   VbbHcc_both_H_mass__738->SetBinContent(14,3203);
   VbbHcc_both_H_mass__738->SetBinContent(15,3155);
   VbbHcc_both_H_mass__738->SetBinContent(16,3193);
   VbbHcc_both_H_mass__738->SetBinContent(17,3120);
   VbbHcc_both_H_mass__738->SetBinContent(18,3153);
   VbbHcc_both_H_mass__738->SetBinContent(19,3146);
   VbbHcc_both_H_mass__738->SetBinContent(20,2997);
   VbbHcc_both_H_mass__738->SetBinContent(21,2953);
   VbbHcc_both_H_mass__738->SetBinContent(22,2839);
   VbbHcc_both_H_mass__738->SetBinContent(23,2724);
   VbbHcc_both_H_mass__738->SetBinContent(24,2637);
   VbbHcc_both_H_mass__738->SetBinContent(25,2490);
   VbbHcc_both_H_mass__738->SetBinContent(26,2309);
   VbbHcc_both_H_mass__738->SetBinContent(27,2232);
   VbbHcc_both_H_mass__738->SetBinContent(28,2010);
   VbbHcc_both_H_mass__738->SetBinContent(29,1933);
   VbbHcc_both_H_mass__738->SetBinContent(30,1882);
   VbbHcc_both_H_mass__738->SetBinContent(31,1786);
   VbbHcc_both_H_mass__738->SetBinContent(32,1660);
   VbbHcc_both_H_mass__738->SetBinContent(33,1560);
   VbbHcc_both_H_mass__738->SetBinContent(34,1522);
   VbbHcc_both_H_mass__738->SetBinContent(35,1383);
   VbbHcc_both_H_mass__738->SetBinContent(36,1235);
   VbbHcc_both_H_mass__738->SetBinContent(37,1238);
   VbbHcc_both_H_mass__738->SetBinContent(38,1149);
   VbbHcc_both_H_mass__738->SetBinContent(39,1108);
   VbbHcc_both_H_mass__738->SetBinContent(40,1028);
   VbbHcc_both_H_mass__738->SetBinContent(41,18466);
   VbbHcc_both_H_mass__738->SetEntries(99491);
   VbbHcc_both_H_mass__738->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_both_H_mass__738->GetXaxis()->SetRange(1,40);
   VbbHcc_both_H_mass__738->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass__738->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_mass__738->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass__738->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass__738->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass__738->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass__738->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_mass__738->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass__738->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_both_16->Modified();
   H_mass_both_16->cd();
   H_mass_both_16->SetSelected(H_mass_both_16);
}
