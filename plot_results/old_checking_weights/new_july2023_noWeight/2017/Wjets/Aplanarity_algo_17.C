void Aplanarity_algo_17()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Thu Aug  3 12:24:55 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_17 = new TCanvas("Aplanarity_algo_17", "Aplanarity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_17->SetHighLightColor(2);
   Aplanarity_algo_17->Range(-0.2,-333.0577,1.133333,2997.519);
   Aplanarity_algo_17->SetFillColor(0);
   Aplanarity_algo_17->SetBorderMode(0);
   Aplanarity_algo_17->SetBorderSize(2);
   Aplanarity_algo_17->SetLeftMargin(0.15);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_5 = new TH1D("VbbHcc_algo_Aplanarity_stack_5","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(1,2537.582);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(2,319.0655);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(3,56.73771);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(4,21.05022);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(5,2.386925);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(6,2.227885);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(7,0.0116142);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(9,0.2575652);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(10,0.0116142);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(11,0.1763629);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(13,0.09024302);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(1,55.26928);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(2,24.01082);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(3,10.47529);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(4,7.254547);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(5,1.257635);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(6,1.285676);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(7,0.0116142);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(9,0.1941589);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(10,0.0116142);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(11,0.1763629);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(13,0.09024302);
   VbbHcc_algo_Aplanarity_stack_5->SetEntries(17207);

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
