void Sphericity_both_17_logY()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Thu Aug 10 12:33:05 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(-0.2,-4.267388,1.133333,-1.431419);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetLogy();
   Sphericity_both_17->SetLeftMargin(0.15);
   Sphericity_both_17->SetFrameBorderMode(0);
   Sphericity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_12 = new TH1D("VbbHcc_both_Sphericity_stack_12","",25,0,1);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(1,0.009757466);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(2,0.01017268);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(3,0.007266198);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(4,0.00477493);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(5,0.005605353);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(6,0.004567324);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(7,0.004152113);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(8,0.003529296);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(9,0.002906479);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(10,0.002283662);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(11,0.001868451);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(12,0.002076057);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(13,0.001868451);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(14,0.001660845);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(15,0.0004152113);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(16,0.0008304226);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(17,0.0002076057);
   VbbHcc_both_Sphericity_stack_12->SetBinError(1,0.001423273);
   VbbHcc_both_Sphericity_stack_12->SetBinError(2,0.00145324);
   VbbHcc_both_Sphericity_stack_12->SetBinError(3,0.001228212);
   VbbHcc_both_Sphericity_stack_12->SetBinError(4,0.0009956417);
   VbbHcc_both_Sphericity_stack_12->SetBinError(5,0.001078751);
   VbbHcc_both_Sphericity_stack_12->SetBinError(6,0.0009737568);
   VbbHcc_both_Sphericity_stack_12->SetBinError(7,0.0009284407);
   VbbHcc_both_Sphericity_stack_12->SetBinError(8,0.00085598);
   VbbHcc_both_Sphericity_stack_12->SetBinError(9,0.0007767892);
   VbbHcc_both_Sphericity_stack_12->SetBinError(10,0.0006885501);
   VbbHcc_both_Sphericity_stack_12->SetBinError(11,0.000622817);
   VbbHcc_both_Sphericity_stack_12->SetBinError(12,0.0006565067);
   VbbHcc_both_Sphericity_stack_12->SetBinError(13,0.000622817);
   VbbHcc_both_Sphericity_stack_12->SetBinError(14,0.0005871975);
   VbbHcc_both_Sphericity_stack_12->SetBinError(15,0.0002935987);
   VbbHcc_both_Sphericity_stack_12->SetBinError(16,0.0004152113);
   VbbHcc_both_Sphericity_stack_12->SetBinError(17,0.0002076057);
   VbbHcc_both_Sphericity_stack_12->SetEntries(308);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Sphericity_stack_12->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_12->Draw("HIST");
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
