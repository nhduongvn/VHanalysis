void Aplanarity_both_18()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Thu Aug 10 12:29:34 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2,-2.181208,1.133333,19.63087);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLeftMargin(0.15);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_10 = new TH1D("VbbHcc_both_Aplanarity_stack_10","",50,0,1);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(1,16.61872);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(2,5.574549);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(3,2.882955);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(4,1.702589);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(5,1.055176);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(6,0.6873548);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(7,0.4638005);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(8,0.329668);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(9,0.2050738);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(10,0.1389017);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(11,0.08822941);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(12,0.06557591);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(13,0.04530699);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(14,0.03219181);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(15,0.0107306);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(16,0.00894217);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(17,0.01013446);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(18,0.002980723);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(19,0.002384579);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(21,0.001192289);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(1,0.09953473);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(2,0.05764753);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(3,0.04145671);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(4,0.0318589);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(5,0.02508062);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(6,0.0202426);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(7,0.01662805);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(8,0.01401891);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(9,0.01105684);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(10,0.009099753);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(11,0.007252413);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(12,0.006252418);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(13,0.005197068);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(14,0.004380751);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(15,0.002529228);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(16,0.002308858);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(17,0.002457967);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(18,0.00133302);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(19,0.001192289);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(21,0.0008430758);
   VbbHcc_both_Aplanarity_stack_10->SetEntries(50200);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Aplanarity_stack_10->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_18->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->SetSelected(Aplanarity_both_18);
}
