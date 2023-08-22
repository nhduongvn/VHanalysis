void Aplanarity_both_18()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Tue Aug 22 09:23:19 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2,-1.684315,1.133333,15.15883);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLeftMargin(0.15);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_10 = new TH1D("VbbHcc_both_Aplanarity_stack_10","",50,0,1);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(1,12.83287);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(2,4.240713);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(3,2.19677);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(4,1.289208);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(5,0.8083278);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(6,0.5169148);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(7,0.3585441);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(8,0.2582322);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(9,0.1591162);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(10,0.1076506);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(11,0.05962759);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(12,0.05302242);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(13,0.03580025);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(14,0.02707394);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(15,0.007607243);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(16,0.007130505);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(17,0.00662911);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(18,0.001048583);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(19,0.002292348);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(21,0.0005004825);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(1,0.08499602);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(2,0.04856527);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(3,0.03491928);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(4,0.02669699);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(5,0.02114648);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(6,0.01686203);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(7,0.01404208);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(8,0.01191824);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(9,0.009340661);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(10,0.007677196);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(11,0.005652116);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(12,0.005433472);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(13,0.004416797);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(14,0.003822719);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(15,0.002042707);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(16,0.001990907);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(17,0.001858136);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(18,0.0007493824);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(19,0.00115036);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(21,0.0005004825);
   VbbHcc_both_Aplanarity_stack_10->SetEntries(41891);

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
