void Sphericity_algo_17()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Thu Aug 10 12:24:18 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(-0.2,-2.007823,1.133333,18.07041);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetLeftMargin(0.15);
   Sphericity_algo_17->SetFrameBorderMode(0);
   Sphericity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_10 = new TH1D("VbbHcc_algo_Sphericity_stack_10","",25,0,1);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(1,15.0857);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(2,15.2977);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(3,8.605639);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(4,5.251063);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(5,2.97269);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(6,1.398997);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(7,0.4640349);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(8,0.1625382);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(9,0.05629411);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(10,0.03917347);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(11,0.0176149);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(12,0.01043592);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(13,0.009206394);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(14,0.003911495);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(15,0.00370781);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(16,0.001830459);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(17,0.002800958);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(18,0.001290679);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(19,0.001225378);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(1,0.08212324);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(2,0.08278893);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(3,0.06208517);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(4,0.04853226);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(5,0.03647922);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(6,0.02502267);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(7,0.01433877);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(8,0.008417082);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(9,0.004899357);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(10,0.004064921);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(11,0.002721918);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(12,0.002030136);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(13,0.001947607);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(14,0.001171742);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(15,0.001124404);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(16,0.0007953128);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(17,0.0010675);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(18,0.0007515898);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(19,0.0006157539);
   VbbHcc_algo_Sphericity_stack_10->SetEntries(112076);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Sphericity_stack_10->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_10->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_17->Modified();
   Sphericity_algo_17->cd();
   Sphericity_algo_17->SetSelected(Sphericity_algo_17);
}
