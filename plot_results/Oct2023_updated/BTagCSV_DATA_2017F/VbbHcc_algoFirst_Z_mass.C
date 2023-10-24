#ifdef __CLING__
#pragma cling optimize(0)
#endif
void VbbHcc_algoFirst_Z_mass()
{
//=========Macro generated from canvas: VbbHcc_algoFirst_Z_mass/VbbHcc_algoFirst_Z_mass
//=========  (Mon Oct 23 15:09:43 2023) by ROOT version 6.28/04
   TCanvas *VbbHcc_algoFirst_Z_mass = new TCanvas("VbbHcc_algoFirst_Z_mass", "VbbHcc_algoFirst_Z_mass",0,0,600,600);
   gStyle->SetOptStat(0);
   VbbHcc_algoFirst_Z_mass->SetHighLightColor(2);
   VbbHcc_algoFirst_Z_mass->Range(-80,-447.6938,453.3333,4029.244);
   VbbHcc_algoFirst_Z_mass->SetFillColor(0);
   VbbHcc_algoFirst_Z_mass->SetBorderMode(0);
   VbbHcc_algoFirst_Z_mass->SetBorderSize(2);
   VbbHcc_algoFirst_Z_mass->SetLeftMargin(0.15);
   VbbHcc_algoFirst_Z_mass->SetFrameBorderMode(0);
   VbbHcc_algoFirst_Z_mass->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algoFirst_Z_mass__29 = new TH1D("VbbHcc_algoFirst_Z_mass__29","",40,0,400);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(4,92);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(5,863);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(6,2315);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(7,3302);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(8,3411);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(9,3281);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(10,3084);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(11,2844);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(12,2643);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(13,2516);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(14,2412);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(15,2281);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(16,2091);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(17,1947);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(18,1758);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(19,1520);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(20,1424);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(21,1240);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(22,1218);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(23,1058);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(24,999);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(25,956);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(26,838);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(27,789);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(28,737);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(29,681);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(30,668);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(31,555);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(32,533);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(33,564);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(34,487);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(35,423);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(36,455);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(37,407);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(38,416);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(39,389);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(40,371);
   VbbHcc_algoFirst_Z_mass__29->SetBinContent(41,14349);
   VbbHcc_algoFirst_Z_mass__29->SetEntries(65917);
   VbbHcc_algoFirst_Z_mass__29->GetXaxis()->SetTitle("m_{Z} [GeV]");
   VbbHcc_algoFirst_Z_mass__29->GetXaxis()->SetRange(1,400);
   VbbHcc_algoFirst_Z_mass__29->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Z_mass__29->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Z_mass__29->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Z_mass__29->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_algoFirst_Z_mass__29->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Z_mass__29->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Z_mass__29->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Z_mass__29->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Z_mass__29->GetZaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Z_mass__29->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV,  fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   VbbHcc_algoFirst_Z_mass->Modified();
   VbbHcc_algoFirst_Z_mass->cd();
   VbbHcc_algoFirst_Z_mass->SetSelected(VbbHcc_algoFirst_Z_mass);
}
