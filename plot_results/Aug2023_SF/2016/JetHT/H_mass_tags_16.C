#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tags_16()
{
//=========Macro generated from canvas: H_mass_tags_16/H_mass_tags_16
//=========  (Tue Sep  5 10:48:25 2023) by ROOT version 6.28/04
   TCanvas *H_mass_tags_16 = new TCanvas("H_mass_tags_16", "H_mass_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_tags_16->SetHighLightColor(2);
   H_mass_tags_16->Range(-80,-321.4313,453.3333,2892.881);
   H_mass_tags_16->SetFillColor(0);
   H_mass_tags_16->SetBorderMode(0);
   H_mass_tags_16->SetBorderSize(2);
   H_mass_tags_16->SetLeftMargin(0.15);
   H_mass_tags_16->SetFrameBorderMode(0);
   H_mass_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_mass__18 = new TH1D("VbbHcc_tags_H_mass__18","",40,0,400);
   VbbHcc_tags_H_mass__18->SetBinContent(3,37);
   VbbHcc_tags_H_mass__18->SetBinContent(4,619);
   VbbHcc_tags_H_mass__18->SetBinContent(5,1503);
   VbbHcc_tags_H_mass__18->SetBinContent(6,2035);
   VbbHcc_tags_H_mass__18->SetBinContent(7,2296);
   VbbHcc_tags_H_mass__18->SetBinContent(8,2449);
   VbbHcc_tags_H_mass__18->SetBinContent(9,2448);
   VbbHcc_tags_H_mass__18->SetBinContent(10,2282);
   VbbHcc_tags_H_mass__18->SetBinContent(11,2195);
   VbbHcc_tags_H_mass__18->SetBinContent(12,2276);
   VbbHcc_tags_H_mass__18->SetBinContent(13,2115);
   VbbHcc_tags_H_mass__18->SetBinContent(14,2058);
   VbbHcc_tags_H_mass__18->SetBinContent(15,1963);
   VbbHcc_tags_H_mass__18->SetBinContent(16,1907);
   VbbHcc_tags_H_mass__18->SetBinContent(17,1730);
   VbbHcc_tags_H_mass__18->SetBinContent(18,1699);
   VbbHcc_tags_H_mass__18->SetBinContent(19,1667);
   VbbHcc_tags_H_mass__18->SetBinContent(20,1525);
   VbbHcc_tags_H_mass__18->SetBinContent(21,1509);
   VbbHcc_tags_H_mass__18->SetBinContent(22,1447);
   VbbHcc_tags_H_mass__18->SetBinContent(23,1378);
   VbbHcc_tags_H_mass__18->SetBinContent(24,1386);
   VbbHcc_tags_H_mass__18->SetBinContent(25,1309);
   VbbHcc_tags_H_mass__18->SetBinContent(26,1233);
   VbbHcc_tags_H_mass__18->SetBinContent(27,1261);
   VbbHcc_tags_H_mass__18->SetBinContent(28,1113);
   VbbHcc_tags_H_mass__18->SetBinContent(29,1192);
   VbbHcc_tags_H_mass__18->SetBinContent(30,1117);
   VbbHcc_tags_H_mass__18->SetBinContent(31,1099);
   VbbHcc_tags_H_mass__18->SetBinContent(32,1113);
   VbbHcc_tags_H_mass__18->SetBinContent(33,1051);
   VbbHcc_tags_H_mass__18->SetBinContent(34,1013);
   VbbHcc_tags_H_mass__18->SetBinContent(35,1014);
   VbbHcc_tags_H_mass__18->SetBinContent(36,1047);
   VbbHcc_tags_H_mass__18->SetBinContent(37,913);
   VbbHcc_tags_H_mass__18->SetBinContent(38,873);
   VbbHcc_tags_H_mass__18->SetBinContent(39,866);
   VbbHcc_tags_H_mass__18->SetBinContent(40,868);
   VbbHcc_tags_H_mass__18->SetBinContent(41,38568);
   VbbHcc_tags_H_mass__18->SetEntries(94174);
   VbbHcc_tags_H_mass__18->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_tags_H_mass__18->GetXaxis()->SetRange(1,40);
   VbbHcc_tags_H_mass__18->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__18->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_mass__18->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__18->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__18->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__18->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__18->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_mass__18->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__18->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_tags_16->Modified();
   H_mass_tags_16->cd();
   H_mass_tags_16->SetSelected(H_mass_tags_16);
}
