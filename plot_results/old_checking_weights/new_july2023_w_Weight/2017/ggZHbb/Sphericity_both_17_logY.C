void Sphericity_both_17_logY()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Thu Aug 10 10:43:27 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(-0.2,-3.678104,1.133333,1.337763);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetLogy();
   Sphericity_both_17->SetLeftMargin(0.15);
   Sphericity_both_17->SetFrameBorderMode(0);
   Sphericity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_10 = new TH1D("VbbHcc_both_Sphericity_stack_10","",25,0,1);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(1,3.302628);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(2,3.619323);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(3,2.666804);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(4,2.055869);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(5,1.814807);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(6,1.452425);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(7,1.203562);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(8,1.058604);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(9,0.8969789);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(10,0.7849865);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(11,0.6764197);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(12,0.5720603);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(13,0.4837887);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(14,0.4328824);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(15,0.3374239);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(16,0.2832167);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(17,0.1972229);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(18,0.148596);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(19,0.0924334);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(20,0.04166923);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(21,0.009296398);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(22,0.003142626);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(23,0.001332027);
   VbbHcc_both_Sphericity_stack_10->SetBinError(1,0.03847601);
   VbbHcc_both_Sphericity_stack_10->SetBinError(2,0.04025644);
   VbbHcc_both_Sphericity_stack_10->SetBinError(3,0.03457843);
   VbbHcc_both_Sphericity_stack_10->SetBinError(4,0.03036735);
   VbbHcc_both_Sphericity_stack_10->SetBinError(5,0.02852441);
   VbbHcc_both_Sphericity_stack_10->SetBinError(6,0.02554972);
   VbbHcc_both_Sphericity_stack_10->SetBinError(7,0.02321473);
   VbbHcc_both_Sphericity_stack_10->SetBinError(8,0.02175909);
   VbbHcc_both_Sphericity_stack_10->SetBinError(9,0.02008976);
   VbbHcc_both_Sphericity_stack_10->SetBinError(10,0.01878305);
   VbbHcc_both_Sphericity_stack_10->SetBinError(11,0.01744321);
   VbbHcc_both_Sphericity_stack_10->SetBinError(12,0.01602288);
   VbbHcc_both_Sphericity_stack_10->SetBinError(13,0.014751);
   VbbHcc_both_Sphericity_stack_10->SetBinError(14,0.01397247);
   VbbHcc_both_Sphericity_stack_10->SetBinError(15,0.01229852);
   VbbHcc_both_Sphericity_stack_10->SetBinError(16,0.01125022);
   VbbHcc_both_Sphericity_stack_10->SetBinError(17,0.009417901);
   VbbHcc_both_Sphericity_stack_10->SetBinError(18,0.008132675);
   VbbHcc_both_Sphericity_stack_10->SetBinError(19,0.006414477);
   VbbHcc_both_Sphericity_stack_10->SetBinError(20,0.004331116);
   VbbHcc_both_Sphericity_stack_10->SetBinError(21,0.002042308);
   VbbHcc_both_Sphericity_stack_10->SetBinError(22,0.00119226);
   VbbHcc_both_Sphericity_stack_10->SetBinError(23,0.0007690566);
   VbbHcc_both_Sphericity_stack_10->SetEntries(50073);

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
