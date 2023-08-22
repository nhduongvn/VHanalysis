void Sphericity_both_17()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Tue Aug 22 09:23:14 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(-0.2,-457.1901,1.133333,4114.711);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetLeftMargin(0.15);
   Sphericity_both_17->SetFrameBorderMode(0);
   Sphericity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_3 = new TH1D("VbbHcc_both_Sphericity_stack_3","",25,0,1);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(1,3134.601);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(2,3483.353);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(3,2591.228);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(4,1976.308);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(5,1528.471);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(6,1230.798);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(7,1026.537);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(8,839.6177);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(9,714.4002);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(10,614.7542);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(11,525.0352);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(12,445.8002);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(13,388.0578);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(14,314.242);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(15,270.0436);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(16,221.5905);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(17,165.3715);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(18,115.152);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(19,70.23782);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(20,32.51225);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(21,12.3612);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(22,4.010399);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(23,0.7802632);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(24,0.1271596);
   VbbHcc_both_Sphericity_stack_3->SetBinError(1,14.40971);
   VbbHcc_both_Sphericity_stack_3->SetBinError(2,15.13453);
   VbbHcc_both_Sphericity_stack_3->SetBinError(3,13.09531);
   VbbHcc_both_Sphericity_stack_3->SetBinError(4,11.45527);
   VbbHcc_both_Sphericity_stack_3->SetBinError(5,10.07953);
   VbbHcc_both_Sphericity_stack_3->SetBinError(6,9.068238);
   VbbHcc_both_Sphericity_stack_3->SetBinError(7,8.283409);
   VbbHcc_both_Sphericity_stack_3->SetBinError(8,7.484236);
   VbbHcc_both_Sphericity_stack_3->SetBinError(9,6.90005);
   VbbHcc_both_Sphericity_stack_3->SetBinError(10,6.421239);
   VbbHcc_both_Sphericity_stack_3->SetBinError(11,5.941758);
   VbbHcc_both_Sphericity_stack_3->SetBinError(12,5.467409);
   VbbHcc_both_Sphericity_stack_3->SetBinError(13,5.094655);
   VbbHcc_both_Sphericity_stack_3->SetBinError(14,4.581668);
   VbbHcc_both_Sphericity_stack_3->SetBinError(15,4.260461);
   VbbHcc_both_Sphericity_stack_3->SetBinError(16,3.84346);
   VbbHcc_both_Sphericity_stack_3->SetBinError(17,3.317299);
   VbbHcc_both_Sphericity_stack_3->SetBinError(18,2.757768);
   VbbHcc_both_Sphericity_stack_3->SetBinError(19,2.149792);
   VbbHcc_both_Sphericity_stack_3->SetBinError(20,1.455039);
   VbbHcc_both_Sphericity_stack_3->SetBinError(21,0.8835768);
   VbbHcc_both_Sphericity_stack_3->SetBinError(22,0.5014405);
   VbbHcc_both_Sphericity_stack_3->SetBinError(23,0.2192094);
   VbbHcc_both_Sphericity_stack_3->SetBinError(24,0.07657627);
   VbbHcc_both_Sphericity_stack_3->SetEntries(333238);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Sphericity_stack_3->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_17->Modified();
   Sphericity_both_17->cd();
   Sphericity_both_17->SetSelected(Sphericity_both_17);
}
