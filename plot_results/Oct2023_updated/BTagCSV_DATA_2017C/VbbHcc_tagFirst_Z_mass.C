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
   VbbHcc_tagFirst_Z_mass->Range(-80,-1236.638,453.3333,11129.74);
   VbbHcc_tagFirst_Z_mass->SetFillColor(0);
   VbbHcc_tagFirst_Z_mass->SetBorderMode(0);
   VbbHcc_tagFirst_Z_mass->SetBorderSize(2);
   VbbHcc_tagFirst_Z_mass->SetLeftMargin(0.15);
   VbbHcc_tagFirst_Z_mass->SetFrameBorderMode(0);
   VbbHcc_tagFirst_Z_mass->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tagFirst_Z_mass__9 = new TH1D("VbbHcc_tagFirst_Z_mass__9","",40,0,400);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(3,31);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(4,1346);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(5,5265);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(6,8613);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(7,9422);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(8,9154);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(9,8545);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(10,8029);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(11,7075);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(12,6673);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(13,6003);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(14,5880);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(15,5464);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(16,5137);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(17,4802);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(18,4623);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(19,4265);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(20,4207);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(21,3930);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(22,3706);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(23,3509);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(24,3226);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(25,3212);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(26,3136);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(27,2943);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(28,2864);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(29,2760);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(30,2696);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(31,2584);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(32,2496);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(33,2479);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(34,2424);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(35,2365);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(36,2288);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(37,2281);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(38,2103);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(39,2178);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(40,2083);
   VbbHcc_tagFirst_Z_mass__9->SetBinContent(41,84657);
   VbbHcc_tagFirst_Z_mass__9->SetEntries(244454);
   VbbHcc_tagFirst_Z_mass__9->GetXaxis()->SetTitle("m_{Z} [GeV]");
   VbbHcc_tagFirst_Z_mass__9->GetXaxis()->SetRange(1,400);
   VbbHcc_tagFirst_Z_mass__9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Z_mass__9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Z_mass__9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Z_mass__9->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_tagFirst_Z_mass__9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Z_mass__9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Z_mass__9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Z_mass__9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Z_mass__9->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Z_mass__9->Draw("HIST");
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
