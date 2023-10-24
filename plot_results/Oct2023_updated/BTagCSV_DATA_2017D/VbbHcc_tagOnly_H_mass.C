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
   VbbHcc_tagOnly_H_mass->Range(-80,-300.0375,453.3333,2700.338);
   VbbHcc_tagOnly_H_mass->SetFillColor(0);
   VbbHcc_tagOnly_H_mass->SetBorderMode(0);
   VbbHcc_tagOnly_H_mass->SetBorderSize(2);
   VbbHcc_tagOnly_H_mass->SetLeftMargin(0.15);
   VbbHcc_tagOnly_H_mass->SetFrameBorderMode(0);
   VbbHcc_tagOnly_H_mass->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tagOnly_H_mass__14 = new TH1D("VbbHcc_tagOnly_H_mass__14","",40,0,400);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(3,33);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(4,442);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(5,1294);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(6,1912);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(7,2125);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(8,2193);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(9,2286);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(10,2025);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(11,1979);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(12,1877);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(13,1773);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(14,1872);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(15,1765);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(16,1708);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(17,1732);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(18,1648);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(19,1585);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(20,1557);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(21,1504);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(22,1429);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(23,1386);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(24,1313);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(25,1296);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(26,1221);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(27,1171);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(28,1156);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(29,1152);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(30,1030);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(31,1027);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(32,976);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(33,946);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(34,1002);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(35,917);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(36,947);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(37,938);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(38,882);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(39,898);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(40,814);
   VbbHcc_tagOnly_H_mass__14->SetBinContent(41,33750);
   VbbHcc_tagOnly_H_mass__14->SetEntries(85561);
   VbbHcc_tagOnly_H_mass__14->GetXaxis()->SetTitle("m_{H} [GeV]");
   VbbHcc_tagOnly_H_mass__14->GetXaxis()->SetRange(1,400);
   VbbHcc_tagOnly_H_mass__14->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_H_mass__14->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_H_mass__14->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_H_mass__14->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_tagOnly_H_mass__14->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_H_mass__14->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_H_mass__14->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_H_mass__14->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_H_mass__14->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_H_mass__14->Draw("HIST");
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
