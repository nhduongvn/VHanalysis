void Sphericity_both_18()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Thu Aug  3 12:26:20 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2,-4741.708,1.133333,42675.37);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLeftMargin(0.15);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_1 = new TH1D("VbbHcc_both_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(1,34650.27);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(2,36127.29);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(3,25947.1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(4,27786.93);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(5,17862.11);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(6,15687.23);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(7,13561.45);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(8,7361.541);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(9,8591.081);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(10,6845.801);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(11,4729.447);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(12,5454.812);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(13,3847.864);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(14,2771.81);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(15,2426.697);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(16,1660.381);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(17,1807.25);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(18,1035.557);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(19,790.3305);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(20,503.9384);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(21,444.7548);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(22,51.50686);
   VbbHcc_both_Sphericity_stack_1->SetBinError(1,2362.985);
   VbbHcc_both_Sphericity_stack_1->SetBinError(2,2528.789);
   VbbHcc_both_Sphericity_stack_1->SetBinError(3,2055.166);
   VbbHcc_both_Sphericity_stack_1->SetBinError(4,3237.448);
   VbbHcc_both_Sphericity_stack_1->SetBinError(5,2364.035);
   VbbHcc_both_Sphericity_stack_1->SetBinError(6,1788.73);
   VbbHcc_both_Sphericity_stack_1->SetBinError(7,1698.713);
   VbbHcc_both_Sphericity_stack_1->SetBinError(8,973.4829);
   VbbHcc_both_Sphericity_stack_1->SetBinError(9,1320.615);
   VbbHcc_both_Sphericity_stack_1->SetBinError(10,1146.583);
   VbbHcc_both_Sphericity_stack_1->SetBinError(11,869.8658);
   VbbHcc_both_Sphericity_stack_1->SetBinError(12,1800.024);
   VbbHcc_both_Sphericity_stack_1->SetBinError(13,855.6981);
   VbbHcc_both_Sphericity_stack_1->SetBinError(14,567.4312);
   VbbHcc_both_Sphericity_stack_1->SetBinError(15,664.4376);
   VbbHcc_both_Sphericity_stack_1->SetBinError(16,411.2596);
   VbbHcc_both_Sphericity_stack_1->SetBinError(17,548.4675);
   VbbHcc_both_Sphericity_stack_1->SetBinError(18,391.9152);
   VbbHcc_both_Sphericity_stack_1->SetBinError(19,386.1347);
   VbbHcc_both_Sphericity_stack_1->SetBinError(20,375.1199);
   VbbHcc_both_Sphericity_stack_1->SetBinError(21,372.4755);
   VbbHcc_both_Sphericity_stack_1->SetBinError(22,34.80017);
   VbbHcc_both_Sphericity_stack_1->SetEntries(10726);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_18->Modified();
   Sphericity_both_18->cd();
   Sphericity_both_18->SetSelected(Sphericity_both_18);
}
