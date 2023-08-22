void Aplanarity_algo_16()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Tue Aug 22 09:21:56 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2,-0.03460565,1.133333,0.3114508);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_12 = new TH1D("VbbHcc_algo_Aplanarity_stack_12","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(1,0.2636621);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(2,0.03377988);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(3,0.006592261);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(4,0.001265921);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(5,0.0008126116);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(1,0.008552145);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(2,0.00304331);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(3,0.001306852);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(4,0.0005696068);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(5,0.0004700888);
   VbbHcc_algo_Aplanarity_stack_12->SetEntries(1132);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Aplanarity_stack_12->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_12->Draw("HIST");
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
