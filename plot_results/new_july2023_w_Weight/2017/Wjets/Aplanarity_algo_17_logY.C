void Aplanarity_algo_17_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Thu Aug 10 12:21:04 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_17 = new TCanvas("Aplanarity_algo_17", "Aplanarity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_17->SetHighLightColor(2);
   Aplanarity_algo_17->Range(-0.2,-3.064436,1.133333,4.46838);
   Aplanarity_algo_17->SetFillColor(0);
   Aplanarity_algo_17->SetBorderMode(0);
   Aplanarity_algo_17->SetBorderSize(2);
   Aplanarity_algo_17->SetLogy();
   Aplanarity_algo_17->SetLeftMargin(0.15);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_5 = new TH1D("VbbHcc_algo_Aplanarity_stack_5","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(1,2738.732);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(2,353.6937);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(3,63.15204);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(4,18.7474);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(5,3.195698);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(6,2.292255);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(7,0.0120051);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(9,0.1995989);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(10,0.009769569);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(11,0.08928212);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(13,0.08628121);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(1,61.22559);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(2,27.93733);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(3,12.29569);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(4,5.11227);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(5,1.881178);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(6,1.556793);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(7,0.0120051);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(9,0.1670886);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(10,0.009769569);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(11,0.08928212);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(13,0.08628121);
   VbbHcc_algo_Aplanarity_stack_5->SetEntries(16864);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Aplanarity_stack_5->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_5->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_17->Modified();
   Aplanarity_algo_17->cd();
   Aplanarity_algo_17->SetSelected(Aplanarity_algo_17);
}
