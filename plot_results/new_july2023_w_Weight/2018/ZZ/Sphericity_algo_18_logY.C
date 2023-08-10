void Sphericity_algo_18_logY()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Thu Aug 10 12:21:03 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(-0.2,-1.185985,1.133333,2.437377);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetLogy();
   Sphericity_algo_18->SetLeftMargin(0.15);
   Sphericity_algo_18->SetFrameBorderMode(0);
   Sphericity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_8 = new TH1D("VbbHcc_algo_Sphericity_stack_8","",25,0,1);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(1,62.73242);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(2,44.94665);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(3,25.99803);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(4,15.84685);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(5,10.85074);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(6,6.311279);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(7,0.9769692);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(8,0.3001798);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(11,0.3042088);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(1,4.551263);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(2,3.772745);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(3,2.848805);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(4,2.336422);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(5,1.885467);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(6,1.432444);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(7,0.5687967);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(8,0.3001798);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(11,0.3042088);
   VbbHcc_algo_Sphericity_stack_8->SetEntries(543);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Sphericity_stack_8->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_18->Modified();
   Sphericity_algo_18->cd();
   Sphericity_algo_18->SetSelected(Sphericity_algo_18);
}
