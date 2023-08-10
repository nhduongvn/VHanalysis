void Sphericity_both_17_logY()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Thu Aug 10 12:33:05 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(-0.2,-2.149773,1.133333,3.070064);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetLogy();
   Sphericity_both_17->SetLeftMargin(0.15);
   Sphericity_both_17->SetFrameBorderMode(0);
   Sphericity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_2 = new TH1D("VbbHcc_both_Sphericity_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(1,180.3562);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(2,186.4365);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(3,138.781);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(4,100.9312);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(5,77.86911);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(6,62.44404);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(7,54.00314);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(8,45.75777);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(9,37.92906);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(10,30.6852);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(11,26.30209);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(12,23.20906);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(13,19.02189);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(14,18.07229);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(15,13.19022);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(16,10.81906);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(17,9.358544);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(18,5.657374);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(19,2.543622);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(20,2.28294);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(21,0.09900528);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(22,0.2624063);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(23,0.04712387);
   VbbHcc_both_Sphericity_stack_2->SetBinError(1,5.196991);
   VbbHcc_both_Sphericity_stack_2->SetBinError(2,5.2623);
   VbbHcc_both_Sphericity_stack_2->SetBinError(3,4.653115);
   VbbHcc_both_Sphericity_stack_2->SetBinError(4,3.918258);
   VbbHcc_both_Sphericity_stack_2->SetBinError(5,3.468396);
   VbbHcc_both_Sphericity_stack_2->SetBinError(6,3.067536);
   VbbHcc_both_Sphericity_stack_2->SetBinError(7,2.952984);
   VbbHcc_both_Sphericity_stack_2->SetBinError(8,2.744411);
   VbbHcc_both_Sphericity_stack_2->SetBinError(9,2.418189);
   VbbHcc_both_Sphericity_stack_2->SetBinError(10,2.207591);
   VbbHcc_both_Sphericity_stack_2->SetBinError(11,2.052409);
   VbbHcc_both_Sphericity_stack_2->SetBinError(12,1.972917);
   VbbHcc_both_Sphericity_stack_2->SetBinError(13,1.783237);
   VbbHcc_both_Sphericity_stack_2->SetBinError(14,1.722805);
   VbbHcc_both_Sphericity_stack_2->SetBinError(15,1.490795);
   VbbHcc_both_Sphericity_stack_2->SetBinError(16,1.370866);
   VbbHcc_both_Sphericity_stack_2->SetBinError(17,1.258051);
   VbbHcc_both_Sphericity_stack_2->SetBinError(18,0.9166664);
   VbbHcc_both_Sphericity_stack_2->SetBinError(19,0.6368623);
   VbbHcc_both_Sphericity_stack_2->SetBinError(20,0.6272925);
   VbbHcc_both_Sphericity_stack_2->SetBinError(21,0.07008809);
   VbbHcc_both_Sphericity_stack_2->SetBinError(22,0.2624063);
   VbbHcc_both_Sphericity_stack_2->SetBinError(23,0.04712387);
   VbbHcc_both_Sphericity_stack_2->SetEntries(12820);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_both_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->Draw("HIST");
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
