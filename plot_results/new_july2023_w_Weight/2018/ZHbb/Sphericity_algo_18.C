void Sphericity_algo_18()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Thu Aug 10 12:24:19 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(-0.2,-5.014344,1.133333,45.1291);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetLeftMargin(0.15);
   Sphericity_algo_18->SetFrameBorderMode(0);
   Sphericity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_9 = new TH1D("VbbHcc_algo_Sphericity_stack_9","",25,0,1);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(1,38.20452);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(2,34.93774);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(3,19.31657);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(4,13.36552);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(5,8.894728);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(6,4.546548);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(7,1.194871);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(8,0.2421234);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(9,0.08882878);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(10,0.02825044);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(11,0.01574477);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(12,0.008265852);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(13,0.001892769);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(14,0.00497437);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(15,0.005514692);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(16,0.003348055);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(17,0.002455652);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(1,0.345879);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(2,0.3277864);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(3,0.2467283);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(4,0.2010441);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(5,0.1591274);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(6,0.154465);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(7,0.06324833);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(8,0.02533107);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(9,0.01540177);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(10,0.009000898);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(11,0.006128044);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(12,0.00482774);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(13,0.001892769);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(14,0.003518307);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(15,0.003911202);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(16,0.003348055);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(17,0.002455652);
   VbbHcc_algo_Sphericity_stack_9->SetEntries(47604);

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
