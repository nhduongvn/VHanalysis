void Aplanarity_algo_16()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Thu Aug  3 12:24:54 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2,-11.76967,1.133333,105.927);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_9 = new TH1D("VbbHcc_algo_Aplanarity_stack_9","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(1,89.67365);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(2,8.386596);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(3,1.442648);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(4,0.3448616);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(5,0.0810631);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(6,0.02747902);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(7,0.006869754);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(8,0.008243705);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(9,0.002747902);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(10,0.001373951);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(1,0.3510088);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(2,0.1073442);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(3,0.04452109);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(4,0.02176747);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(5,0.01055352);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(6,0.006144495);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(7,0.003072247);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(8,0.003365478);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(9,0.00194306);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(10,0.001373951);
   VbbHcc_algo_Aplanarity_stack_9->SetEntries(72765);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Aplanarity_stack_9->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_9->Draw("HIST");
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
