void Sphericity_algo_17_logY()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Thu Aug 10 12:21:03 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(-0.2,-3.537845,1.133333,0.03348215);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetLogy();
   Sphericity_algo_17->SetLeftMargin(0.15);
   Sphericity_algo_17->SetFrameBorderMode(0);
   Sphericity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_11 = new TH1D("VbbHcc_algo_Sphericity_stack_11","",25,0,1);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(1,0.2504958);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(2,0.2030246);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(3,0.1184365);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(4,0.07526334);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(5,0.04273318);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(6,0.01703302);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(7,0.006390065);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(9,0.001319221);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(1,0.02151508);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(2,0.01960722);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(3,0.01474521);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(4,0.01169095);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(5,0.009154038);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(6,0.005462428);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(7,0.003178725);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(9,0.001319221);
   VbbHcc_algo_Sphericity_stack_11->SetEntries(413);

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
