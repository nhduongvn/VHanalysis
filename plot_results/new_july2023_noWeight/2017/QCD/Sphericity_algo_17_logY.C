void Sphericity_algo_17_logY()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Thu Aug 10 12:32:16 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(-0.2,0.1869337,1.133333,6.648268);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetLogy();
   Sphericity_algo_17->SetLeftMargin(0.15);
   Sphericity_algo_17->SetFrameBorderMode(0);
   Sphericity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,530378);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,495709.6);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,262220.5);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,155159.4);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,76692.35);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,32252.95);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,8170.498);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,3648.119);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(9,1382.128);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,681.6104);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,752.6085);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(12,194.7751);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(13,172.7389);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(14,132.3327);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(15,63.45588);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(16,335.3277);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(17,51.75169);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(18,34.04373);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(19,28.88113);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(20,13.61749);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,22794.9);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,22922.57);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,6450.035);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,15552.85);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,3329.182);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,2346.128);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,1001.016);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,774.1377);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(9,396.2728);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,279.452);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,383.5217);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(12,57.80083);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(13,49.79235);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(14,43.5415);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(15,27.66995);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(16,269.7658);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(17,18.47282);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(18,15.22482);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(19,23.09868);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(20,9.629022);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(116866);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->Draw("HIST");
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
