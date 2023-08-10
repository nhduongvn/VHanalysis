void Sphericity_algo_16_logY()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Thu Aug 10 12:21:03 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,-2.583273,1.133333,0.06622089);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLogy();
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_11 = new TH1D("VbbHcc_algo_Sphericity_stack_11","",25,0,1);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(1,0.3125239);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(2,0.3339816);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(3,0.1608698);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(4,0.09493299);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(5,0.09393967);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(6,0.03491053);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(7,0.009609629);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(1,0.03069421);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(2,0.03136246);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(3,0.02173111);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(4,0.01716465);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(5,0.01764487);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(6,0.01008039);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(7,0.005149791);
   VbbHcc_algo_Sphericity_stack_11->SetEntries(376);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Sphericity_stack_11->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_16->Modified();
   Sphericity_algo_16->cd();
   Sphericity_algo_16->SetSelected(Sphericity_algo_16);
}
