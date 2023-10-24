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
   VbbHcc_tagFirst_Z_mass->Range(-80,-449.7938,453.3333,4048.144);
   VbbHcc_tagFirst_Z_mass->SetFillColor(0);
   VbbHcc_tagFirst_Z_mass->SetBorderMode(0);
   VbbHcc_tagFirst_Z_mass->SetBorderSize(2);
   VbbHcc_tagFirst_Z_mass->SetLeftMargin(0.15);
   VbbHcc_tagFirst_Z_mass->SetFrameBorderMode(0);
   VbbHcc_tagFirst_Z_mass->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tagFirst_Z_mass__3 = new TH1D("VbbHcc_tagFirst_Z_mass__3","",40,0,400);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(3,12);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(4,491);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(5,2060);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(6,3076);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(7,3427);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(8,3380);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(9,3007);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(10,2795);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(11,2551);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(12,2348);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(13,2157);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(14,2075);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(15,1865);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(16,1768);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(17,1782);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(18,1521);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(19,1502);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(20,1427);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(21,1348);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(22,1259);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(23,1241);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(24,1197);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(25,1184);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(26,1091);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(27,1017);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(28,1002);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(29,958);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(30,895);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(31,860);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(32,896);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(33,870);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(34,798);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(35,800);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(36,740);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(37,755);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(38,710);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(39,764);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(40,707);
   VbbHcc_tagFirst_Z_mass__3->SetBinContent(41,28122);
   VbbHcc_tagFirst_Z_mass__3->SetEntries(84458);
   VbbHcc_tagFirst_Z_mass__3->GetXaxis()->SetTitle("m_{Z} [GeV]");
   VbbHcc_tagFirst_Z_mass__3->GetXaxis()->SetRange(1,400);
   VbbHcc_tagFirst_Z_mass__3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Z_mass__3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Z_mass__3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Z_mass__3->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_tagFirst_Z_mass__3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Z_mass__3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Z_mass__3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Z_mass__3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Z_mass__3->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Z_mass__3->Draw("HIST");
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
