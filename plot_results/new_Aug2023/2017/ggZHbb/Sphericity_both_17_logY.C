void Sphericity_both_17_logY()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Tue Aug 22 09:18:46 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(-0.2,-4.315728,1.133333,1.248184);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetLogy();
   Sphericity_both_17->SetLeftMargin(0.15);
   Sphericity_both_17->SetFrameBorderMode(0);
   Sphericity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_10 = new TH1D("VbbHcc_both_Sphericity_stack_10","",25,0,1);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(1,2.396693);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(2,2.595635);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(3,1.917146);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(4,1.495935);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(5,1.303758);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(6,1.038768);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(7,0.867553);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(8,0.765272);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(9,0.6483833);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(10,0.5636255);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(11,0.4845872);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(12,0.4151686);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(13,0.3514198);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(14,0.3075392);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(15,0.2488482);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(16,0.2124051);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(17,0.1478179);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(18,0.1083903);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(19,0.06561447);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(20,0.03195899);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(21,0.006110556);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(22,0.002288433);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(23,0.0003480914);
   VbbHcc_both_Sphericity_stack_10->SetBinError(1,0.03063981);
   VbbHcc_both_Sphericity_stack_10->SetBinError(2,0.03165838);
   VbbHcc_both_Sphericity_stack_10->SetBinError(3,0.02727429);
   VbbHcc_both_Sphericity_stack_10->SetBinError(4,0.02410434);
   VbbHcc_both_Sphericity_stack_10->SetBinError(5,0.02252327);
   VbbHcc_both_Sphericity_stack_10->SetBinError(6,0.02011557);
   VbbHcc_both_Sphericity_stack_10->SetBinError(7,0.01836216);
   VbbHcc_both_Sphericity_stack_10->SetBinError(8,0.01723334);
   VbbHcc_both_Sphericity_stack_10->SetBinError(9,0.01591499);
   VbbHcc_both_Sphericity_stack_10->SetBinError(10,0.01481351);
   VbbHcc_both_Sphericity_stack_10->SetBinError(11,0.01374316);
   VbbHcc_both_Sphericity_stack_10->SetBinError(12,0.01271104);
   VbbHcc_both_Sphericity_stack_10->SetBinError(13,0.01173035);
   VbbHcc_both_Sphericity_stack_10->SetBinError(14,0.01097118);
   VbbHcc_both_Sphericity_stack_10->SetBinError(15,0.009837562);
   VbbHcc_both_Sphericity_stack_10->SetBinError(16,0.009053458);
   VbbHcc_both_Sphericity_stack_10->SetBinError(17,0.007611258);
   VbbHcc_both_Sphericity_stack_10->SetBinError(18,0.006461335);
   VbbHcc_both_Sphericity_stack_10->SetBinError(19,0.004983978);
   VbbHcc_both_Sphericity_stack_10->SetBinError(20,0.003472742);
   VbbHcc_both_Sphericity_stack_10->SetBinError(21,0.001501648);
   VbbHcc_both_Sphericity_stack_10->SetBinError(22,0.000938577);
   VbbHcc_both_Sphericity_stack_10->SetBinError(23,0.0003480914);
   VbbHcc_both_Sphericity_stack_10->SetEntries(41891);

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
