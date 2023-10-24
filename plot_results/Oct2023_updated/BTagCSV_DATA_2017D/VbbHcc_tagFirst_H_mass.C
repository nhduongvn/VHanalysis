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
   VbbHcc_tagFirst_H_mass->Range(-80,-407.925,453.3333,3671.325);
   VbbHcc_tagFirst_H_mass->SetFillColor(0);
   VbbHcc_tagFirst_H_mass->SetBorderMode(0);
   VbbHcc_tagFirst_H_mass->SetBorderSize(2);
   VbbHcc_tagFirst_H_mass->SetLeftMargin(0.15);
   VbbHcc_tagFirst_H_mass->SetFrameBorderMode(0);
   VbbHcc_tagFirst_H_mass->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tagFirst_H_mass__16 = new TH1D("VbbHcc_tagFirst_H_mass__16","",40,0,400);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(3,53);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(4,585);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(5,1578);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(6,2272);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(7,2618);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(8,2736);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(9,2855);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(10,2721);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(11,2926);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(12,2915);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(13,3038);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(14,3108);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(15,3095);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(16,3075);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(17,2968);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(18,2933);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(19,2760);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(20,2767);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(21,2724);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(22,2438);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(23,2337);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(24,2236);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(25,2092);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(26,2014);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(27,1827);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(28,1733);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(29,1544);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(30,1497);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(31,1449);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(32,1434);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(33,1235);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(34,1130);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(35,1113);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(36,1003);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(37,1010);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(38,917);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(39,826);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(40,795);
   VbbHcc_tagFirst_H_mass__16->SetBinContent(41,16406);
   VbbHcc_tagFirst_H_mass__16->SetEntries(92763);
   VbbHcc_tagFirst_H_mass__16->GetXaxis()->SetTitle("m_{H} [GeV]");
   VbbHcc_tagFirst_H_mass__16->GetXaxis()->SetRange(1,400);
   VbbHcc_tagFirst_H_mass__16->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_mass__16->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_mass__16->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_mass__16->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_tagFirst_H_mass__16->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_mass__16->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_mass__16->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_mass__16->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_mass__16->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_mass__16->Draw("HIST");
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
