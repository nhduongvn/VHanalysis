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
   VbbHcc_tagOnly_Z_mass->Range(-80,-3414.469,453.3333,30730.22);
   VbbHcc_tagOnly_Z_mass->SetFillColor(0);
   VbbHcc_tagOnly_Z_mass->SetBorderMode(0);
   VbbHcc_tagOnly_Z_mass->SetBorderSize(2);
   VbbHcc_tagOnly_Z_mass->SetLeftMargin(0.15);
   VbbHcc_tagOnly_Z_mass->SetFrameBorderMode(0);
   VbbHcc_tagOnly_Z_mass->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tagOnly_Z_mass__25 = new TH1D("VbbHcc_tagOnly_Z_mass__25","",40,0,400);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(3,67);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(4,3105);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(5,13210);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(6,22753);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(7,26015);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(8,25181);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(9,23304);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(10,21466);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(11,19049);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(12,17477);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(13,16629);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(14,15660);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(15,14599);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(16,13791);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(17,12952);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(18,12073);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(19,11227);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(20,10733);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(21,9999);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(22,9517);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(23,9080);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(24,8735);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(25,8417);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(26,8049);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(27,7666);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(28,7370);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(29,7360);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(30,7127);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(31,6779);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(32,6584);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(33,6623);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(34,6180);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(35,6020);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(36,5977);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(37,5848);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(38,5649);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(39,5565);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(40,5403);
   VbbHcc_tagOnly_Z_mass__25->SetBinContent(41,231529);
   VbbHcc_tagOnly_Z_mass__25->SetEntries(654768);
   VbbHcc_tagOnly_Z_mass__25->GetXaxis()->SetTitle("m_{Z} [GeV]");
   VbbHcc_tagOnly_Z_mass__25->GetXaxis()->SetRange(1,400);
   VbbHcc_tagOnly_Z_mass__25->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Z_mass__25->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Z_mass__25->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Z_mass__25->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_tagOnly_Z_mass__25->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Z_mass__25->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Z_mass__25->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Z_mass__25->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Z_mass__25->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Z_mass__25->Draw("HIST");
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
