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
   VbbHcc_tagOnly_Z_mass->Range(-80,-455.7,453.3333,4101.3);
   VbbHcc_tagOnly_Z_mass->SetFillColor(0);
   VbbHcc_tagOnly_Z_mass->SetBorderMode(0);
   VbbHcc_tagOnly_Z_mass->SetBorderSize(2);
   VbbHcc_tagOnly_Z_mass->SetLeftMargin(0.15);
   VbbHcc_tagOnly_Z_mass->SetFrameBorderMode(0);
   VbbHcc_tagOnly_Z_mass->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tagOnly_Z_mass__13 = new TH1D("VbbHcc_tagOnly_Z_mass__13","",40,0,400);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(3,17);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(4,493);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(5,1919);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(6,3168);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(7,3472);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(8,3220);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(9,2915);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(10,2700);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(11,2541);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(12,2241);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(13,2213);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(14,1955);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(15,1994);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(16,1836);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(17,1686);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(18,1606);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(19,1490);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(20,1446);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(21,1308);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(22,1241);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(23,1221);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(24,1176);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(25,1174);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(26,1041);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(27,1095);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(28,977);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(29,1004);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(30,910);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(31,901);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(32,889);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(33,862);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(34,842);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(35,799);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(36,803);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(37,743);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(38,774);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(39,763);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(40,737);
   VbbHcc_tagOnly_Z_mass__13->SetBinContent(41,29389);
   VbbHcc_tagOnly_Z_mass__13->SetEntries(85561);
   VbbHcc_tagOnly_Z_mass__13->GetXaxis()->SetTitle("m_{Z} [GeV]");
   VbbHcc_tagOnly_Z_mass__13->GetXaxis()->SetRange(1,400);
   VbbHcc_tagOnly_Z_mass__13->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Z_mass__13->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Z_mass__13->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Z_mass__13->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_tagOnly_Z_mass__13->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Z_mass__13->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Z_mass__13->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Z_mass__13->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Z_mass__13->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Z_mass__13->Draw("HIST");
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
