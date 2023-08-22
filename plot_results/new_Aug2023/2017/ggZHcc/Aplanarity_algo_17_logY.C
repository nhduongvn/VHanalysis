void Aplanarity_algo_17_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Tue Aug 22 09:17:35 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_17 = new TCanvas("Aplanarity_algo_17", "Aplanarity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_17->SetHighLightColor(2);
   Aplanarity_algo_17->Range(-0.2,-3.971064,1.133333,0.07170993);
   Aplanarity_algo_17->SetFillColor(0);
   Aplanarity_algo_17->SetBorderMode(0);
   Aplanarity_algo_17->SetBorderSize(2);
   Aplanarity_algo_17->SetLogy();
   Aplanarity_algo_17->SetLeftMargin(0.15);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_12 = new TH1D("VbbHcc_algo_Aplanarity_stack_12","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(1,0.2454051);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(2,0.02761144);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(3,0.005687859);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(4,0.0006465882);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(5,0.0005423052);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(1,0.007044993);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(2,0.002349833);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(3,0.001067378);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(4,0.0003332643);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(5,0.0003291566);
   VbbHcc_algo_Aplanarity_stack_12->SetEntries(1460);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_17->Modified();
   Aplanarity_algo_17->cd();
   Aplanarity_algo_17->SetSelected(Aplanarity_algo_17);
}
