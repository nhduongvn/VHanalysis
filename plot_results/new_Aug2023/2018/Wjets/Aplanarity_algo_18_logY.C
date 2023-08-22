void Aplanarity_algo_18_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_18/Aplanarity_algo_18
//=========  (Tue Aug 22 09:17:35 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_18 = new TCanvas("Aplanarity_algo_18", "Aplanarity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_18->SetHighLightColor(2);
   Aplanarity_algo_18->Range(-0.2,-1.767629,1.133333,4.40052);
   Aplanarity_algo_18->SetFillColor(0);
   Aplanarity_algo_18->SetBorderMode(0);
   Aplanarity_algo_18->SetBorderSize(2);
   Aplanarity_algo_18->SetLogy();
   Aplanarity_algo_18->SetLeftMargin(0.15);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_5 = new TH1D("VbbHcc_algo_Aplanarity_stack_5","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(1,3207.424);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(2,367.465);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(3,55.84221);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(4,24.14236);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(5,1.226192);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(6,0.7516523);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(7,1.153135);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(8,0.141324);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(1,89.87341);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(2,28.50782);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(3,8.454011);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(4,6.33666);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(5,0.5423289);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(6,0.5055792);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(7,0.6459741);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(8,0.1096877);
   VbbHcc_algo_Aplanarity_stack_5->SetEntries(13622);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_18->Modified();
   Aplanarity_algo_18->cd();
   Aplanarity_algo_18->SetSelected(Aplanarity_algo_18);
}
