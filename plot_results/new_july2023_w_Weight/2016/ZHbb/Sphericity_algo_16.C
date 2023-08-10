void Sphericity_algo_16()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Thu Aug 10 12:24:18 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,-4.200963,1.133333,37.80866);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_9 = new TH1D("VbbHcc_algo_Sphericity_stack_9","",25,0,1);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(1,31.23823);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(2,32.00733);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(3,17.67655);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(4,11.30247);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(5,6.89567);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(6,3.309142);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(7,0.9246707);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(8,0.220727);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(9,0.0804721);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(10,0.0433605);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(11,0.0217764);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(12,0.01428863);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(13,0.005512587);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(14,0.002161976);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(15,0.001615869);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(17,0.001246104);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(19,0.001622014);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(1,0.219029);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(2,0.2217917);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(3,0.1647561);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(4,0.1319614);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(5,0.1034362);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(6,0.07119978);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(7,0.03743353);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(8,0.01808049);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(9,0.0108316);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(10,0.007865791);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(11,0.005583132);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(12,0.004374936);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(13,0.002554512);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(14,0.001654391);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(15,0.001615869);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(17,0.001246104);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(19,0.001622014);
   VbbHcc_algo_Sphericity_stack_9->SetEntries(72116);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Sphericity_stack_9->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_9->Draw("HIST");
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
