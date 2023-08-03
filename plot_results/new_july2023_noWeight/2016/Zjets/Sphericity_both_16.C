void Sphericity_both_16()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Thu Aug  3 12:26:18 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-45.97299,1.133333,413.7569);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_4 = new TH1D("VbbHcc_both_Sphericity_stack_4","",25,0,1);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(1,331.3817);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(2,350.2704);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(3,262.6248);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(4,218.4234);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(5,160.8353);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(6,141.6466);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(7,90.04551);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(8,77.27422);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(9,76.71739);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(10,66.01104);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(11,63.88002);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(12,51.96195);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(13,40.73061);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(14,37.24182);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(15,23.84833);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(16,18.27703);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(17,16.39641);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(18,12.63338);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(19,9.177605);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(20,5.372759);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(21,1.474398);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(22,0.9388196);
   VbbHcc_both_Sphericity_stack_4->SetBinError(1,13.96652);
   VbbHcc_both_Sphericity_stack_4->SetBinError(2,14.9234);
   VbbHcc_both_Sphericity_stack_4->SetBinError(3,13.94726);
   VbbHcc_both_Sphericity_stack_4->SetBinError(4,13.35501);
   VbbHcc_both_Sphericity_stack_4->SetBinError(5,9.721971);
   VbbHcc_both_Sphericity_stack_4->SetBinError(6,9.889372);
   VbbHcc_both_Sphericity_stack_4->SetBinError(7,4.672981);
   VbbHcc_both_Sphericity_stack_4->SetBinError(8,5.133325);
   VbbHcc_both_Sphericity_stack_4->SetBinError(9,6.792457);
   VbbHcc_both_Sphericity_stack_4->SetBinError(10,6.167506);
   VbbHcc_both_Sphericity_stack_4->SetBinError(11,6.664293);
   VbbHcc_both_Sphericity_stack_4->SetBinError(12,5.958511);
   VbbHcc_both_Sphericity_stack_4->SetBinError(13,4.504519);
   VbbHcc_both_Sphericity_stack_4->SetBinError(14,4.4761);
   VbbHcc_both_Sphericity_stack_4->SetBinError(15,3.260932);
   VbbHcc_both_Sphericity_stack_4->SetBinError(16,3.106167);
   VbbHcc_both_Sphericity_stack_4->SetBinError(17,3.026621);
   VbbHcc_both_Sphericity_stack_4->SetBinError(18,2.98187);
   VbbHcc_both_Sphericity_stack_4->SetBinError(19,2.90041);
   VbbHcc_both_Sphericity_stack_4->SetBinError(20,2.78087);
   VbbHcc_both_Sphericity_stack_4->SetBinError(21,0.5814451);
   VbbHcc_both_Sphericity_stack_4->SetBinError(22,0.4303684);
   VbbHcc_both_Sphericity_stack_4->SetEntries(15464);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Sphericity_stack_4->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_16->Modified();
   Sphericity_both_16->cd();
   Sphericity_both_16->SetSelected(Sphericity_both_16);
}
