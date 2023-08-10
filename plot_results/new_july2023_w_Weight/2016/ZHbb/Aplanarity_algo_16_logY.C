void Aplanarity_algo_16_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Thu Aug 10 10:42:29 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2,-3.759942,1.133333,2.913237);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLogy();
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_9 = new TH1D("VbbHcc_algo_Aplanarity_stack_9","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(1,92.97578);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(2,8.772965);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(3,1.504225);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(4,0.3613198);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(5,0.08568614);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(6,0.02779308);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(7,0.007173491);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(8,0.007599412);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(9,0.002680017);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(10,0.001615869);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(1,0.3783429);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(2,0.1153853);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(3,0.04770928);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(4,0.02316328);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(5,0.01131477);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(6,0.006294216);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(7,0.003217107);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(8,0.003409544);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(9,0.001936569);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(10,0.001615869);
   VbbHcc_algo_Aplanarity_stack_9->SetEntries(72116);

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
