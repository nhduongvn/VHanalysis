void Sphericity_algo_17_logY()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Thu Aug 10 12:21:03 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(-0.2,-4.977028,1.133333,-0.2047702);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetLogy();
   Sphericity_algo_17->SetLeftMargin(0.15);
   Sphericity_algo_17->SetFrameBorderMode(0);
   Sphericity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_12 = new TH1D("VbbHcc_algo_Sphericity_stack_12","",25,0,1);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(1,0.09644001);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(2,0.1097628);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(3,0.05603913);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(4,0.03551916);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(5,0.0222604);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(6,0.009361828);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(7,0.002862038);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(8,0.00319929);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(9,0.0002292386);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(10,0.0001784253);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(11,0.0001965434);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(13,0.0001061432);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(16,6.327442e-05);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(1,0.004819373);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(2,0.005125617);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(3,0.003658543);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(4,0.00294683);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(5,0.002363809);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(6,0.001499587);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(7,0.0008255637);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(8,0.0008975704);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(9,0.0002292386);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(10,0.0001784253);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(11,0.0001965434);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(13,0.0001061432);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(16,6.327442e-05);
   VbbHcc_algo_Sphericity_stack_12->SetEntries(1460);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Sphericity_stack_12->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_12->Draw("HIST");
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
