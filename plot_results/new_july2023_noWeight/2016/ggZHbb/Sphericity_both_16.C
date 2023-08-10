void Sphericity_both_16()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Thu Aug 10 12:29:32 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-0.3863341,1.133333,3.477007);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_10 = new TH1D("VbbHcc_both_Sphericity_stack_10","",25,0,1);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(1,2.683914);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(2,2.943498);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(3,2.162957);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(4,1.672434);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(5,1.471212);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(6,1.175466);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(7,0.9785403);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(8,0.8618172);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(9,0.7264758);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(10,0.6373223);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(11,0.5470946);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(12,0.4640279);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(13,0.3920606);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(14,0.3498111);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(15,0.2746214);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(16,0.2309398);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(17,0.1593306);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(18,0.1217357);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(19,0.07554775);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(20,0.03401439);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(21,0.00751897);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(22,0.002506323);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(23,0.001074139);
   VbbHcc_both_Sphericity_stack_10->SetBinError(1,0.03099944);
   VbbHcc_both_Sphericity_stack_10->SetBinError(2,0.03246395);
   VbbHcc_both_Sphericity_stack_10->SetBinError(3,0.02782874);
   VbbHcc_both_Sphericity_stack_10->SetBinError(4,0.02447057);
   VbbHcc_both_Sphericity_stack_10->SetBinError(5,0.02295129);
   VbbHcc_both_Sphericity_stack_10->SetBinError(6,0.02051514);
   VbbHcc_both_Sphericity_stack_10->SetBinError(7,0.01871798);
   VbbHcc_both_Sphericity_stack_10->SetBinError(8,0.01756617);
   VbbHcc_both_Sphericity_stack_10->SetBinError(9,0.01612798);
   VbbHcc_both_Sphericity_stack_10->SetBinError(10,0.01510599);
   VbbHcc_both_Sphericity_stack_10->SetBinError(11,0.0139959);
   VbbHcc_both_Sphericity_stack_10->SetBinError(12,0.01288966);
   VbbHcc_both_Sphericity_stack_10->SetBinError(13,0.01184803);
   VbbHcc_both_Sphericity_stack_10->SetBinError(14,0.01119145);
   VbbHcc_both_Sphericity_stack_10->SetBinError(15,0.009916006);
   VbbHcc_both_Sphericity_stack_10->SetBinError(16,0.009093246);
   VbbHcc_both_Sphericity_stack_10->SetBinError(17,0.007552993);
   VbbHcc_both_Sphericity_stack_10->SetBinError(18,0.006602046);
   VbbHcc_both_Sphericity_stack_10->SetBinError(19,0.005200922);
   VbbHcc_both_Sphericity_stack_10->SetBinError(20,0.003489803);
   VbbHcc_both_Sphericity_stack_10->SetBinError(21,0.001640774);
   VbbHcc_both_Sphericity_stack_10->SetBinError(22,0.0009473012);
   VbbHcc_both_Sphericity_stack_10->SetBinError(23,0.0006201542);
   VbbHcc_both_Sphericity_stack_10->SetEntries(50200);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Sphericity_stack_10->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->Draw("HIST");
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
