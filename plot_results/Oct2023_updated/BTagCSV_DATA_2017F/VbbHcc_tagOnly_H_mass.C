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
   VbbHcc_tagOnly_H_mass->Range(-80,-2183.606,453.3333,19652.46);
   VbbHcc_tagOnly_H_mass->SetFillColor(0);
   VbbHcc_tagOnly_H_mass->SetBorderMode(0);
   VbbHcc_tagOnly_H_mass->SetBorderSize(2);
   VbbHcc_tagOnly_H_mass->SetLeftMargin(0.15);
   VbbHcc_tagOnly_H_mass->SetFrameBorderMode(0);
   VbbHcc_tagOnly_H_mass->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tagOnly_H_mass__26 = new TH1D("VbbHcc_tagOnly_H_mass__26","",40,0,400);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(3,210);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(4,2808);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(5,8131);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(6,12882);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(7,15089);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(8,16237);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(9,16637);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(10,15602);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(11,14390);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(12,14319);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(13,13874);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(14,13703);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(15,12991);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(16,12715);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(17,12449);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(18,12230);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(19,11727);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(20,11495);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(21,10937);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(22,10349);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(23,10029);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(24,9866);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(25,9363);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(26,9154);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(27,8835);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(28,8567);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(29,8523);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(30,8089);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(31,7892);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(32,7715);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(33,7528);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(34,7435);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(35,7031);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(36,7066);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(37,6907);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(38,6712);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(39,6612);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(40,6423);
   VbbHcc_tagOnly_H_mass__26->SetBinContent(41,272246);
   VbbHcc_tagOnly_H_mass__26->SetEntries(654768);
   VbbHcc_tagOnly_H_mass__26->GetXaxis()->SetTitle("m_{H} [GeV]");
   VbbHcc_tagOnly_H_mass__26->GetXaxis()->SetRange(1,400);
   VbbHcc_tagOnly_H_mass__26->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_H_mass__26->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_H_mass__26->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_H_mass__26->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_tagOnly_H_mass__26->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_H_mass__26->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_H_mass__26->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_H_mass__26->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_H_mass__26->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_H_mass__26->Draw("HIST");
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
