void Sphericity_algo_17()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Thu Aug  3 12:24:52 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(-0.2,-3.161955,1.133333,28.45759);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetLeftMargin(0.15);
   Sphericity_algo_17->SetFrameBorderMode(0);
   Sphericity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_9 = new TH1D("VbbHcc_algo_Sphericity_stack_9","",25,0,1);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(1,24.09108);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(2,23.86497);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(3,13.11959);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(4,8.905754);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(5,5.828957);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(6,2.62618);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(7,0.7090363);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(8,0.1986594);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(9,0.07268026);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(10,0.0290721);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(11,0.008075584);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(12,0.006460468);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(13,0.004845351);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(14,0.003230234);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(15,0.004845351);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(1,0.197256);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(2,0.1963281);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(3,0.1455667);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(4,0.1199326);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(5,0.09702807);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(6,0.06512747);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(7,0.03384046);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(8,0.01791251);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(9,0.01083453);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(10,0.006852361);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(11,0.003611511);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(12,0.003230234);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(13,0.002797464);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(14,0.00228412);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(15,0.002797464);
   VbbHcc_algo_Sphericity_stack_9->SetEntries(49206);

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
