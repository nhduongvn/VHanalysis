void Sphericity_algo_17()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Thu Aug  3 12:24:52 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(-0.2,-0.01299741,1.133333,0.1169767);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetLeftMargin(0.15);
   Sphericity_algo_17->SetFrameBorderMode(0);
   Sphericity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_12 = new TH1D("VbbHcc_algo_Sphericity_stack_12","",25,0,1);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(1,0.08615635);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(2,0.0990279);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(3,0.05107099);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(4,0.03176367);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(5,0.02013775);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(6,0.008511832);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(7,0.002698874);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(8,0.002698874);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(9,0.0002076057);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(10,0.0002076057);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(11,0.0002076057);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(13,0.0002076057);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(16,0.0002076057);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(1,0.004229249);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(2,0.004534176);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(3,0.003256167);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(4,0.00256794);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(5,0.002044679);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(6,0.001329325);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(7,0.0007485328);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(8,0.0007485328);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(9,0.0002076057);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(10,0.0002076057);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(11,0.0002076057);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(13,0.0002076057);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(16,0.0002076057);
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
