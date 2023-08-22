void Sphericity_algo_17_logY()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Tue Aug 22 09:17:32 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(-0.2,-3.550168,1.133333,2.185016);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetLogy();
   Sphericity_algo_17->SetLeftMargin(0.15);
   Sphericity_algo_17->SetFrameBorderMode(0);
   Sphericity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_9 = new TH1D("VbbHcc_algo_Sphericity_stack_9","",25,0,1);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(1,21.5749);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(2,21.14895);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(3,11.6475);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(4,7.956426);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(5,5.258582);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(6,2.384288);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(7,0.6431115);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(8,0.177976);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(9,0.05675589);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(10,0.02181459);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(11,0.006957166);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(12,0.006682636);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(13,0.002934131);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(14,0.002110476);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(15,0.003903191);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(1,0.1863623);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(2,0.1828235);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(3,0.1354686);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(4,0.1126557);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(5,0.09256214);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(6,0.06241102);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(7,0.03237103);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(8,0.01678748);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(9,0.009047184);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(10,0.005451596);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(11,0.003189778);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(12,0.00334477);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(13,0.001720694);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(14,0.001601478);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(15,0.002259142);
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
