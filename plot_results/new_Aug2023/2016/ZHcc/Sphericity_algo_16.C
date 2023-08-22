void Sphericity_algo_16()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Tue Aug 22 09:21:53 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,-0.03065958,1.133333,0.2759362);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_11 = new TH1D("VbbHcc_algo_Sphericity_stack_11","",25,0,1);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(1,0.2226727);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(2,0.2335968);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(3,0.1145982);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(4,0.06835835);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(5,0.06687967);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(6,0.02508772);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(7,0.00694347);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(1,0.0219562);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(2,0.02204111);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(3,0.01550593);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(4,0.01238463);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(5,0.01259643);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(6,0.007257203);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(7,0.003716305);
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
