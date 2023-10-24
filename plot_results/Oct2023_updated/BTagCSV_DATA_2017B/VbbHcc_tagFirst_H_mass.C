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
   VbbHcc_tagFirst_H_mass->Range(-80,-365.925,453.3333,3293.325);
   VbbHcc_tagFirst_H_mass->SetFillColor(0);
   VbbHcc_tagFirst_H_mass->SetBorderMode(0);
   VbbHcc_tagFirst_H_mass->SetBorderSize(2);
   VbbHcc_tagFirst_H_mass->SetLeftMargin(0.15);
   VbbHcc_tagFirst_H_mass->SetFrameBorderMode(0);
   VbbHcc_tagFirst_H_mass->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tagFirst_H_mass__4 = new TH1D("VbbHcc_tagFirst_H_mass__4","",40,0,400);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(3,52);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(4,519);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(5,1269);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(6,1849);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(7,2178);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(8,2330);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(9,2497);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(10,2511);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(11,2449);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(12,2663);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(13,2613);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(14,2591);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(15,2788);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(16,2692);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(17,2727);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(18,2527);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(19,2531);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(20,2442);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(21,2336);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(22,2201);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(23,2102);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(24,1986);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(25,1806);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(26,1792);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(27,1683);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(28,1559);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(29,1451);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(30,1357);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(31,1358);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(32,1300);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(33,1192);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(34,1092);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(35,1000);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(36,1006);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(37,914);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(38,865);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(39,800);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(40,745);
   VbbHcc_tagFirst_H_mass__4->SetBinContent(41,16685);
   VbbHcc_tagFirst_H_mass__4->SetEntries(84458);
   VbbHcc_tagFirst_H_mass__4->GetXaxis()->SetTitle("m_{H} [GeV]");
   VbbHcc_tagFirst_H_mass__4->GetXaxis()->SetRange(1,400);
   VbbHcc_tagFirst_H_mass__4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_mass__4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_mass__4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_mass__4->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_tagFirst_H_mass__4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_mass__4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_mass__4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_mass__4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_mass__4->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_mass__4->Draw("HIST");
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
