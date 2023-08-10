void Aplanarity_algo_16()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Thu Aug  3 12:24:54 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2,-882.555,1.133333,7942.994);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_5 = new TH1D("VbbHcc_algo_Aplanarity_stack_5","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(1,6724.228);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(2,781.0826);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(3,182.5789);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(4,31.98887);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(5,5.316655);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(6,9.498089);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(7,6.965032);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(8,0.4494169);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(9,0.5405709);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(10,0.3784462);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(11,0.07097071);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(1,103.4945);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(2,41.86346);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(3,21.10637);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(4,7.253195);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(5,1.374118);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(6,6.266129);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(7,6.086001);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(8,0.3440433);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(9,0.4202643);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(10,0.3366437);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(11,0.07097071);
   VbbHcc_algo_Aplanarity_stack_5->SetEntries(71986);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_16->Modified();
   Aplanarity_algo_16->cd();
   Aplanarity_algo_16->SetSelected(Aplanarity_algo_16);
}
